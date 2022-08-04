#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
        int num;
        while(cin>>num)
        {
           string str = to_string(num);
            reverse(str.begin(), str.end());
            string str2;
            set<char> set1;
            for(auto i:str)
            {
                if(!set1.count(i))
                {
                    str2+=i;
                    set1.insert(i);
                }
            }
             cout<<str2<<endl;
        }
       
        return 0;
}