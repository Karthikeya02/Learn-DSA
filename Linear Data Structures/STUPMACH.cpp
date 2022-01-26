/*************** E L L I O T   A L D E R S O N ***************/
#include <bits/stdc++.h>
using namespace std;

#define cleanio()                   \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0);
#define fileio()                      \
	freopen("input.txt", "r", stdin); \
	freopen("output.txt", "w", stdout);
#define cases  \
	int t = 1; \
	cin >> t;  \
	while (t--)
#define ll long long
#define endl "\n"
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define all(x) x.begin(), x.end()
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

int main()
{
	cleanio();
	#ifndef ONLINE_JUDGE
	fileio();
	#endif

	ll i = 0, j = 0;
	cases
	{
        ll n,sum=0;  cin >> n;
        ll a,minimum = INT_MAX;
        fo(i,n)
        {
            cin >> a;
            minimum = min(a, minimum);
            sum = sum + minimum;
        }
        cout << sum << endl;
	}
	return 0;
}