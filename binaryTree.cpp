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

class Node
{
public:
	int data;
	Node *left, *right;
	Node(int x) {
		data = x;
		left = NULL;
		right = NULL;
	}
};

void preOrder(Node *root) {
	if (root == NULL)
		return;

	// 1 2 4 5 3 6 7
	cout << root->data << " ";

	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(Node *root) {
	if (root == NULL)
		return;


	preOrder(root->left);

	cout << root->data << " ";

	preOrder(root->right);
}

void postOrder(Node *root) {
	if (root == NULL)
		return;

	preOrder(root->left);

	preOrder(root->right);

	cout << root->data << " ";
}

void preOrder_iterative(Node *root) {
	if (root == NULL)
		return;

	stack<Node*> s;
	s.push(root);

	while (!s.empty()) {
		Node *curr = s.top();
		s.pop();

		if (curr) {

			cout << curr->data << " ";

			if (curr->right) {
				s.push(curr->right);
			}

			if (curr->left) {
				s.push(curr->left);
			}

		}
	}

}

void postOrder_iterative(Node *root) {
	if (!root)
		return;

	stack<Node*> s1, s2;

	s1.push(root);

	while (!s1.empty()) {
		Node *curr = s1.top();
		s1.pop();

		if (curr) {
			s2.push(curr);
			// cout << curr->data << " ";

			if (curr->left) {
				s1.push(curr->left);
			}

			if (curr->right) {
				s1.push(curr->right);
			}

		}
	}


	while (!s2.empty()) {
		Node *temp = s2.top();
		cout << temp->data << " ";
		s2.pop();

	}

}


void inOrder_iterative(struct Node *root)
{
	stack<Node *> s;
	Node *curr = root;

	while (curr != NULL || s.empty() == false)
	{
		while (curr !=  NULL)
		{
			s.push(curr);
			curr = curr->left;
		}

		curr = s.top();
		s.pop();

		cout << curr->data << " ";

		curr = curr->right;

	}
}

void levelOrder(Node* root) {
	if (!root)
		return;

	queue<Node*> q;
	q.push(root);


	while (!q.empty()) {
		Node* curr = q.front();
		q.pop();

		if (curr) {
			cout << curr->data << " ";

			if (curr->left) {
				q.push(curr->left);
			}

			if (curr->right) {
				q.push(curr->right);
			}
		}

	}

}

int height(Node *root) {
	if (!root)
		return 0;

	return 1 + max(height(root->left), height(root->right));
}


int diameter(Node *root, int& ans) {
	if (!root)
		return 0;

	int l = diameter(root->left, ans);
	int r = diameter(root->right, ans);

	ans = max(ans, 1 + l + r);

	return 1 + max(l, r);
}

int balance(Node *root) {
	if (!root)
		return 1;

	int l = height(root->left);
	int r = height(root->right);

	if (abs(l - r) > 1)
		return 0;

	return balance(root->left) and balance(root->right);
}


int32_t main()
{
	subham_cc99();

	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->left->left->left = new Node(8);

	// preOrder(root);
	// inOrder(root);
	// postOrder(root);

	// preOrder_iterative(root);
	// inOrder_iterative(root);


	// levelOrder(root);
	// cout  << endl;
	// cout << height(root) << endl;

	// int ans = 0;
	// diameter(root, ans);
	// cout << ans << endl;
	cout << balance(root);
	return 0;
}