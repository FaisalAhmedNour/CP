
#include<bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr, int N)
{
    long int sum = 0;
    for(int i = 0; i < K; i++)
    {
        sum += Arr[i];
    }
    long int M = sum;
    for(int i = K; i < N; i++)
    {
        sum = sum + Arr[i] - Arr[i-K];
        M = max(M,sum);
    }

    return M;
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> Arr;
    for(int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        Arr.push_back(x);
    }
    cout << maximumSumSubarray(K, Arr, N);
}
