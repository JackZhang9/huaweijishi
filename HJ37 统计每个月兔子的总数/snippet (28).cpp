#include<iostream>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int compute(int n)
{
    int a=1,b=1;
    //
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return compute(n-2)+compute(n-1);
    }
}

int main(){
        
        int n;
    
        while(cin>>n)
        {
            int sum;
            sum=compute(n);
            cout<<sum;
            return 0;
        }
}