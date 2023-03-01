#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c ;
    if(a==b && a==c)
    {
        cout<<"Equilateral Tringle " << "1"<< endl;
    }
    else if(a==b || a==c)
    {
        cout<< "isoscles " << "0"<< endl;
    } 
    else
    {
cout<< "Scalane"<< "-1"<< endl;
    }
}