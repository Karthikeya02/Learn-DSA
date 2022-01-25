#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int t,count=0;
    scanf("%d",&t);
    int arr[t];
    for(int i = 1; i <= t; i++)
    {
        if(t % i == 0)
        {
            count++;
            arr[count] = i; 
        }
    }
    std::cout << count << std::endl;
    for(int i = 1; i <= count; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}