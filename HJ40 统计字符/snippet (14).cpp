#include <iostream>
#include <string.h>
#include <string>
#include<bits/stdc++.h>
using namespace std;
   
int main(){
    //输入字符串
    string in_str;
    
    while(getline(cin,in_str))
    {
        int a=0,b=0,c=0,d=0;
        for(auto cht:in_str)
        {
            if(isalpha(cht))
                a++;
            else if(cht==' ')
                b++;
            else if(isdigit(cht))
                c++;
            else
                d++;
        }
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        
    }
    return 0;
}