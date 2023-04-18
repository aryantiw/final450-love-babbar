#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cout << "enter the size of array\n";
    cin >> n;
    int arr[n];
    cout << "enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort(a, a + n);

    // int maxi=a[n-1];
    // int mini=a[0];

    // int res = maxi - mini;
    // for(int i=0; i<n ; i++)
    // {
    //     mini= min(a[0]+k , a[i]-1);
    //     maxi=max(a[i]-k, a[n-1]+k);
    // }

    // cout<<min(res, maxi-mini);

    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    for (int i = 1; i < n; i++)
        ans = min(ans, max(arr[i - 1] + k, arr[n - 1] - k) - min(arr[0] + k, arr[i] - k));
    return ans;
}