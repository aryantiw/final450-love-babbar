#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int a[n];

    int s=0, e=n;
 cout<<"enter the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(a[s]<0 && a[e]<0)
        {
            s++;
        }

        else if(a[s]>0 && a[e]<0)
        {
            int t = a[s];
            a[s]=a[e];
            a[e]=t;
            s++;
            e--;
        }

       else if(a[s]>0 && a[e]>0)
        {
            e--;
        }

        else{
            s++;
            e--;
        }

    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    


    
}