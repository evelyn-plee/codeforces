#include <bits/stdc++.h>
using namespace std;

long long c(long long num)
{
    long long ans=num*(num-1)/2;
    return ans;
}
int main()
{
    long long n, m, a, b, max, min = 0;
    cin >> n >> m;
    if(m == 1)
        min = max = c(n);
    else{
        max = c(n-m+1);
        a = n/m;
        b = n%m;
        min = b*c(a+1) + (m-b)*c(a); // # of leftovers * (existing pairing + 1) + uniform distribution
    }
    cout << min << " " << max;
    return 0;
}
