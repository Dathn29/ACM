#include <bits/stdc++.h>
using namespace std;
typedef long long lli;
int main(){
	lli n,sum=0,maxx=0;
	cin>>n;
	vector<lli> t(n);
	for(lli i=0;i<n;i++){
		cin>>t[i];
	}
	sort(t.begin(),t.end());
	maxx=t.at(n-1);
	for(lli i=0;i<n;i++){
		sum+=t[i];
	}
	if(sum-maxx>maxx){
		cout<<sum<<endl;
	}
	else
		cout<<maxx*2<<endl;
	return 0;
}