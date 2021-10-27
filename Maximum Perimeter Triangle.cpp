#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
     cin>>arr[i];
    sort(arr,arr+n,greater <int>());
    for(i=0;i<n-2;i++)
    {
        if(arr[i]+arr[i+1]>arr[i+2] && arr[i]+arr[i+2]>arr[i+1] && arr[i+1]+arr[i+2]>arr[i])
        {
            cout<<arr[i+2]<<" "<<arr[i+1]<<" "<<arr[i];
            return 0;
        }
    }
    cout<<"-1";
}
