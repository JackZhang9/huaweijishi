#include<iostream>
#include<string>
using namespace std;

int main(){
    //输入字符串
    string input_str;
    getline(cin,input_str);
    
    
    for(int i=0;i<input_str.size();i++)
    {    //如果是小写字母
        if(islower(input_str[i]))
        {
            //如果是a到s之间的小写字母
            if(input_str[i]>='a'&&input_str[i]<'s')
            {    //数学规律，除以3，加上2，还是字符串
                input_str[i] = (input_str[i]-'a')/3+'2';
            }
            else if(input_str[i]=='s')
            {
                input_str[i] = '7';
            }
            else if (input_str[i]>'s'&&input_str[i]<'w')
            {
                input_str[i] = '8';
            }
            else if (input_str[i]>='w'&&input_str[i]<='z')
            {
                input_str[i] = '9';
            }
        }
        //如果是大写字母
            if(isupper(input_str[i]))
            {
                //是A到Z之间的字母
                if(input_str[i]>='A'&&input_str[i]<'Z')
                {
                    //变成小写+1，字符串+数字=字符串
                    input_str[i] = tolower(input_str[i]) + 1;
                }
                //如果是Z
                else{
                    input_str[i] = 'a';
                }
            }
    }
    cout<<input_str;
    return 0;
}