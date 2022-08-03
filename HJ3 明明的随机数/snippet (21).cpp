#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,N;
    cin>>N;
    set<int> nums;
    while(N>0)
    {
        cin>>num;
        nums.insert(num);
        N--;
    }
//     元祖自动排序
    for(auto i:nums)
    {
        cout<<i<<endl;
    }
    return 0;
}