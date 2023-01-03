#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int c0=0,c5=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0)
            c0++;
        else
            c5++;
    }

    c5 = floor(c5/9)*9;

    if(c0==0)
        cout<<-1<<endl;
    else if(c5==0)
        cout<<0<<endl;
    else {
        for (int i = 0; i < c5; i++)
            cout << 5;
        for (int i = 0; i < c0; i++)
            cout << 0;
    }

    return 0;
}