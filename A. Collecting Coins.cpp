
#include <bits/stdc++.h>
using namespace std;


 
void solve() {
  
  
	int a;
	int b;
	int c;
	int n;
	int nd;
	int flag=0;
	vector<int> sis;
	for(int i=0;i<3;i++){
		int ele;
		cin>>ele;
		sis.push_back(ele);
	}
	
	cin>>n;
	nd=n;

	int MAX=*max_element(sis.begin(),sis.end());

	for(int i=0;i<3;i++){
		if(n>=MAX-sis[i])
		{	
			n=n-(MAX-sis[i]);
			sis[i]=sis[i]+(MAX-sis[i]);
			
		}
		else{
			
			flag=1;
			break;
		}
	}

	if(n>=0 && n%3==0 && flag==0){
		
		cout<<"YES"<<endl;


	}

	else cout<<"NO"<<endl;





	
  
  
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






