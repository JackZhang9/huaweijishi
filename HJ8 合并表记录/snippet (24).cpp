#include<iostream>
#include<map>
using namespace std;

int main(){
        int n,key,value;
        map<int,int> mp;
        cin>>n;
    //    输入n个键值对
        for(int i=1;i<=n;i++)
        {
            cin>>key>>value;
            //如果有这个键值对，修改value
            if(mp.count(key))
            {
                mp[key]+=value;
            }
            //如果没有这个键值对，初始化这个键值对
            else
            {
                mp.insert({key,value});
            }
        }
    //顺序输出
        for(auto i:mp)
        {
            cout<<i.first<<' '<<i.second<<endl;
        }
        return 0;
}