#include <bits/stdc++.h>
using namespace std;


 
void solve() {
  
  
	int r;
	int c;
	cin>>r;
	cin>>c;
	long long int total_cell=r*c;
	if(total_cell>2){
		if(total_cell%2==0) cout<<total_cell/2<<endl;
		else cout<<(total_cell/2)+1<<endl;
	}
	else cout<<1<<endl;
  
  
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





 
