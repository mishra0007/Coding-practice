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
	string s, k;
	getline(cin, s);
	getline(cin, k);

	vector<char> c1, c2;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ')
			c1.push_back(tolower(s[i]));
	}

	for (int i = 0; i < k.length(); i++) {
		if (k[i] != ' ')
			c2.push_back(tolower(k[i]));
	}

	sort(c1.begin(), c1.end());
	sort(c2.begin(), c2.end());

	for (auto it : c1) {
		cout << it << " ";
	}

	cout << endl;

	for (auto it : c2) {
		cout << it << " ";
	}
	cout << endl;

	if (c1.size() == c2.size()) {
		int flag = 0;
		for (int i = 0; i < c1.size(); i++) {
			if (c1[i] != c2[i]) {
				flag = 1;
				break;
			}
		}

		if (!flag) {
			cout << "anagram" << endl;
		}
		else {
			// cout << "x" << endl;
			cout << "Not an anagram" << endl;
		}

	}
	else {
		cout << "Not an anagram" << endl;
	}

	// for (auto it : c1) {
	// 	cout << it << ", ";
	// }


	return 0;
}