#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define rf(i,a,b) for(int i=a;i>=b;i--)
#define rep(i,n) f(i,0,n)
#define rrep(i,n) rf(i,n-1,0)
#define w(t) int t; cin>>t; while(t--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define inf (int)(1e18)
#define endl "\n"
#define lcm(a,b) __gcd(a,b)/(a*b)
#define FD(n) fixed<<setprecision(n)
#define print_v for(auto it:v){cout<<it<<" ";}cout<<endl;
using namespace std;


void subham_cc99()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	subham_cc99();
	int n = 13;
	char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'c', 'd', 'e', 's', 'i', 'j', 'a'};

	int freq[26] = {0};

	for (int i = 0; i < n; i++) {
		freq[a[i] - 97]++;
	}

	for (auto it : freq) {
		cout << it << " ";
	}

	return 0;
}