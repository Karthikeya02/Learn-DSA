#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,rev=0;
        std::cin >> n;
        while(n)
        {
            rev = (rev*10)+(n%10);
            n/=10;
        }
        std::cout << rev << std::endl;
    }
    return 0;
}