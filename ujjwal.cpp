#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter the size of array\n";
    int n, sum=0;
    cin>>n;
  
    int a[n];
    cout<<"enter the array\n";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
        for(int i=0;i<n-1;i++)
        {
            sum=sum+a[i];
        }
        
        int total= (n*(n+1))/2;
        
        cout<<total-sum;
}