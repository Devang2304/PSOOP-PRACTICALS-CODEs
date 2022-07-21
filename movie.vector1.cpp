#include <bits/stdc++.h>
using namespace std;
void movie(vector<string>& m)
    {
        unordered_map<string,int> vote ;
        for (auto& s : m)
        {
            vote[s]++;
        }
        int max = 0;
        string winner_movie;
        for (auto& a : vote){
            string k  = a.first;
            int value = a.second;
            if (value > max){
                max = value;
                winner_movie = k;
            }
            else if (value == max &&
                winner_movie>k)
                winner_movie = k;
        }
        cout<<"Winner movie is:"<<winner_movie<<endl;
    }
int main(){
    vector<string> m;
    int n;
    cout<<"Enter the nos. of votes you will take:";
    cin>>n;
    string s;
    for (int i = 0; i < n; i++){
        cin>>s;
        m.push_back(s);
    }
    movie(m);
    }
