#include<iostream>
using namespace std;
class coworker{
    protected:
    string name;
    string address;
    string division;
    public:
    coworker(){
       cout<<"Enter the name of the employee:";
       cin>>name;
       cout<<"Enter the address of the employee:";
       cin>>address;
       cout<<"Enter the division of the employee:";
       cin>>division;
    }
    ~coworker(){
       cout<<"Info of employee "<<endl;
    }
    virtual int income()=0;
    virtual int display()=0;
};
class laborer : public coworker{
  protected:
  int wages;
  int hours;
  public:
  laborer(int w,int h){
     wages=w;
     hours=h;
  }
  int income(){
  cout<<"The wages of the worker:"<<wages*hours<<endl;
  return 0;
 }
 int display(){
 cout<<"Name of the Loborer: "<<name<<endl;
 cout<<"The address of the  LOBORER:- "<<address<<endl;
 cout<<"The division of the LOBORER:- "<<division<<endl;
 cout<<"Number of hours worked:-"<<hours<<endl;
 return 0;
 }
  ~laborer(){
     cout<<"info about laborer "<<endl;
  }
};
class Employee : public coworker{
    private:
    int salary;
    public:
    Employee(int s){
salary=s;
    }
    int income(){
        cout<<"Salary of the employee:"<<salary<<endl;
        return 0;
    }
int display(){
    cout<<"Name of the employee :"<<name<<endl;
 cout<<"Address of the employee:"<<address<<endl;
 cout<<"Division of employee:"<<division<<endl;
 return 0;
}
~Employee(){
    cout<<"info display of the employee";
}
};
int main(){
int h,w;
cout<<"Enter the wages of loborer:";
cin>>w;
cout<<"Enter the no. of hours worked:";
cin>>h;
laborer lb(w,h);
coworker* cp[2];
cp[0]=&lb;
cp[0]->display();
cp[0]->income();
int s;
cout<<"Enter the salary of the employee:";
cin>>s;
Employee e(s);
cp[1]=&e;
cp[1]->income();
cp[1]->display();
return 0;
}
