#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int a[n];

    cout<<"enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int temp= a[n-1];
    for (int i = 0; i < n; i++)
    {
        a[i]=a[i+1];
    }

    a[0]=temp;

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    



}