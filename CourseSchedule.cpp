#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll>> DSK;
vector<int> check;
vector<pair<ll,ll>> vec; 
ll pre[200000],post[200000],dem=1;
bool check_backedge(ll a,ll b,ll pre[200000],ll post[200000]){
	if(pre[b]<pre[a]&&pre[a]<post[a]&&post[a]<post[b])
		return true;
	return false;
}
void dfs(ll x){
	check[x]+=1;
	if(check[x]==1){
		pre[x]=dem;
		dem++;
	}
	for(ll i=0;i<DSK[x].size();i++){
		if(!check[DSK[x][i]]){
			dfs(DSK[x][i]);
		}
	}
	if(check[x]==1){
		post[x]=dem;
		dem++;
	}
}
int main(){
	ll n,m,dem1=0,a,b;
	cin>>n>>m;
	DSK.resize(n+1);
	check.resize(n+1);
	for(ll i=0;i<m;i++){
		cin>>a>>b;
		DSK[a].push_back(b);
	}
	for(int i=1;i<n+1;i++){
		if(!check[i])
			dfs(i);
	}		
	for(int i=1;i<=n;i++){
		for(int j=0;j<DSK[i].size();j++){
			if(check_backedge(i,DSK[i][j],pre,post)==true){
				cout<<"IMPOSSIBLE\n";
				break;
				dem1=1;
			}
		}
	}
	if(dem1==0){
		for(int i=1;i<=n;i++){
			vec.push_back(make_pair(post[i],i));
		}
		sort(vec.begin(),vec.end());
		for(ll i=n-1;i>=0;i--){
			cout<<vec[i].second<<" "; 
		}
	}
	return 0;
}