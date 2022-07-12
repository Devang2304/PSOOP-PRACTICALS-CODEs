#include<iostream>
using namespace std;

class dates{
    int year,month,date,hrs,min,sec;
    public:
    dates(){
        year=2000;
        month=1;
        date=1;
        hrs=00;
        min=00;
        sec=0;
    }
    void setDate(int y, int m, int d){
        year=y;
        month=m;
        date=d;

    }
    void setDate(int y, int m, int d, int h, int mi){
        year=y;
        month=m;
        date=d;
        hrs=h;
        min=mi;
       
    }
    void setDate(int y, int m, int d, int h, int mi, int s){
        year=y;
        month=m;
        date=d;
        hrs=h;
        min=mi;
        sec=s;
    }
    void display(){
cout<<"Date:"<<date<<"/"<<month<<"/"<<year<<endl;
cout<<"Time:"<<hrs<<":"<<min<<":"<<sec<<endl;
    }

};

int main(){
    dates s1;
    s1.setDate(2003,8,30);
    s1.display();
    s1.setDate(2023,5,23,5,45);
    s1.display();
    s1.setDate(2022,6,8,12,10,30);
    s1.display();
    return 0;
}
