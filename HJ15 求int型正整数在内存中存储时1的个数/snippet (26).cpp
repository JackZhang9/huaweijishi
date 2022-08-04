#include<bitset>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        int num;
        while(cin>>num)
        {
            bitset<32> bits(num);
            cout<<bits.count();
                
        }
    return 0;
}