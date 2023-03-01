#include<iostream>
#include<vector>
using namespace std ;
int main() 
    {  vector<int>v;
        int n, k;
        cin>> n ;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>> arr[i];
        }
          cin>> k;
          int brr[k];
          for(int i=0; i<k; i++)
          {
            cin>> brr[i];
          }
int st=0, str=0;
while(st<n && str<k)
{
    if(arr[st]==brr[str])
    {
        int e= arr[st];
        v.push_back(e);
        brr[str]=-1;
        st++;
    }
    else{
        str++;
    }
} 

for(int i=0; i< v.size(); i++)
{
    cout<< v[i] << "  ";
}

    }
