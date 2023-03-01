#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
cin>> n;
vector<int>arr;
for(int i=0; i<n; i++)
{
    int x;
    cin>> x;
    arr.push_back(x);
} 
sort(arr.begin(),arr.end());
      vector<int>v;
        for(int i=1;i<arr.size(); i++ )
        {  int ans= abs(arr[i-1]-arr[i]);
              v.push_back(ans);
        }
     
}