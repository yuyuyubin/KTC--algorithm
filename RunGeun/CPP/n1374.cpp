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
int arr[8];
bool vi[8];
vector<pair<int, int>> vec;
int rec(int dep) {  // 선택 개수
    priority_queue<int, vector<int>, greater<int>> pq;
    size_t maxt = 0;

    for (int _ = 0; _ < N; ++_) {
        if (pq.empty()) {
            pq.push(vec[_].second);
        } else {
            while (vec[_].first >= pq.top()) {
                pq.pop();
            }

            pq.push(vec[_].second);
        }
        maxt = max(maxt, pq.size());
    }
    int a= maxt;
    return a;
}

void solve() {
    int Answer = 0;
    int a, b, c;
    cin >> N;
    for (int _ = 0; _ < N; ++_) {
        cin >> a >> b >> c;
        vec.push_back({b, c});
    }
    sort(vec.begin(), vec.end());
    // for (int i = 0; i < vec.size(); ++i) {
    //     cout << vec[i].first << ' ' << vec[i].second << '\n';
    // }
    cout << rec(0);
}

int main(void) {
    ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}