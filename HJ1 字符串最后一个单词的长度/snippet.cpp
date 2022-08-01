#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string input_str;
    //循环输入
    while(cin>>input_str)
    {    
        //遇到回车结束输入
        if(cin.get()=='\n')
        
            break;
    }
    //输出上一个字符串长度
    cout<<input_str.size();
   return 0;
}

