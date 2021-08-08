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

void merge(int arr[], int start, int mid, int end) {

	int n1 = mid - start + 1;
	int n2 = end - mid;

	int a[n1], b[n2];

	for (int i = 0; i < n1; i++)
		a[i] = arr[start + i];

	for (int i = 0; i < n2; i++)
		b[i] = arr[i + mid + 1];

	int i = 0, j = 0, k = start;

	while (i < n1 && j < n2) {

		if (a[i] < b[j])
			arr[k++] = a[i++];
		else
			arr[k++] = b[j++];
	}

	while (i < n1)
		arr[k++] = a[i++];
	while (j < n2)
		arr[k++] = b[j++];

}



void mergeSort(int a[], int start, int end) {

	if (start < end) {
		int mid = (start + end) / 2;
		mergeSort(a, start, mid );
		mergeSort(a, mid + 1 , end);
		merge(a, start, mid , end);
	}

}

int32_t main()
{
	subham_cc99();

	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	mergeSort(a, 0, 9);

	for (auto it : a)
		cout << it << " ";

	return 0;
}





