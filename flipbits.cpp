#include <bits/stdc++.h>
using namespace std;

int flipbits(int n, int arr[])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 1;
        }
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout << "enter the input " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    int flip = flipbits(n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    cout << "the sum of flip bits are : " << flip << endl;
    return 0;
}
