#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> m;
    int n,c=0;
    vector<int>count;
    string s;
    cout<<"Enter the number:";
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>s;
        m.push_back(s);
    }
    for (int i = 0; i < m.size(); i++){
        for (int j = 0; j < n; j++){
            if (m[i]==m[j])
            {
             c++;
            }
        }
        count.push_back(c);
        c=0;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<m[i]<<" "<<count[i]<<endl;
    }
    
    
    return 0;
}