#include<iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    string a;
    cin>>a;
    string result="";
    for (int i = 0; i < a.length(); i++)
    {
        if(isupper(a[i]))
        result += char(int(a[i]+s-65)%26 +65);
        else
        result += char(int(a[i]+s-97)%26 +97);
    }
    cout<<result<<endl;
    return 0;
}