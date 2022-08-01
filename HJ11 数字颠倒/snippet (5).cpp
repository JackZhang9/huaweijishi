#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    //输入一个整数
    int num;
    cin>>num;
    //转化成一个字符串
    string strs=to_string(num);
    //使用迭代器逆序
    reverse(strs.begin(),strs.end());
    cout<<strs;
    return 0;
}