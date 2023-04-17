#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the value by which we have to increase or decrease\n";
    cin>>k;

    int a[n];
    cout<<"enter the array\n";
    int max=-99999;
    int min=99999;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if((k-a[i])==0 || (k-a[i])<0)
        {
            a[i]=a[i]+1;
        }
        else
        {
            a[i]=a[i]-k;
        }

    }

    for(int i : a)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            a[i]=max;
        }

    }

    cout<<max-min;


}