#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{ 
    int n;
    cout<<"Array  length"<< endl;
    cin>> n; 
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
   
    
 map< int, int > me;  
  for(int i=0; i<n; i++)
    {
        me[arr[i]]++;
    }
    
    vector<int> v;
map<int , int >   :: iterator it;
for(it=me.begin(); it!=me.end(); it++)
{ cout<< it-> first << "  itni bar repeat hua  " << it-> second<< endl;
 
}

}