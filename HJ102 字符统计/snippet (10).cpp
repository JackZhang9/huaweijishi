#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //输入字符串
    string input_str;
    
    while(getline(cin,input_str))
    {
        //map统计每个字符次数
        map<char,int> cnt_map;
        for(auto cht:input_str)
        {
            //统计字符
            cnt_map[cht]++;
        }
        //字符长度,最大次数
        int len=input_str.size();
        //输出的字符串
        string output_str;
        for(int i=len;i>=0;i--)
        {
            for(auto x:cnt_map)
            {
                if(x.second==i)
                {
                    output_str+=x.first;
                }
            }
        }
        cout<<output_str<<endl;
    }
    
    return 0;
}