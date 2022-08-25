	public:
	vector<long long> findMissing(long long A[], long long B[],
                 int N, int M)
	{
	    unordered_map<int,int> B1;
	    vector<long long> v;
	    for(int i = 0; i < M; ++i)
	    {
	        B1[B[i]]++;
	    }
	    for(int i = 0; i < N; ++i)
	    {
	        if(B1[A[i]] == 0) v.push_back(A[i]);
	    }
	    return v;
	}
