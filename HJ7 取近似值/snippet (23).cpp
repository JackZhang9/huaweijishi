#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     double num;
        
    while(cin>>num)
    {
        if(num-int(num)>=0.5)
            cout<<int(num)+1<<endl;
        else
        {
            cout<<int(num)<<endl;
        }
        
    }
    return 0;
}