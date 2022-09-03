
#include<bits/stdc++.h>
using namespace std;

int fnd(vector<vector<int>>& matrix,int st, int ed, int col, int target)
{
    while(ed - st > 1)
    {
        int mid = (st + ed) / 2;
        if(matrix[mid][col] < target)
            st = mid + 1;
        else ed = mid;
    }
    if(matrix[st][col] >= target) return st;
    else return ed;
}

bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    int mx_col = matrix[0].size() - 1;
    int mx_row = matrix.size() - 1;
    int st = 0, ed = mx_row;
    int row = fnd(matrix, st, ed, mx_col, target);
    ed = mx_col;
    while(ed - st > 1)
    {
        int mid = (st + ed) / 2;
        if(matrix[row][mid] < target)
            st = mid + 1;
        else ed = mid;
    }
    if(matrix[row][st] == target || matrix[row][ed] == target)
        return 1;
    else return 0;
}

int main()
{
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 60;
    bool t = searchMatrix(matrix, target);
    if(t) cout << "true";
    else cout << "false";
}
