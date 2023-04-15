#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "enter the size of first and second array\n";
    cin >> n >> m;
    int a[n], b[m];
    cout << "enter the first array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter the second array\n";

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int c=n+m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i]==b[j])
            {
                c--;
                
            }
        }
        
    }

    cout<<c;
    
}