#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int dem = 0;
    int A[n];
    int B[n+1];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n+1; i++)
        cin >> B[i];
    sort(A, A + n);
    sort(B, B + n +1);
    for (int i = 0; i < n; i++)
    {
        if(A[i] != B[i])
        {
            dem++;
            cout << B[i]; break;
        }
    }
    if (dem == 0) cout << B[n];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
