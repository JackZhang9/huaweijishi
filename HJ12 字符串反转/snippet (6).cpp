#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    //输入字符串
    string input_str;
    getline(cin,input_str);
    //使用容器
    reverse(input_str.begin(),input_str.end());
    cout<<input_str;
    return 0;
}