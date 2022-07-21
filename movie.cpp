#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int>& a,pair<string, int>& b){
    return a.second>b.second;
}
void sort(map<string, int>& M){
    vector<pair<string, int> > A;
    for (auto& it : M){
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    for (auto& it : A) {
        cout<<"Movie name:"<<' '<<' '<<it.first <<"nos of votes got:"<<' '<< it.second << endl;
    }
    A.erase(A.begin()+1,A.end());
    for (auto& it : A) {
        cout<<"The winner movie is"<<' '<<it.first<<' '<<"and nos of votes got:"<<' '<< it.second << endl;
    }
}
int main(){
    map<string,int>m;
    int n;
    cout<<"Enter count for movie:";
    cin>>n;
    for (int i = 0; i < n; i++){
        string s;
        cin>>s;
        m[s]++;
    }
    sort(m);
    return 0;
}