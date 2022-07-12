#include<iostream>
using namespace std;
class employee{
string name;
int age,salary;
public:
employee(){
name="unknown";
age=18;
salary=20000;
}
void getter(){
cout<<"Enter name:";
cin>>name;
cout<<"Enter age:";
cin>>age;
cout<<"Enter the salary:";
cin>>salary;

}

int getage()
{
 return age;
}  
void display(){
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Salary: "<<salary<<endl;
}
};
int main(){
employee e[3];
employee temp ;
for(int i=0;i<10;i++){
e[i].getter();
}
for(int i=0;i<10;i++){
for(int j=i+1;j<10;j++){
if( e[i].getage() > e[j].getage() )
{
       temp = e[i];
       e[i] = e[j];
       e[j] = temp;
}
}
}
for(int i=0;i<10;i++){
e[i].display();
}
return 0;
}