#include <iostream>
using namespace std;
class grandfather{
    public:
    int prop;
    void get(int a){
       prop=a;
    }
};
class father:public grandfather{
    public:
    int pr=0;
    void get(int b){
        pr=b;
        pr=pr+prop;
    }
};

class child:public father{
    public:
    void display(){
        cout<<"The property got by child from all is :"<<pr<<endl;
    }
};

int main() {
    int a,b;
    cout<<"Enter the property owned by granfather:";
    cin>>a;
    cout<<"Enter the property owned by father:";
    cin>>b;
    child c;
    c.grandfather::get(a);
    c.father::get(b);
    c.display();
    return 0;
}