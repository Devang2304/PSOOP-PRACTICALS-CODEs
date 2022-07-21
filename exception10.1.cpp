#include <iostream>
#include <map>
#include <iterator>
#include <vector>
using namespace std;
int main()
{
    int end = 0;
    map<int, string> month_array;
    month_array[1] = "January";
    month_array[2] = "February";
    month_array[3] = "March";
    month_array[4] = "April";
    month_array[5] = "May";
    month_array[6] = "June";
    month_array[7] = "July";
    month_array[8] = "August";
    month_array[9] = "September";
    month_array[10] = "October";
    month_array[11] = "November";
    month_array[12] = "December";

    char question = 'y';
    while (true)
    {
        int month, date;
        try
        {
            cout << "Enter the month:";
            cin >> month;
            if (month < 1 || month > 12)
            {
                throw month;
            }
            try
            {
                cout << "Enter the date:";
                cin >> date;

                if (month == 2)
                {
                    if (date > 29)
                    {
                        throw "invalid,date February has only 29 or 28 days";
                    }
                }
                if (month == 4 || month == 6 || month == 9 || month == 11)
                {
                    if (date > 30)
                    {
                        throw "invalid date!! Please enter a valid date.";
                    }
                }
                else if (date > 31)
                {
                    throw "invalid date!! Please enter a valid date.";
                }
            }
            catch (char const *c)
            {
                cout << c << endl;
                end = 1;
            }
        }
        catch (int a)
        {
            cout << a << " "
                 << "is invalid month,Enter a valid month\n";
            end = 1;
        }
        if (end == 0)
        {
            map<int, string>::iterator pr;
            cout << date << " ";
            for (pr = month_array.begin(); pr != month_array.end(); ++pr)
            {
                if (month == pr->first)
                {
                    cout << pr->second << endl;
                }
            }
        }
        cout << "Again?(y/n)";
        cin >> question;
        if (question == 'n')
        {
            break;
        }
    }
    return 0;
}
