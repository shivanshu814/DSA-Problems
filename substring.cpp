#include <bits/stdc++.h>
using namespace std;

int longestsubstring(string s)
{
    int maxLength = 0;
    int left = 0;
    int right = 0;
    unordered_set<char> charSet;

    while (right < s.length())
    {
        if (charSet.find(s[right]) == charSet.end())
        {
            charSet.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
            right++;
        }
        else
        {
            charSet.erase(s[left]);
            left++;
        }
    }

    return maxLength;
}

int main()
{
    string s;
    cin >> s;

    int longest = longestsubstring(s);

    // function call
    cout << "The longest substring is " << longest << endl;
    return 0;
}