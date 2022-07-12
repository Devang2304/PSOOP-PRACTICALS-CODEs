#include<iostream>
using namespace std;

class cow
{
    char name[30];
    int idnum;
    string dob;
    int milk;
public:
string n,int u,int db,int c;
cow(string n,int u,int db,int c)
 {
   name=n;
   dob=db;
   idnum=u;
   milk=c;
 }
    void info()
    {
        cout << "Enter the name of the cow: " << endl;
        cin >> n;
        cout << "Enter the id number of the cow: " << endl;
        cin >> u;
        cout << "Enter the date of birth of the cow: " << endl;
        cin >> db;
        cout << "Enter the number of litres of milk given by the cow: " << endl;
        cin >> c;
    }
};

int main()
{
    int num; 
    float sum = 0;
    cout << "Enter the number of cows: " << endl;
    cin >> num;

    cow data[20];
    for(int i = 0; i < num; i++)
    {
    data[i].info();
    }
        
    for(int i = 0; i < num; i++)
        {
        sum = sum + data[i].milk;
        }

    cout << "Total milk extracted: " << sum << endl;
    cout << "Average milk extracted: " << sum / num << endl;

    
 
    return 0;
}