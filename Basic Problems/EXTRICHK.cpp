#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a==b && b==c)
    std::cout << "1" << std::endl;
    else if(((a==b)&& a!=c || (b==c)&& b!=a || (c==a)&& c!=b) && ((a+b)>c && (b+c)>a && (c+a)>b))
    std::cout << "2" << std::endl;
    else if(a!=b && a!=c && b!=c && (a+b)>c && (b+c)>a && (c+a)>b)
    std::cout << "3" << std::endl;
    else    std::cout << "-1" << std::endl;
    return 0;
}