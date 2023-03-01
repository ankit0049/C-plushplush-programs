#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin >> n; 
    int arr[n];
    for(int i= 0; i < n; i++)
    {
        cin >> arr[i];
    } 

    for(int i=1; i<n; i++)
    {
        int op=i;
        for(int j =i+1; j <n; j++)
        {
            if(arr[j]< arr[op])
            {
                op=j;
            }
        } 
        swap(arr[op],arr[i]);
    } 
        for(int i= 0; i < n; i++)
        {
            cout<< arr[i]<< " ";
        }

}