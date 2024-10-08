#pragma GCC optimize("O3,Ofast,unroll-loops")
#include <bits/stdc++.h>
#if !(defined ONLINE_JUDGE || defined CODE_GROUND)
#define TEST(X, Y) cerr << (X) << ": " << (Y) << '\n'
#else
#define TEST(x, Y)
#endif
#define ALL(x) x.begin(), x.end()
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
constexpr ll MOD = 1e9 + 7;
constexpr int sz = 1 << 17;
constexpr int INF = 0x7fffffff;
int N, M;
vector<int> nums;
int cnt = 0;
void rec(int depth, int sum) { 
    if (depth== N) {
        if (sum == M) {
            cnt++;
        }
        return;
    }
    rec(depth + 1, sum + nums[depth]);
    rec(depth + 1 , sum);
}

void solve() {
    int Answer = 0;
    cin >> N >> M;
    nums.resize(N, 0);
    for (int _ = 0; _ < N; ++_) {
        cin >> nums[_];
    }
    rec(0, 0);
    if(M== 0) cnt--;
    cout << cnt;
}

int main(void) {
    ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}