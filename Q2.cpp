#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int a[n];
    int min=999999;
    int max=-999999;

    cout<<"enter the array\n";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] < min)
        {
            min=a[i];
        }

        if(a[i] > max)
        {
            max=a[i];
        }
    }

    cout<<"max is "<<max<<" min is "<<min;

}