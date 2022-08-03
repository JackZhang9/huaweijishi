#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    while(cin>>num1>>num2)
    {
        for(int i=num1;;i++)
        {
            if(i%num1==0 && i%num2==0)
            {
                cout<<i<<endl;
                break;
            }
        }
     
    }
    return 0;
}