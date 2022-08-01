#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //1.连续输入字符
    string input_str;
    getline(cin,input_str);
    //2.输入一个字符
    char target;
    cin>>target;
    //3.放到一个容器里
    multiset<char> strs;
    for(auto a:input_str)
    {
        strs.insert(tolower(a));
    }
     //3.计算这个字符在字符串中次数
    cout<<strs.count(tolower(target));
    return 0;
    
}