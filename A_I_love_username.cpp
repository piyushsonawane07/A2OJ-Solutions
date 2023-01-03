#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,points;
    cin>>n>>points;
    
    int min = points,max = points,count = 0;

    while(--n){
        cin>>points;
        if(points<min){
            count++;
            min = points;
        }
        if(points>max){
            count++;
            max = points;
        }
    }

    cout<<count<<endl;

    return 0;
}