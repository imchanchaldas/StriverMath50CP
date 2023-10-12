#include <bits/stdc++.h>
using namespace std;


 
void solve() {
  
  long long int n;
  cin>>n;
  vector< long long int> v;
  for(int i=0;i<n;i++){
  	long long int num;
  	cin>>num;
  	v.push_back(num);

  }
  int odd=0;
  int ev=0;
  for(int i=0;i<n;i++){
  	if((i%2==0 && v[i]%2==0) || (i%2!=0 && v[i]%2!=0)) continue;
  	else {
  		if(v[i]%2==0) odd++;
  		else ev++;
  	}
  }

  if(ev==odd && n!=1) cout<<ev<<endl;
  else {
  	if(n==1 && v[0]%2==0) {
  		cout<<0<<endl;
  	}
  	else cout<<-1<<endl;
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





 
