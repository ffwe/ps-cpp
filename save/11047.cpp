#include <bits/stdc++.h>
using namespace std;
int n,m;
int coins[10];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i=0; i<n; i++)
    cin >> coins[i];
  int a=0;
  for(int j=n-1;j>=0;j--){
    a+=m/coins[j];
    m=m%coins[j];
  }
  cout << a;
}