    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std; 
    int IsPossible(int arr[],int n, int cow, int mid)
    { int a=arr[0], c=1;
        for(int i=0; i< n ; i++)
        {
            if(arr[i]-a>=mid)
            {
                c++;
                if(c==cow)
                {
                    return true;
                } 
                a=arr[i];
            }
        } 
        return false;
    }
    int cowagressive(int arr[],int n, int cow)
    {
        int s=0;
        int e=n-1;
        int ans=-1;
     int mid= s+ (e-s)/2;
     while(s<=e)
     {
        if(IsPossible(arr,n,cow,mid))
        {
           ans=mid;
           e=mid-1;  
        } 
        else{
            s=mid+1;
        }

     } 
     return ans;
     }
    int main()
    {
        int n;
        cin>> n;
        int cow ;
        cin>> cow; int arr[n]; 
        for(int i=0; i<n; i++)
        {
            cin>> arr[i];
        }  
        sort(arr,arr+n);
        int ans= cowagressive(arr , n, cow);
        cout<< ans << endl;

    }