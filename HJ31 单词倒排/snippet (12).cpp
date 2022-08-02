#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //输入字符串
    string in_str;
    vector<string> s_vec;
    while(getline(cin,in_str))
    {
        string out_str;
        //在字符串中，对非字母进行替换
        for(auto x:in_str)
        {
            if(!isalpha(x))
            {
                x=' ';
            }
            out_str+=x;
        }
        //将输出流放入vector
        istringstream in(out_str);
        while(in>>out_str)
        {
            s_vec.push_back(out_str);
        }
        for(int i=s_vec.size()-1;i>=0;i--)
        {
            cout<<s_vec[i]<<' ';
        }
       
    }
    return 0;
    
    
    
    
    
}