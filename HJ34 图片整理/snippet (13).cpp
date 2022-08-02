#include <iostream>
#include <string>
#include <algorithm>
#include<bits/stdc++.h>
using  namespace std;
 
int main(){
        //输入字符串
        string in_str;
        
        while(getline(cin,in_str))
        {
            //
            sort(in_str.begin(),in_str.end());
            cout<<in_str<<endl;
        }
        return 0;
}