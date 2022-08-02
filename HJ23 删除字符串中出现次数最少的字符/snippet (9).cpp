#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
        //输入字符串
        string input_str;
        getline(cin,input_str);
        //统计每个字符出现次数
        vector<char> char_cnt(26,0);
        for(auto cht:input_str)
        {
            
            char_cnt[cht-'a']++;
        }
        //找出最小出现次数
        int min_cnt=input_str.size();
        for(auto cnt:char_cnt)
        {
            if(cnt!=0&&cnt<min_cnt)
            {
                min_cnt=cnt;
            }
        }
        //删除对应字符
        string str2;
        for(auto cht:input_str)
        {
            if(min_cnt!=char_cnt[cht-'a'])
            {
                str2+=cht;
            }
        }
        cout<<str2<<endl;
        return 0;
     
}        