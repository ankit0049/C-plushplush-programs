#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{ 
    int n,m ,l;
    cout<<"Array a length"<< endl;
    cin>> n; 
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
     cout<<"Array b length"<< endl;
    cin>> m; 
    int brr[m]; 
     for(int i=0; i<m; i++)
    {
        cin>> brr[i];
    }
    cout<<"Array c length"<< endl;
    cin>> l;
    int crr[l];
     for (int i=0; i<l; i++)
    {
        cin>> crr[i];
    }
 map< int, int > me;  
  for(int i=0; i<n; i++)
    {
        me[arr[i]]++;
    }
     for(int i=0; i<m; i++)
    {
        me[brr[i]]++;
    }
     for(int i=0; i<l; i++)
    {
        me[crr[i]]++;
    } 
    vector<int> v;
map<int , int >   :: iterator it;
for(it=me.begin(); it!=me.end(); it++)
{ cout<< it-> first << "  itni bar repeat hua  " << it-> second<< endl;
 if(it->second>1)
 {
    int e= it->first;
    v.push_back(e);
 }
}
cout<< " Ye main ans  hai"<< endl;
 
 for(int i=0; i< v.size(); i++)
 {
     cout<< v[i]<< " ";
 }
}