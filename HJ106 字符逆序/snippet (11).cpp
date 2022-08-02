#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string in_str;
    while(getline(cin,in_str))
    {
        
        
        reverse(in_str.begin(),in_str.end());
        
        cout<<in_str<<endl;
        
        return 0;
    }
}