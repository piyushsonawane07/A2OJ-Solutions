#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    int x;
    int even =0,odd=0;
    
    while(n--){
        cin>>x;
        if(x%2==0)
            even++;
        else    
            odd++;
    }

    cout<<(odd%2==1 ? odd : even)<<endl;

    return 0;
}