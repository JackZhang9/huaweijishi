#include<iostream>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
        int num;
        
        while(cin>>num)
        {
            //依次相除，除以从2开始每个数，直至sqrt(num)
            for(int i=2;i<=sqrt(num);i++)
            {
                //如果num可以被i整除，输出i，如果能一直整除i，就一直输出i
                 while(num%i==0)
                 {
                     num=num/i;
                     cout<<i<<' ';
                  
                }
            }
            //肯定有数不能除，但这个数不能是1
             if(num%2!=0 &&num!=1)
            {
                cout<<num<<endl;
            }
          
        }
        return 0;
}