#include <string>
// #include <stdlib>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    //1.输入字符串
    string input_str;
    getline(cin,input_str);
    //2.检查字符串长度
    int len=input_str.size();
    for(int i=0;i<len;i+=8)
    {
        //规定输出长度
        cout.width(8);
        //3.如果小于8进行补0
        cout.fill('0');
        //4.否则，每次取8个
        cout<<left<<input_str.substr(i,8)<<endl;
    }
    
    return 0;
}