#include <bits/stdc++.h>
using namespace std;

int kadanealgo(int n, int arr[])
{
    int max_so_far = arr[0];
    int max_ending_here = arr[0];

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    // input

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // output

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // function call

    int result = kadanealgo(n, arr);
    cout << "the maximum sum of subarray are: " << result << endl;

    return 0;
}