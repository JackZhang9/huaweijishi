#include <iostream>
using namespace std;

int main(){
    //输入数字
    int day,month,year;
    //依次输入年月日
    while(cin>>year>>month>>day)
    {
        int day_sum;
        int month_2;
        //首先判断是否整百年份
        if(year%100==0)
        {    //能被400整除,是闰年，2月有29天
            if(year%400==0)
            {month_2=29;}
            //否则是平年，28天
            else
            {month_2=28;}
        }
        else
        {
            //非整百年份，能被4整除，是闰年，29天
            if(year%4==0)
            {
                //闰年，2月29天,全年366
                month_2=29;
            }
            else
            {
                //平年，2月28天.365
                month_2=28;
            }
        }
        switch(month)
        {
                //按照规律区写
            case 1:
                day_sum=day;
                break;
            case 2:
                day_sum=31+day;
                break;
            case 3:
                day_sum=31+month_2+day;
                break;
            case 4:
                day_sum=31+month_2+31+day;
                break;
            case 5:
                day_sum=31+month_2+31+30+day;
                break;
            case 6:
                day_sum=31+month_2+31+30+31+day;
                break;
            case 7:
                day_sum=31+month_2+31+30+31+30+day;
                break;
            case 8:
                day_sum=31+month_2+31+30+31+30+31+day;
                break;
            case 9:
                day_sum=31+month_2+31+30+31+30+31+31+day;
                break;
            case 10:
                day_sum=31+month_2+31+30+31+30+31+31+30+day;
                break;
            case 11:
                day_sum=31+month_2+31+30+31+30+31+31+30+31+day;
                break;
            case 12:
                day_sum=31+month_2+31+30+31+30+31+31+30+31+30+day;
                break;
            default:
                break;
        }
        cout<<day_sum<<endl;
        
    }
    return 0;
}