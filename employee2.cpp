#include<iostream>
using namespace std;
class employee{
int emp_id;
string name;
public:
employee(int id,string nam){
emp_id=id;
name=nam;
}
int id(){
return emp_id;
}
string get_name(){
return name;
}

};

class fulltime_emp : public employee{
int basic,da,hra,sal;
public:
fulltime_emp(int id,string n,int b,int d,int h):employee(id,n){
basic=b;
da=d;
hra=h;
}
int calculate_salary(){
sal=basic+da+hra;
return sal;
}
void display(){
cout<<"Name :"<<get_name()<<endl;
cout<<"Employee id:"<<id()<<endl;
cout<<"Salary :"<<sal<<endl;
}
};

class parttime_emp : public employee{
int hrs,rate,wage;
public:
parttime_emp(int id,string n,int r,int h):employee(id,n){
rate=r;
hrs=h;
}
int calculate_wages(){
wage=hrs*rate*30;
return wage;
}
void display(){
cout<<"Name  :"<<get_name()<<endl;
cout<<"Employee id:"<<id()<<endl;
cout<<"Wage  :"<<wage<<endl;
}
};

void salar(){
int id,b,d,h;
string n;
cout<<"Enter \nemployee id  :";
cin>>id;
cout<<"Name  :";
cin>>n;
cout<<"Basic pay :";
cin>>b;
cout<<"DA  :";
cin>>d;
cout<<"HRA :";
cin>>h;
fulltime_emp f(id,n,b,d,h);
f.calculate_salary();
    f.display();

}
void wag(){
int id,h,r;
string n;
cout<<"Enter employee id:";
cin>>id;
cout<<"Name :";
cin>>n;
cout<<"Rate per hr:";
cin>>r;
cout<<"Hrs worked :";
cin>>h;
parttime_emp p(id,n,r,h);
p.calculate_wages();
    p.display();
}

int main(){
    int flag;
    cout<<"Enter input to perform following:1)salary2)wages:";
    cin>>flag;
    switch(flag){
    case 1:
    salar();
    break;
    case 2:
    wag();
    break;
    default:
    cout<<"Enter a valid input"<<endl;
    }
return 0;
}