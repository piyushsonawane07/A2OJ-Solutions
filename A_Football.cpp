#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;

    vector<string> v(n);
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }

    int max = INT_MIN;
    string ans = "";
    for(auto item: mp){
        if(item.second>max){
            max = item.second;
            ans = item.first;
        }
    }

    cout<<ans<<endl;
    

    return 0;
}