#include<iostream>
using namespace std;

int main(){

    int n,a,b;cin>>n;
    int count = 0,maxi = 0;
    while(n--){
        cin>>a>>b;
        count-=a;
        count+=b;
        maxi = max(maxi,count);
    }

    cout<<maxi<<endl;

    return 0;
}