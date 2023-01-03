#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,arr[100];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int s = 0;
    for (int i = 0; i < m; ++i)
    {
        if (arr[i] >= 0)
        {
            break;
        }
        arr[i]*=-1;
        s += arr[i];
    }
    cout << s << endl;
    return 0;
}