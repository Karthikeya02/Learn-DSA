#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=0;
    std::cin >> n;
    for(int i=1; i<=(5*n); i+10)
    {
        for(int j=1;j<=10;j++)
        {
            if(((i/5)%2!=0))
            {
                if(i<=(5*n))
                {
                    std::cout << i << "\n" << i+5 << " " << i+4 << " " << i+3 << " " << i+2 << " " << i+1  << std::endl;
                    i+=6;
                }
            }
            else
            {
                if(i<=(5*n))
                {
                    std::cout << i << " ";
                    i++;
                }
            }
        }
    }
    return 0;
}