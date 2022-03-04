/**
*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

string XauNguoc(const string &a)
{
	string b;
	int n = a.length();
	for (int i = n-1; i >= 0; i--)
		b += a[i];
    return b;
}

int main()
{
    int N;
	cin >> N;
	string a[N];
	for (int i = 0; i < N; i++)
        cin >> a[i];
	for (int i = 0; i < N; i++)
        for (int j = i+1; j < N; j++)
        {
            if (a[i] == XauNguoc(a[j]))
            {
                cout << a[i].length();
                int n = (a[i].length()-1) / 2;
                cout << " " << a[i][n];
                break;


            }
	}

    return 0;
}
