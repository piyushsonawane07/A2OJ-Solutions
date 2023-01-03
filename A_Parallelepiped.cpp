#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;cin>>a>>b>>c;

    double x = sqrt(a * b / c);
    double y = sqrt(c * a / b);
    double z = sqrt(c * b /a);
 
    double sum = x + y + z;
 
    cout<<4*sum<<endl;
    return 0;
}