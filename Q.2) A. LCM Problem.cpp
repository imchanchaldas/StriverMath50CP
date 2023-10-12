#include <bits/stdc++.h>
using namespace std;
#define INF (1 << 29)
#define ll long long
const int N = 1e5 + 5;
 
void solve() {
  int l, r;
  cin >> l >> r;
  if (1LL * 2 * l > 1LL * r) {
    cout << -1 << ' ' << -1 << '\n';
  } else {
    cout << l << ' ' << 2 * l << '\n';
  }
}
 
int main() {


	#ifndef ONLINE_JUDGE
	 freopen("input.txt","r",stdin);
	 freopen("output1.txt","w",stdout);
	 #endif

	 ios::sync_with_stdio(false);
	 cin.tie(nullptr);
	 cout.tie(nullptr);
	 int tt;
	  cin >> tt;
	  while (tt--) {
	    solve();
	  }
	 
	  return 0;
}





 
