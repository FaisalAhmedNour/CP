#include<bits/stdc++.h>
using namespace std;

int sumOfRowCol(int n,int m, vector<vector<int>> A){
    int ans = 1;
    int k;
    k = min(m,n);
    while(k--)
    {
        int sum1=0;
        for(int i=0;i<n;i++) sum1 += A[i][k];

        int sum2=0;
        for(int i=0;i<m;i++) sum2 += A[k][i];
        if(sum1!=sum2)
        {
            ans =0;
            break;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<vector<int>> A(n,vector<int>(m));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) cin >> A[i][j];
        cout << sumOfRowCol(n,m,A) << "\n";
    }

}
