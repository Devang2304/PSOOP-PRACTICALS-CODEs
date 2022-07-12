#include<iostream>
using namespace std;
class volume{
float l,b,h,r;
public:
volume(float c_h,float c_r){
h=c_h;
r=c_r;
cout<<"volume of the cone:"<<(c_r*c_r*c_h*3.14)/3<<endl;
}
volume(float c_l,float c_b ,float c_h){
l=c_l;
b=c_b;
h=c_h;
cout<<"Volume of the cuboid:"<<c_l*c_b*c_h<<endl;
}
volume(float c_l){
l=c_l;
cout<<"Volume of the cube:"<<c_l*c_l*c_l<<endl;
}
};

int main(){
int flag;
cout<<"enter 1 cuboid, 2 for cone, 3 for cube : ";
cin>>flag;
float a,b,c,d;
switch(flag){
case 1:
cout<<"enter the length of the cuboid:";
cin>>a;
cout<<"enter the breadth of the cuboid: ";
cin>>b;
cout<<"enter the height of the cuboid: ";
cin>>c;
break;
case 2:
cout<<"enter the height of the cone: ";
cin>>c;
cout<<"enter the radius of the cone: ";
cin>>d;
break;
case 3:
cout<<"enter the length of the cube:";
cin>>a;
break;

}
if(flag==1)
volume v1(a,b,c);
else if(flag==2)
volume v1(c,d);
else if(flag==3)
volume v1(a);
}