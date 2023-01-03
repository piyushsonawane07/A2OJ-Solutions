#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n <= 1)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main(){

    int n,m;
    cin>>n>>m;

    int i=n+1;
    int nextPrime = 0;
    while (1){
        if(isPrime(i)){
            nextPrime = i;
            break;
        }
        i++;
    }
    
    if(nextPrime==m){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}