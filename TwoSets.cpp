#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n;
	cin>>n;
	if(n%4==1||n%4==2){
		cout<<"NO\n";
	}
	else if(n%4==0){
		cout<<"YES\n";
		cout<<n/2<<endl;
		for(int i=1;i<=n;i++){
			if(i%2==0)
				i=i+2;
			cout<<i<<" ";
		}
		cout<<endl;
		cout<<n/2<<endl;
		for(int i=2;i<n;i++){
			cout<<i<<" ";
			if(i%2!=0)
				i=i+2;
		}
	}
	else if(n%4==3){
		cout<<"YES\n";
		cout<<n/2+1<<endl;
		cout<<"1 2 ";
		for(int i=4;i<=n;i++){
			cout<<i<<" ";
			if(i%2==0)
				i=i+2;
		}
		cout<<endl;
		cout<<n/2<<endl;
		cout<<"3 ";
		for(int i=5;i<n;i++){
			cout<<i<<" ";
			if(i%2==0)
				i+=2;	
		}
	}
	cout<<endl;
	return 0;
}