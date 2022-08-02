#include<iostream>
#include<string>
using namespace std;

int main(){
        string in_str;
        
        while(getline(cin,in_str))
        {
            int cnt=0;
            for(auto i:in_str)
            {
                if(isupper(i))
                {
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
        return 0;
}