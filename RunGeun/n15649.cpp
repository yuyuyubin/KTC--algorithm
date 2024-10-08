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

void rec(int dep) {  // 선택 개수
    if(dep == M){
        for(int _=0; _<dep; _++){
            cout<<arr[_]+1<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=0; i<N; i++){
        if(!vi[i]){
            vi[i]=true;
            arr[dep]=i;
            rec(dep+1);
            vi[i]=false;
        }
    }
}

void solve() {
    int Answer = 0;
    cin >> N >> M;
    rec(0);
}

int main(void) {
    ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}