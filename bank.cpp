#include<iostream>
using namespace std;

class bank{
string name;
string type;
int account_no,balance;
public:
bank(){
name="unknown";
type='n';
account_no=0;
balance=0;
}

bank(string k,string a,int no,int bal){
name=k;
type=a;
account_no=no;
balance=bal;
}
void display(){
cout<<"The name of the acc holder: "<<name<<endl;
cout<<"A/c number : "<<account_no<<endl;
cout<<"A/c type :"<<type<<endl;
cout<<"Balance amount: "<<balance<<endl;
}
void deposit(int a){
balance+=a;
}
void withdraw(int a1){
balance-=a1;
}


};



int main(){
bank d2("Devang","saving",2345,50000);
int flag,amount;
cout<<"enter the num for action: 1.DEPOSIT 2.WITHDRAW : ";
cin>>flag;
if(flag==1){
cout<<"Enter the amount to deposit:";
cin>>amount;
d2.deposit(amount);
}
if(flag==2){
cout<<"Enter the amount to withdraw:";
cin>>amount;
d2.withdraw(amount);
}
d2.display();

return 0;
}