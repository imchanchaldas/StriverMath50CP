#include <bits/stdc++.h>
using namespace std;

#define INF (1 << 29)
#define ll long long
const int N = 1e5 + 5;
 
void solve() {
  int n, x;
  cin >> n>> x;
  int c=2;
  int f=1;
  while(c<n){
  	c=c+x;
  	f++;
  }
  
  cout<<f<<endl;
}
 
int main() {


	#ifndef ONLINE_JUDGE
	 freopen("input.txt","r",stdin);
	 freopen("output1.txt","w",stdout);
	 #endif

	 ios::sync_with_stdio(false);
	 cin.tie(nullptr);
	 cout.tie(nullptr);
	 int t;
	 cin>>t;
	 while(t--){
	 	solve();
	 }

	 
	  return 0;
}





 
