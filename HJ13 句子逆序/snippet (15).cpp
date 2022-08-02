#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //输入字符串
    string in_str;
    
    while(getline(cin,in_str))
    {   
        vector<string> s_vec;
        //将字符串放到容器里
        istringstream in(in_str);
        while(in>>in_str)
        {
            s_vec.push_back(in_str);
        }
        //逆序
        reverse(s_vec.begin(),s_vec.end());
        for(auto i:s_vec)
            cout<<i<<' ';
    }
    return 0;
}