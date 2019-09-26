#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll>> DSK;
queue<ll> luu;
ll dem1=0,kq1[100000],kq2[100000];
vector<bool> check; 
void bfs(){
	if(luu.empty()==true)
		return;
	ll x=luu.front();
	luu.pop();
	check[x]=true;
	for(ll i=0;i<DSK[x].size();i++){
		if(!check[DSK[x][i]]){
			check[DSK[x][i]]=true;
			luu.push(DSK[x][i]);
			kq1[DSK[x][i]]=1;
			kq2[DSK[x][i]]=x;  
		}
	}
	bfs();
}
int main(){
	ios_base::sync_with_stdio(0);
	ll n,m,a,b,dem=0;
	cin>>n>>m;
	DSK.resize(n+1);
	check.resize(n+1);
	for(ll i=0;i<m;i++){
		cin>>a>>b;
		DSK[a].push_back(b);
		DSK[b].push_back(a);
	}
	kq1[1]=0;
	kq2[1]=-1;
	luu.push(1);
	bfs();
	for(int i=0;i<=6;i++){
		cout<<kq2[i]<<endl;
	}
	if(kq1[n]==0){
		cout<<"IMPOSSIBLE\n";
	}
	else{
		vector<ll> ans;
		int x=n;
		while(x!=-1)
		{
			ans.push_back(x);
			x=kq2[x];
		}
		cout<<ans.size()<<endl;
		for(int i=ans.size()-1;i>=0;i--){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;	
}