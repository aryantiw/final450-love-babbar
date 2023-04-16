#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array\n";
    cin >> n;
    int a[n];

    cout << "enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    int max = 0;

    //O(n^3) time complexity

    for(int i = 0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                sum = sum +a[k];
            }

            if(max<sum)
            {
                max = sum;
            }
            sum=0; // important step kyuki yadi ye nhi kroge to sab subarray ka sum lelega aur wahi output dega
        }
    }

    // O(n^2) approach

    // for (int i = 0; i < n; i++)
    // {
    //     sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum = sum + a[j];
    //         max = max + sum;
    //     }
    //     // sum=0;
    // }

    cout << max;
}