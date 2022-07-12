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
}};
int main(){
bank d2("Devang","saving",2345,50000);
d2.display();

return 0;
}