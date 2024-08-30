#include <bits/stdc++.h>

#define endl "\n"

typedef long long ll;

using namespace std;

const int mod = 1e9+7;

auto count_vocals(string) -> int;

auto main() -> signed{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(nullptr);

    ll dp[10000];
    dp[0] = dp[1] = 1;

    for(int i = 2; i < 10000; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    int n;
    cin >> n;

    for(int i = 0; i < n; i ++)
        cout << dp[i] << " ";

    cout << endl;

}

