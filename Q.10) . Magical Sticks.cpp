
#include <bits/stdc++.h>
using namespace std;


 
void solve() {
  
  long long int n;
  cin>>n;
  if(n<=2) cout<<1<<endl;
  else 
  {
  	if(n%2==0)
  		cout<<(n/2)<<endl;
  	else
  		cout<<(n/2)+1<<endl;
  }
  
	 
}
 
int main() {


	#ifndef ONLINE_JUDGE
	 freopen("input.txt","r",stdin);
	 freopen("output1.txt","w",stdout);
	 #endif

	 
	 int t;
	 cin>>t;
	 while(t--){
	 	solve();
	 }

	 
	  return 0;
}






