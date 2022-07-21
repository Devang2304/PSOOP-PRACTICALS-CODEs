#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int m, n;
    char input = 'y';
    while (true)
    {
        float output;
        int c = 0, k = 0;
        cout << "Enter:1.'+'\t2.'-'\t3.'*'\t4.'/'\t5.Exponent\t6.'log'\t" << endl;
        cin >> c;
        cout << "Enter m:";
        cin >> m;
        cout << "Enter n:";
        cin >> n;
        if (c == 1)
        {
            output = m + n;
        }
        if (c == 2)
        {
            output = m - n;
        }
        if (c == 3)
        {
            output = m * n;
        }
        if (c == 4)
        {
            try
            {
                if (n == 0)
                {
                    throw n;
                }
                output = m / n;
            }
            catch (int n)
            {
                k = 1;
                cout << "Can't divisible by zero please enter another number\n";
            }
        }
        if (c == 5)
        {
            output = pow(m, n);
        }
        if (c == 6)
        {
            try
            {
                if (n == 0 || m == 0)
                {
                    throw n;
                }
                output = log2(m) / log2(n);
            }
            catch (int n)
            {
                k = 1;
                cout << "can't divide by zero since value of log0 is 0\n";
            }
        }
        if (k == 0)
        {
            cout << "Result is:" << output << endl;
        }
        cout << "Again?(y/n)";
        cin >> input;
        if (input == 'n')
        {
            break;
        }
    }

    return 0;
}
