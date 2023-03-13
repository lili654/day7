#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int year,month,day;
  int week=6;
  int km=0;
  for(year=2000;year<=2020;year++){
    if(year%4==0&&year%100!=0||year%400==0)
    months[2]=29;
    else 
    months[2]=28;
    for(month=1;month<=12;month++){
      for(day=1;day<=months[month];day++){
        km++;
        if(week==8)
        week=1;
        if(week==1||day==1)
        km++;
        week++;
        if(year==2020&&month==10&&day==1)
        cout<<km;
      }
    }
  }
  return 0;
}
