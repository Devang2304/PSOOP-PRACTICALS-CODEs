#include<iostream>
using namespace std;
class Vehicle{
    protected:
    int no_of_wheels;
    int engine_capacity;
    public:
    Vehicle(){
       cout<<"Enter the numbers of wheels:";
       cin>>no_of_wheels;
       cout<<"Enter the engine capacity:";
       cin>>engine_capacity;
    }
    ~Vehicle(){
       cout<<"Info of main class vehicle"<<endl;
    }
    virtual void spec()=0;
    virtual void display_stats()=0;

};
class LMV : public Vehicle{
  protected:
   int speed,mileage,rpm;
  public:
  LMV(){};
  LMV(int s,int m,int r){
     speed=s;
     mileage=m;
     rpm=r;
  }
  void spec(){
      cout<<"<------Information entered by user------>"<<endl;
  cout<<"Enter the Speed of LMV:"<<speed<<endl;
  cout<<"enter the mileage of LMV:"<<mileage<<endl;
  cout<<"enter the rpm of LMV:"<<rpm<<endl;
 }
 void display_stats(){
     cout<<"<----Displaying the information about LMV------>"<<endl<<endl;
 cout<<"Speed of LMV: "<<speed<<endl;
 cout<<"mileage of LMV: "<<mileage<<endl;
 cout<<"rpm of LMV:"<<rpm<<endl;

 }
  ~LMV(){
     cout<<"info about LMV "<<endl;
  }
};
class HMV : public Vehicle{
    protected:
   int speed,mileage,rpm;
  public:
  HMV(){};
  HMV(int s,int m,int r){
     speed=s;
     mileage=m;
     rpm=r;
  }
  void spec(){
      cout<<"<------Information entered by user------>"<<endl;
  cout<<"Enter the Speed of HMV:"<<speed<<endl;
  cout<<"enter the mileage of HMV:"<<mileage<<endl;
  cout<<"enter the rpm of HMV:"<<rpm<<endl;
 }
 void display_stats(){
     cout<<"<----Displaying the information about HMV------>"<<endl<<endl;
 cout<<"Speed of HMV: "<<speed<<endl;
 cout<<"mileage of HMV: "<<mileage<<endl;
 cout<<"rpm of HMV:"<<rpm<<endl;

 }
~HMV(){
    cout<<"info display_stats of the HMV"<<endl;
}
};
class TW: public Vehicle{
    protected:
   int speed,mileage,rpm;
  public:
  TW(){};
  TW(int s,int m,int r){
     speed=s;
     mileage=m;
     rpm=r;
  }
  void spec(){
    cout<<"<------Information entered by user------>"<<endl;  
  cout<<"Entered Speed of TW:"<<speed<<endl;
  cout<<"entered mileage of TW:"<<mileage<<endl;
  cout<<"entered rpm of TW:"<<rpm<<endl;
 }
 void display_stats(){
     cout<<"<----Displaying the information about TW------>"<<endl<<endl;
 cout<<"Speed of TW: "<<speed<<endl;
 cout<<"mileage of TW: "<<mileage<<endl;
 cout<<"rpm of TW:"<<rpm<<endl;

 }
~TW(){
    cout<<"info display_stats of the TW"<<endl;
}
};
int main(){
TW T(140,7,2000);
Vehicle* cp[3];
cp[0]=&T;
cp[0]->spec();
cp[0]->display_stats();

HMV H(120,10,1000);
cp[1]=&H;
cp[1]->spec();
cp[1]->display_stats();

LMV L(300,17,5000);
cp[2]=&L;
cp[2]->spec();
cp[2]->display_stats();

return 0;
}
