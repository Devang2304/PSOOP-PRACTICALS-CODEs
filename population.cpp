#include <iostream>
using namespace std;

class population{
int p,b,d,n;

public:
population(){
cout<<"Enter the starting population:";
cin>>p;
cout<<"Enter birth rate:";
cin>>b;
cout<<"Enter death rate:";
cin>>d;
cout<<"Enter number of years:";
cin>>n;
}

int brate(){
return b;
}
int drate(){
return d;
}
int nyrs(){
return n;
}
int popul(){
return p;
}

int GrowthRate(int brate,int drate){
int pop_growth=brate-drate;
return pop_growth;
}

int estimated(int pop,int g_rate,int yrs){
int e_pop=pop+((pop*yrs*g_rate)/100);
return e_pop;
}

};

int main()
{
population a;
int pg_rate=a.GrowthRate(a.brate(),a.drate());
int estimated_population=a.estimated(a.popul(),pg_rate,a.nyrs());
cout<<"The estimated population is "<<estimated_population;
return 0;
}
