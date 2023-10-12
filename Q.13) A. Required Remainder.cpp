#include <bits/stdc++.h>
using namespace std;


 
void solve() {
  
  long long int x;
  long long int y;
  long long int n;
  cin>>x;
  cin>>y;
  cin>>n;
  int rem=n%x;
  if(rem==y) cout<<n<<endl;
  else if(y>rem){
  	
  	n=n-rem;
  	n=n-x;
  	n=n+y;
  	cout<<n<<endl;
  }

  else{
  	n=n-rem;
  	n=n+y;
  	cout<<n<<endl;
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





 
