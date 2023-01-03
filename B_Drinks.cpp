#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    double ans,sum;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    ans = sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}