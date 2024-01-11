// C++ program to find prime factorization upto n natural number
// O(n*Log n) time with precomputation
#include <bits/stdc++.h>
using namespace std;
#define MAXN 100001

// Stores smallest prime factor for every number
int spf[MAXN];

// Adjacency vector to store distinct prime factors
vector<int>adj[MAXN];

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
	spf[1] = 1;
		// marking smallest prime factor for every
		// number to be itself.
	for (int i=2; i<MAXN; i++)
		spf[i] = i;


	for (int i=2; i*i<MAXN; i++)
	{
		// checking if i is prime
		if (spf[i] == i)
		{
			// marking SPF for all numbers divisible by i
			for (int j=i*i; j<MAXN; j+=i)

				// marking spf[j] if it is not
				// previously marked
				if (spf[j]==j)
					spf[j] = i;
		}
	}
}

// A O(nlog n) function returning distinct primefactorization
// upto n natural number by dividing by smallest prime factor
// at every step
void getdistinctFactorization(int n)
{
	int index,x,i;
	for(int i=1;i<=n;i++)
	{
		index=1;
		x=i;
		if(x!=1)
			adj[i].push_back(spf[x]);
		x=x/spf[x];
		// Push all distinct prime factor in adj
		while (x != 1)
		{
			if (adj[i][index-1]!=spf[x])
			{
				adj[i].push_back(spf[x]);
				index+=1;
			}
			x = x / spf[x];
		}
	}
}

// Driver code
int main()
{
	// Precalculating smallest prime factor
	sieve();

	int n = 10;


	getdistinctFactorization(n);

	// Print the prime count
	cout <<"Distinct prime factor for first " << n
		<<" natural number" <<" : ";

	for (int i=1; i<=n; i++)
		cout << adj[i].size() << " ";

	return 0;
}
