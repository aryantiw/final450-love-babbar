#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cout<<"enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"enter the kth value of smallest element\n";
    cin>>k;
    cout<<"enter the array\n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a, a + n);


    cout<<k<<"th smallest element is "<<a[k];
}