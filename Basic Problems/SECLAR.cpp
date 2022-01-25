#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a > c && b > a || b < a && a < c)
    std::cout << a << std::endl;
    else if(a > b && b > c || a < b && b < c)
    std::cout << b << std::endl;
    else if(a > c && c > b || a < c && c < b)
    std::cout << c << std::endl;
    return 0;
}