#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if(y>x)
            cout<<(y-x)<<"\n";
            else if((x-y)%2==0)
            cout<<(x-y)/2<<"\n";
            else
            cout<<2+(x-y)/2<<"\n";
        
    }
    
    return 0;
}