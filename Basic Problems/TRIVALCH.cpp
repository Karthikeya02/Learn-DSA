#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    std::cin >> a >> b >>c;
    if((a+b)>c && (b+c)>a && (c+a)>b) std::cout << "YES" << std::endl;
    else    std::cout << "NO" << std::endl;
    return 0;
}