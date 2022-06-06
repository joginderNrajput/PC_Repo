#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int countPrimes(int L, int R)
    {
        int n = R;

        vector<bool> prime(n + 1, true);

        int i, j;

        for (i = 2; i * i <= n; i++)
        {
            if (prime[i])
            {
                for (j = i * i; j <= n; j = j + i)
                    prime[j] = false;
            }
        }

        //Output part:

        int count = 0;

        if (L == 0 or L == 1)
            L = 2;

        for (i = L; i <= R; i++)
        {
            if (prime[i])
                count++;
        }

        return count;
    }
};