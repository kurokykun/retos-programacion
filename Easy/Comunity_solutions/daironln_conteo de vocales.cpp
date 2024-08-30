#include <bits/stdc++.h>

#define endl "\n"

typedef long long ll;

// template<typename T>
// istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it; return istream;}
// template<typename T>
// ostream& operator<<(ostream &ostream, vector<T> &v){for (auto &it : v)cout << it << " "; return ostream;}

using namespace std;

const int mod = 1e9+7;

auto count_vocals(string) -> int;

auto main() -> signed{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(nullptr);

    string s;
    cin >> s;

    cout << count_vocals(s) << endl;

}


auto count_vocals(string s) -> int{
    int c{};
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
           s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
           c++;
    }
    return c;
}

