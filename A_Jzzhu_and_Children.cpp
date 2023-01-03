#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    double t;
    int last = 0;
    double max= 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= max)
        {
            last = i;
            max = ceil(t / m);
        }
    }

    cout << last << endl;
    
    

    return 0;
}