#include <iostream>
using namespace std;

class home{
    int no_of_rooms;
    int size;
    public:
    void get(int rooms,int siz){
        no_of_rooms=rooms;
        size=siz;
    }
    void display1(){
        cout<<" Size of Room:"<<size<<endl;
        cout<<"rooms count:"<<no_of_rooms<<endl;
    }
    int si(){
        return size;
    }
   
};

class car{
    int car_number;
    int seat_capacity;
    string model_name;
    public:
    void getcar_data(int no,int seats,string model){
        car_number=no;
        seat_capacity=seats;
        model_name=model;
    }
   
    void display2(){
        cout<<"Car number:"<<car_number<<endl;
        cout<<"Seating Capacity:"<<seat_capacity<<endl;
        cout<<"ModelName:"<<model_name<<endl;
    }
   
};
class motorhome:public home,public car{
    string category;
    public:
    void cate(){
        int a =si();
        if(a<=200){
            category="Economy";
        }
        if(a>200 && a<=700){
            category="Middle Class";
        }
        if(a>700 && a<=3000){
            category="First Class";
        }
        if(a>3000){
            category="Luxury";
        }
    }
    void display3(){
        cout<<"Type of class:"<<category<<endl;
    }
}m;
int main()
{
    int a,b;
    string str;
    cout<<"Enter the Size:";
    cin>>a;
    cout<<"Enter No of rooms:";
    cin>>b;
    m.get(b,a);
    cout<<"Enter Car Number:";
    cin>>a;
    cout<<"Enter seating capacity:";
    cin>>b;
    cout<<"Enter Car modelName:";
    cin>>str;
    m.getcar_data(a,b,str);
    m.cate();
    m.display1();
    m.display2();
    m.display3();
    return 0;
}
