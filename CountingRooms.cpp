#include <bits/stdc++.h>
using namespace std;
int s[1005][1005],n,m,dem=0;
void find(int s[1005][1005],int x,int y){
	s[x][y]=2;
	if(x<n-1&&s[x+1][y]==1)
		find(s,x+1,y);
	if(y<m-1&&s[x][y+1]==1)
		find(s,x,y+1);
	if(x>0&&s[x-1][y]==1)
		find(s,x-1,y);
	if(y>0&&s[x][y-1]==1)
			find(s,x,y-1);	
	return;				
}
int main(){
	string a[1001];
	cin>>n>>m;

	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='#'){
				s[i][j]=0;
			}
			else
				s[i][j]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]==1){
				dem++;
				find(s,i,j);
			}
		}
	}
	
	cout<<dem<<endl;
	return 0;
}