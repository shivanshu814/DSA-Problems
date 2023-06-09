#include <bits/stdc++.h>
using namespace std;

void binarySort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int left = 0;
        int right = i - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (arr[mid] > key)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        for (int j = i - 1; j >= left; j--)
        {
            arr[j + 1] = arr[j];
        }

        arr[left] = key;
    }
}

double median(int arr1[], int arr2[], int n1, int n2)
{
    // firstly sort the elements using binary search
    binarySort(arr1, n1);
    binarySort(arr2, n2);

    int n = n1 + n2;

    // merge both sorted array
    double merged[n];
    merge(arr1, arr1 + n1, arr2, arr2 + n2, merged);
    for (int i = 0; i < n; i++)
    {
        if (n % 2 == 0)
        {
            return (merged[(n + 1) / 2] + merged[n / 2]) / 2;
        }
        else
        {
            return merged[n / 2];
        }
    }
}

int main()
{
    int n1, n2;

    cin >> n1 >> n2;

    int arr1[n1];
    int arr2[n2];

    // input

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    // output

    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i];
    }

    double result = median(arr1, arr2, n1, n2);
    cout << "The median of the given two sorted array is " << result;
    return 0;
}