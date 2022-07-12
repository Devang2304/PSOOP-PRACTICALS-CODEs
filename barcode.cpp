#include<iostream>
using namespace std;
class product{
int mem_bar;
string name;
public:
product(){
mem_bar=0;
name="unknown";
}
void scan(int b,string n){
mem_bar=b;
name=n;
}
int get_bar(){
return mem_bar;
}
string get_name(){
return name;
}
};
class prepackedfood:public product{
int price;
public:
void scan(int pr){
price=pr;
}
void printer(){
cout<<"Name of the product:"<<get_name()<<endl;
cout<<"Barcode of the product:"<<get_bar()<<endl;
cout<<"Price of the product:"<<price<<endl;
}
};
class freshfood : public product{
int weight,price;
public:
void scan(int wt,int pr){
weight=wt;
price=pr;
}
void printer(){
cout<<"Name of the product: "<<get_name()<<endl;
cout<<"Barcode of the product: "<<get_bar()<<endl;
cout<<"Weight of the product: "<<weight<<endl;
cout<<"Price of product/kg: "<<price<<endl;
cout<<"Cost: "<<(price*weight)<<endl;
}
};
int main(){
freshfood f1;
prepackedfood pr1;
product *ptr1,*ptr2;
ptr1=&pr1;
ptr2=&f1;
ptr1->scan(3,"Bourbon Biscuits");
pr1.scan(20);
ptr2->scan(5,"Potato");
f1.scan(6,30);
pr1.printer();
f1.printer();
return 0;
}