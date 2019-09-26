#include <bits/stdc++.h>
using namespace std;
vector<int> vec(26,0);
vector<char> add;
bool check(string s){
  int dem=0;
  for(int i=0;i<s.size();i++){
    vec[s[i]-'A']+=1;
  }
  for(int i=0;i<vec.size();i++){
    dem+=vec[i]%2;
  }
  if(dem==0||dem==1)
    return true;
  return false;
}
int main(){
  string n,r;
  cin>>n;
  if(!check(n))
    cout<<"NO SOLUTION\n";
  else
  {
    for(int i=0;i<vec.size();i++){
      if((vec[i])%2==0){
        for(int j=0;j<vec[i]/2;j++)
          add.push_back(i+'A');
      }
    }
    for(int i=0;i<vec.size();i++){
      if((vec[i])%2!=0){
        for(int j=0;j<vec[i];j++)
          add.push_back(i+'A');
      }
    }
    for(int i=vec.size()-1;i>=0;i--){
      if((vec[i])%2==0){
        for(int j=0;j<vec[i]/2;j++)
          add.push_back(i+'A');
      }
    }
  }
  for(int i=0;i<add.size();i++){
    cout<<add[i];
  }
  cout<<endl;
  return 0;
}  