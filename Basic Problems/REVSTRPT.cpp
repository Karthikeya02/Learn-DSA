#include<bits/stdc++.h>
using namespace std;

int main()
{
    int z;
    scanf("%d",&z);
    for(int i=1; i<=z; i++)
    {
        for(int j=1; j<=z; j++)
        {
            if(j<=z-i)
            {
                std::cout << " ";
            }
            else
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}