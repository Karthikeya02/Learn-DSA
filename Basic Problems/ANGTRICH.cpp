#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    std::cin >> a >> b >>c;
    if(a!=0 && b!=0 && c!=0 && (a + b + c) == 180) std::cout << "YES" << std::endl;
    else    std::cout << "NO" << std::endl;
    return 0;
}