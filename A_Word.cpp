#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    string s;cin>>s;
    int upperCount=0,lowerCount=0;

    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            upperCount++;
        }else{
            lowerCount++;
        }
    }

    if(upperCount>lowerCount){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
    }

    return 0;
}