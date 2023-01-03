#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long int n;cin>>n;
    int countfs = 0;
    while(n!=0){
        int digit = n%10;
        if(digit==4 || digit==7){
            countfs++;
        }
        n/=10;
    }
    
    if(countfs==4 || countfs==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}