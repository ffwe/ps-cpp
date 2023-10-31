#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> coins(10);
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  for(int i=0; i<n; i++){
    cin >> coins[i];
  }
  sort(coins.begin(), coins.end(),greater<int>());
  int cur=0;
  int ans=0;
  while(m>0){
    if(m>=coins[cur]){
      m-=coins[cur];
      ans++;
    }else{
      cur++;
    }
  }
  cout << ans;
}