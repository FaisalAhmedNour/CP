#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int max_area = 0, i = 0, j = height.size() - 1;
    while (i < j)
    {
        // cout << i << ' ' << j << ' ' << ((j - i) * (min(height[i], height[j]))) << endl;
        max_area = max(max_area, ((j - i) * (min(height[i], height[j]))));
        if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return max_area;
}

int main()
{
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(arr);
}