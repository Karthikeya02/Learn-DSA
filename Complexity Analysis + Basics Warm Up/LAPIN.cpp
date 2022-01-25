/*************** E L L I O T   A L D E R S O N ***************/
#include <bits/stdc++.h>
using namespace std;

#define cleanio()                 \
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

	int i = 0, j = 0;
	cases
	{
		string s;
		cin >> s;
		int z = s.length();
		if (z % 2 == 0)
		{
			string s1 = s.substr(0, (z / 2));
			string s2 = s.substr(z / 2, z - 1);
			sort(s1.begin(), s1.end());
			sort(s2.begin(), s2.end());
			if (s1.compare(s2) == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
		{
			string s1 = s.substr(0, (z / 2));
			string s2 = s.substr((z / 2) + 1, z - 1);
			sort(s1.begin(), s1.end());
			sort(s2.begin(), s2.end());
			if (s1.compare(s2) == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}