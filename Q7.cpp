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
    

//important question do it again after 1 week

int x = a[n - 1], i;
    for (i = n - 1; i > 0; i--)
    a[i] = a[i - 1];
    a[0] = x;
   
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

}