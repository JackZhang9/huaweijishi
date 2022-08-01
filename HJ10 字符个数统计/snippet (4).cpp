#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
    //输入字符串
    string input_str;
    getline(cin,input_str);
    //放入元祖
    set<char> strs;
    for(auto a:input_str)
    {
        strs.insert(a);
    }
    //元祖长度即为字符个数
    cout<<strs.size();
    return 0;
}