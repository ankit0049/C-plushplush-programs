#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    for(int i=0; i<5; i++)
    {
        int x;
        cin>> x;
        d.push_front(x);
    }
 deque<int>::iterator it;
 it=d.begin();
 it=it+4; 

 d.emplace(it,99);// use to add value on perticular position
 d.insert(it,88);// it is same as emplace function
 

 d.emplace_front(999); // it have no need to iterator same as back function
 d.emplace_back(888);//  same as front but position is at the back
 

 for(it=d.begin(); it!=d.end(); it++)
 {
    cout<<*(it)<<"  ";
 }
}