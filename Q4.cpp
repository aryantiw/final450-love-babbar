#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"enter the array of 0, 1 and 2\n";
    int oz=0, oo=0, ot=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            oz++;
        }
        if(a[i]==1)
        {
            oo++;
        }
        if(a[i]==2)
        {
            ot++;
        }
    }

    for(int i=0; i<oz; i++)
    {
        a[i]=0;
    }
    for(int i=oz; i<oz+oo; i++)
    {
        a[i]=1;
    }
    for(int i=oo+oz; i<n; i++)
    {
        a[i]=2;
    }

     for(int i=0; i<n; i++)
    {
        cout<<a[i];
    }
}