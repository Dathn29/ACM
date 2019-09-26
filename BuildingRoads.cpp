#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll>> DSK;
vector<bool> check; 
ll kq[100000];
void dfs(ll x){
	check[x]=true;
	for(ll i=0;i<DSK[x].size();i++){
		if(!check[DSK[x][i]])
			dfs(DSK[x][i]);
	} 
}
int main(){
	ll n,m,a,b,dem=0;
	cin>>n>>m;
	DSK.resize(n+1);
	check.resize(n+1);
	for(ll i=0;i<m;i++){
		cin>>a>>b;
		DSK[a].push_back(b);
		DSK[b].push_back(a);
	}
	for(int i=1;i<n+1;i++){
		if(!check[i]){
			dem++;
			dfs(i);
			kq[dem]=i;
		}
	}
	cout<<dem-1<<endl;
	for(int i=1;i<dem;i++){
		cout<<kq[i]<<" "<<kq[i+1]<<endl;
	}	
}