#include <bits/stdc++.h>
using namespace std;
int LisEfficient(vector<int> &arr, int n)
{
    vector<int> lis;
    lis.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > lis[lis.size() - 1])
        {
            lis.push_back(arr[i]);
        }
        else
        {
            auto it = lower_bound(lis.begin(), lis.end(), arr[i]);
            int nextGreaterIndex = it - lis.begin();
            lis[nextGreaterIndex] = arr[i];
        }
    }
    return lis.size();
}

int main()
{
    int t;
    cout << "enter t"
         << "\n";
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            arr[i] = ele;
        }
        cout << LisEfficient(arr, arr.size()) << "\n";
    }
}