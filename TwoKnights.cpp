#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dem=0,x,y,n;
int main(){
	cin>>n;
	for(ll i=1;i<=n;i++){
		x=i*i*(i*i-1)/2;
		y=(2*i-2)*(i-2)*2;
		dem=x-y;
		cout<<dem<<endl;
	}
	return 0;
}