#include<iostream>
using namespace std;
class Person
{
public:
string Name,city;
Person()
{
cout<<"Enter the name.:";
cin>>Name;
cout<<"Enter the city:";
cin>>city;
}
void display()
{
cout<<"Name of person:"<<Name<<endl;
cout<<"City:"<<city<<endl;
}
};
class student :public Person
{
long int Roll;
string Class ,branch;
public:
student()
{
cout<<"Enter the class.:";
cin>>Class;
cout<<"Enter the Roll no:";;
cin>>Roll;
cout<<"Enter the branch:";
cin>>branch;
}
void display()
{
Person::display();
cout<<"Class:"<<Class<<endl;
cout<<"Roll no:"<<Roll<<endl;
cout<<"Branch:"<<branch<<endl;
}
};
int main()
{
student s1;
s1.display();
return 0;
}
