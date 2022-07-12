#include<iostream>
#include<cmath>
using namespace std;
class Logarithm{
    protected:
    int n;
    public:
    void getdata(){
        cout<<"Enter the number:";
        cin>>n;
    }
    virtual void log_calculate()=0;
};
class Log10:public Logarithm{
    public:
    void log_calculate(){
        cout<<"log "<<n<<" "<<"of base 10"<<"="<<log10(n)<<endl;
    }
};
class LogE: public Logarithm{
    public:
    void log_calculate(){
        cout<<"log "<<n<<" "<<"of base e"<<"="<<log(n)<<endl;
    }
   
};
class Log2: public Logarithm{
    public:
    void log_calculate(){
        cout<<"log "<<n<<" "<<"of base 2"<<"="<<log2(n)<<endl;
    }
};
int main()
{
    Log10 L10;
    L10.getdata();
    L10.log_calculate();
    Log2 L2;
    L2.getdata();
    L2.log_calculate();
    LogE LE;
    LE.getdata();
    LE.log_calculate();
    return 0;
}
