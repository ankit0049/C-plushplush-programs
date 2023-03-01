#include<iostream>
using namespace std;  
bool isPossible(int a[], int n, int p, int mid){
    int pc=1;
    int paintersum=0;
    for(int i=0; i<n; i++)
    { 
        if(paintersum+a[i]<=mid){
        paintersum +=a[i];
        } 
        else{
            pc++;
            if(pc>p || a[i]>mid)
            {
                return false;

            } 
            paintersum = a[i];
        }
    }  
    return true;
}
int painter(int a[], int n, int p)
{
    int st=0;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
    }   
    int e=sum;
    int ans=-1;
    int mid= st+(e-st)/2;
    while(st<=e)
    {
        if (isPossible(a, n, p,  mid))
        {
            ans=mid;
            e=mid-1;
        } 

        else{
            st= mid+1;
        } 
        mid= st +(e-st)/2;
    } 
     return ans;

}
int main()
{
    int n;
    cin>> n;
    int p;
    cin>> p; 
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    } 
    int pans= painter(a,n,p); 
    cout<< pans << endl;
}