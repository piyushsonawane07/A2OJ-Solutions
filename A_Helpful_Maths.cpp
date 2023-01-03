#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,ans="";
    cin>>s;

    vector<char> v;

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch!='+')
        v.push_back(ch);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        ans+=v[i];
        if(i!=v.size()-1)
            ans+='+';
    }

    cout<<ans<<endl;

    return 0;
}