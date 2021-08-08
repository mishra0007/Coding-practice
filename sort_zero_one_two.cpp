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

void sort012(int a[], int arr_size)
{
	int lo = 0;
	int hi = arr_size - 1;
	int mid = 0;


	while (mid <= hi) {
		switch (a[mid]) {

		case 0:
			swap(a[lo++], a[mid++]);
			break;
		case 1:
			mid++;
			break;

		case 2:
			swap(a[mid], a[hi--]);
			break;
		}
	}
}


void printArray(int arr[], int arr_size)
{

	for (int i = 0; i < arr_size; i++)
		cout << arr[i] << " ";
}


int32_t main()
{
	subham_cc99();

	int arr[] = { 0, 2,  0,  2, 0, 2, 0  , 1 , 1 , 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	sort012(arr, n);

	printArray(arr, n);

	return 0;
}