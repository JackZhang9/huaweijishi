#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //输入行数
    int n;
    cin>>n;
    //声明字符串容器
    vector<string> strs;
    string input_str;
    //输入字符串
    for(int i=0;i<n;i++)
    {
        //输入单行字符串
        cin>>input_str;
        //入栈
        strs.push_back(input_str);
    }
    //按字典顺序排序
    sort(strs.begin(),strs.end());
    for(int j=0;j<n;j++)
    {
        cout<<strs[j]<<endl;
    }
    return 0;
}