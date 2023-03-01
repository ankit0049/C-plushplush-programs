#include<bits/stdc++.h> 
using namespace std;  

int odd_day(int d)
{
  int day= (d%7);
  return day;
}  

 int odd_month(string m)
 {
   int  index, month,size=12;
  string  arr[size]= {"jan","feb","mar","apr","mai","jun","jul","aug","sep","oct","nov","dec"}; 
  int odd[12]= {3,0,3,2,3,2,3,3,2,3,2,3};
  for(int i=0; i<12; i++)
  {
    if (arr[i]==m)
    {
      index=i;
    }
  } 
  month=odd[index];
  return month;
 }
  

int odd_year(int y)
{
  bool leap;
  int l_n= (y)%4 ;
  if()
}

int main()
{
    int day ,year;
    string month;
    cin>>  day >> month >> year;   
   
  int d_odd= odd_day(day);   
  cout<< "ODD Days   :" << d_odd << endl; 
  int m_odd=odd_month(month);
  cout<<" ODD In Month   :"<< m_odd << endl; 
  int y_odd= odd_year(year);
  cout<< "ODD In Year  :"<< y_odd<< endl;



}