#include<iostream>
using namespace std;
class Techrole{
int coursework,aptitudetest,techtest,interview;
public:
Techrole(int c,int a,int t,int i){
coursework = c;
aptitudetest = a;
techtest = t;
interview = i;
}
Techrole(int t,int i){
techtest = t;
interview = i;
coursework =0;
aptitudetest=0;
}
Techrole(int i){
interview = i;
coursework =0;
aptitudetest=0;
techtest=0;
}

void display(int flag){
int sum = coursework+aptitudetest+techtest+interview;

if(sum>=80){
cout<<"You are eligible for programmer role"<<endl;
}
else if(sum>=85){
cout<<"you are eligible for team leader role"<<endl;
}
else if(sum>=90){
cout<<"you are eligible for project manager"<<endl;
}
else{
cout<<"you are not elgigible"<<endl;
}
}
};

int main(){
int flag;
cout<<"enter 1 for programmer role or 2 for team leader role or 3 for project manager role : ";
cin>>flag;
int a,b,c,d;
switch(flag){
case 1:
cout<<"enter the marks for coursework:";
cin>>a;
cout<<"enter the marks for aptitudetest: ";
cin>>b;
cout<<"enter the marks for techtest: ";
cin>>c;
cout<<"enter the marks for interview: ";
cin>>d;
break;
case 2:
cout<<"enter the marks for techtest: ";
cin>>c;
cout<<"enter the marks for interview: ";
cin>>d;
break;
case 3:
cout<<"enter the marks for interview: ";
cin>>d;
break;

}
Techrole e1(a,b,c,d);
e1.display(flag);

}
