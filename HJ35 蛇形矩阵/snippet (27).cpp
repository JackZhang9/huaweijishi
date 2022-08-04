#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        int N;
        
    while(cin>>N)
    {    
        int a=1;//第1行起始元素
        for(int i=1;i<=N;i++) //i为每一行的行号
        {
            cout<<a<<' ';//输出第i行第1列
            int tmp=a;
            for(int j=i+1;j<=N;j++) //j为每一列的列号
            {
                //输出第i行第j列，每一列的值=当前列号+前一列的值
                tmp += j;
                cout<<tmp<<' ';
                
            }
            //每行起始元素
            cout<<endl;
            a += i;
        }
    }
}