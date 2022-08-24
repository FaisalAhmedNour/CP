
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int row, col, sum = 0, max_sum = 0;
        cin >> row >> col;
        int court[row][col];
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                cin >> court[i][j];
            }
        }
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                //down-right
                for(int k = i, l = j; k < row && l < col; k++, l++)
                {
                    sum = sum + court[k][l];
                }

                //down-left
                for(int k = i+1, l = j-1; k < row && l >= 0; k++, l--)
                {
                    sum = sum + court[k][l];
                }

                //up-right
                for(int k = i-1, l = j+1; k >= 0 && l < col; k--, l++)
                {
                    sum = sum + court[k][l];
                }

                //up-left
                for(int k = i-1, l = j-1; k >= 0 && l >= 0; k--, l--)
                {
                    sum = sum + court[k][l];
                }

                max_sum = max(max_sum,sum);
                sum = 0;
            }
        }
        cout << max_sum << endl;
    }
}
