#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter the size of array\n";
    int n;
    cin>>n;
    int a[n];
    cout<<"enter the array\n";
    int s=0;
    int e=n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    //good approach as seen in many places

    //

    cout<<"reversed array is - ";

    for(int i=1; i<=n; i++)
    {
        while(s<e)
        {
            int t = a[s];
            a[s] = a[e];
            a[e] = t;
            
            s++;
            e--;
        } 

        cout<<a[i]<<" ";    
        
    }

}

