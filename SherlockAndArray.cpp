/**
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int lsum(const int *a,int & n, int & m)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
        tong += a[i];
    return tong;
}

int rsum(const int *a,int & n,int & m)
{
    int tong = 0;
    for (int i = n+1; i < m; i++)
        tong += a[i];
    return tong;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int dem = 0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr [i];
        for (int i = 0; i < n; i++)
        {
            if (lsum(arr, i, n) == rsum(arr, i, n)) dem++;
        }
        if (dem == 0) cout << "NO";

        else cout << "YES";
    }


    return 0;
}
