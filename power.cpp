#include<iostream>
#include<math.h>
using namespace std;
class power{
int b;
double a;
public:
void raisePower(double a){
this->a=a;
this->b=2;
}
void raisePower(double a,int b){
this->a=a;
this->b=b;
}
void display(){
cout<<"value of a to the power b: "<<pow(a,b)<<endl;
}

};

int main(){
double c;
int d;
power p1,p2;
cout<<"Enter the number:";
cin>>c;
p1.raisePower(c);
cout<<"Enter base of 2nd number:";
cin>>c;
cout<<"Enter power of 2nd number:";
cin>>d;
p2.raisePower(c,d);
p1.display();
p2.display();
return 0;
}
