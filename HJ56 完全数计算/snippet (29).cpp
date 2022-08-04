#include <iostream>
using namespace std;

int main(){
        //输入整数
        int n, cnt=0;;
         while(cin>>n)
         {
             
             //遍历从2到n的每个数，
             for(int i=2;i<=n;i++)
             {
                 //1默认是完美数
                 int sum=1;
                 //从2开始，
                 for(int j=2;j<=i/2;j++)
                 {
                   if(i%j==0)
                    {
                        sum+=j;
                    }
                 }
                if(sum==i)
                 {
                    cnt+=1;
                 }
             }
            cout<<cnt<<endl;
         }
        return 0;
}