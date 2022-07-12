#include<iostream>
#include<math.h>
using namespace std;

int fac(int a)
{
int i,fac=1;
for(i=a;i>1;i--){
fac=fac*i;
}
return fac;
}
class series{

float deg,rad,sum=0.00;
int l;
public:
series(int p,int limit){
deg=p;
l=limit;
rad=deg*(3.1432/180);
}
void value(){
   int i, j;
for(i=1,j=1;i<=l;i++,j=j+2){
if(i%2!=0)
{
sum=sum+((pow(rad,j))/(fac(j)));
}
else sum=sum-((pow(rad,j))/(fac(j)));
}
}
void display(){
cout<<sum<<endl;
cout<<"sum:"<<sin(rad)<<endl;
}

};
int main(){
 int x,limit;
 cout<<"Enter the number and the limit:";
 cin>>x>>limit;
 series s(x,limit);
 s.value();
 s.display();
 return 0;
}
