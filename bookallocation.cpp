#include<iostream>
using namespace std; 
bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}
int bookallocate(int arr[], int n , int  m)
{
    int st=0;  
    int sum=0;
    for(int i=0; i<n ; i++)
{
    sum=sum+ arr[i];
} 
cout<< "sum"<< sum << endl;
    int e= sum; 

    int mid= st+(e-st)/2; 
    int ans=-1;
    while(st<=e)
    { 
        // cout<< " Mid :"<< mid << endl;
        // cout<< "ST : "<< st << endl;
        // cout<< " E : "<< e <<endl;
       if(isPossible(arr,n,m,mid))
       {
        ans=mid;
        e=mid-1;
       } 
       else {
        st = mid+1;
           } 
           mid=st+(e-st)/2; 

    } 
    return ans;
}
int main()
{
    int n , m;
    cin>> n >> m;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    } 
    int ans = bookallocate(arr,n,m);
    cout<< ans << endl;
}