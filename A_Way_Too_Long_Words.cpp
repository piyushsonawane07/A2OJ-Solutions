#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        if(s.length()>10){
            string ans = "";
            int count = 0;
            ans+=s[0];
            string num = to_string(s.length()-2);
            ans+=num;
            ans+=s[s.length()-1];
            cout<<ans<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    
    return 0;
}