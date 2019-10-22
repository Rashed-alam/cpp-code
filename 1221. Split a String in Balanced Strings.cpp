#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
s='RLRRLLRLRL';
int res = 0, cnt = 0;
    for(const auto& c : s) {
        cnt += c == 'L' ? 1 : -1;
        if (cnt == 0) ++res;
    }

                cout<<res;
    }

// cout<<ret;

