#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    bool f = 0;
    std::cin >> n >> t;
    int a[n];
    for(int i = 0; i < n; i++)  std::cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        if(a[i] == t)
        {
            f = 1;
            std::cout << "1" << std::endl;
            break;
        }
    }
    if(!f)  std::cout << "-1" << std::endl;
    return 0;
}