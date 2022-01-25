/*************** Elliot Alderson ***************/
#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(i=0;i<n;i++)

int main()
{
    int i=0, j=0;
    
    int t = 1;
    cin >> t;
    while(t--)
    {
       int g;   cin >> g;
       while(g--)
       {
           int a[3];
           fo(i,3)  cin >> a[i];
           if(a[1]%2==0 || a[0]==a[2])
           std::cout << a[1]/2 << std::endl;
           else
           std::cout << (a[1]/2)+1 << std::endl;
       }
    }
    return 0;
}