#include <iostream>
using namespace std;

int main(){
            //输入2,1都是-1
            //3 2
        //4 3
    //5 2
    //6 4
    int n;
    while(cin>>n)
    {
        if(n==1 || n==2)
            cout<<-1<<endl;
        else if (n%4==0)
            cout<<3<<endl;
        else if (n%4==3 || n%4==1)
            cout<<2<<endl;
        else
            cout<<4<<endl;
    }
    return 0;
}