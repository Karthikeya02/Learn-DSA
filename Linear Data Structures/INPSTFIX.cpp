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

/* C++ implementation to convert
infix expression to postfix*/

//Function to return precedence of operators
int priority(char c)
{
	if(c == '^')
		return 3;
	else if(c == '/' || c=='*')
		return 2;
	else if(c == '+' || c == '-')
		return 1;
	else
		return -1;
}

// The main function to convert infix expression
//to postfix expression
void infixToPostfix(string s)
{

	stack<char> st; //For stack operations, we are using C++ built in stack
	string result;

	for(int i = 0; i < s.length(); i++)
	{
		char c = s[i];

		// If the scanned character is
		// an operand, add it to output string.
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		result += c;

		// If the scanned character is an
		// ‘(‘, push it to the stack.
		else if(c == '(')
			st.push('(');

		// If the scanned character is an ‘)’,
		// pop and to output string from the stack
		// until an ‘(‘ is encountered.
		else if(c == ')')
		{
			while(st.top() != '(')
			{
				result = result + st.top();
				st.pop();
			}
			st.pop();
		}

		//If an operator is scanned
		else
		{
			while(!st.empty() && priority(s[i]) <= priority(st.top()))
			{
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}

	// Pop all the remaining elements from the stack
	while(!st.empty())
	{
		result += st.top();
		st.pop();
	}

	cout << result << endl;
}

int main()
{
	cleanio();
	#ifndef ONLINE_JUDGE
	fileio();
	#endif

	ll i = 0, j = 0;
	cases
	{
        int n;
        string exp;
        cin >> n >> exp;
        infixToPostfix(exp);
	}
	return 0;
}