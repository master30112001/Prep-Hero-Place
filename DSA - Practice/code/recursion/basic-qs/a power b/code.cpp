#include <bits/stdc++.h>
using namespace std;

// multiply a,   b number of time
int apowerb(int a, int b, int ans)
{

    cout << "ANS: " << ans << endl;

    if (b <= 0)
    {

        return ans;
    }

    apowerb(a, b - 1, ans * a);
}

int apowerbOptimized(int a, int b)
{

    if (b == 0)
    {
        return 1;
    }

    int ans;

    // odd
    if (b & 1 == 1)
    {
        int res = apowerbOptimized(a, (b - 1) / 2);
        ans = a * res * res;
    }
    else
    {
        int res = apowerbOptimized(a, b / 2);
        ans = res * res;
    }

    return ans;
}

int main()
{

    int a, b;
    cout << "enter a and b for a power b: " << endl;

    cin >> a;
    cin >> b;

    cout << "Answer: " << apowerbOptimized(a, b) << endl;

    return 0;
}