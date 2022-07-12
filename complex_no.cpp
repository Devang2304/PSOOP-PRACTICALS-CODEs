#include<iostream>
using namespace std;
class complex{
int r;
int i;
public:
complex(){
r=0;
i=0;
}
complex(int k){
r=k;
i=k;
}
complex(int l, int m){
r=l;
i=m;
}
int return_r(){
return r;
}
int return_i(){
return i;
}
};


int main(){
int a,b,c,s1,s2;
cout<<"The real and imaginary value of 1st complex no: ";
cin>>a;
cout<<"The real value of 2nd complex no: ";
cin>>b;
cout<<"The imaginary value of 2nd complex no: ";
cin>>c;

complex c1(a),c2(b,c);
s1=c1.return_r()+c2.return_r();
s2=c1.return_i()+c2.return_i();
cout<<endl<<"The sum of the complex numbers: "<<s1<<"+"<<s2<<"i"<<endl;
return 0;
}
