#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,e;
    scanf("%d %d",&s,&e);
    for(int i = s; i<=e; i++)
    if(i%2!=0) std::cout << i << " ";
    return 0;
}