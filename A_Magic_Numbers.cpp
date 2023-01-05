#include<bits/stdc++.h>
using namespace std;

bool magic(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]!='1' && s[i]!='4') return false;
        if(s[0] == '4') return false;
        if(s.find("444")!=s.npos) return false;
    }
    return true;
}

int main(){

   string s;cin>>s;
   if(magic(s)) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

    return 0;
}