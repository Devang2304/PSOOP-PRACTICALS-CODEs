#include <iostream>
using namespace std;

int intrest(int balance,int int_rate,int no_of_months){
    if(no_of_months==0){
        return balance;
    }
    else{
        int b;
        b=(balance*int_rate)/100;
        balance=balance+b;
        return intrest(balance,int_rate,(no_of_months-1));
    }
}

int main()
{
    while(true){
        int flag;
        cout<<"Enter 1. To calculate 2.End:";
        cin>>flag;
        if (flag==1){
            int in_amount,month,rate;
            cout<<"Enter amount:";
            cin>>in_amount;
            cout<<"Enter rate of interest:";
            cin>>rate;
            cout<<"Enter nos. of months:";
            cin>>month;
            int k=intrest(in_amount,rate,month);
            cout<<"The total amount payable in "<<month<<endl;
            cout<<" total months will be:"<<k<<endl;
        }
        if (flag==2){
            break;
        }
    }
    return 0;
}

