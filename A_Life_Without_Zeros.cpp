#include<bits/stdc++.h>
using namespace std;

int removeZeroes(int n){
    string s = to_string(n);
    string ans = "";
    for(int i=0;i<s.length();i++){
        if(s[i]!='0')
            ans+=s[i];
    }
    return stoi(ans);
}

int main(){

    int n1;cin>>n1;
    int n2;cin>>n2;
    int sz = n1+n2;
    n1 = removeZeroes(n1);
    n2 = removeZeroes(n2);
    int sum = n1+n2;
  
    if(removeZeroes(sz)==sum){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}