#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    double num,val;
    cin>>num;
    for(val=-20;val<=20;val+=0.01)
        if(num-val*val*val<1e-8)
        {
            break;
        }
    cout<<fixed<<setprecision(1)<<val<<endl;
    return 0;
        
    
}