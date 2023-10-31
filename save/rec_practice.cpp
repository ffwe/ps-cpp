#include<bits/stdc++.h>
#include<cmath>

using namespace std;
using ll = long long;

ll rec(ll a, ll b, ll m){
  ll powed = std::pow(a,b);
  if(powed < m ) return powed%m;
  int left = b/2;
  int right = b-left;
  return rec(a,left,m) * rec(a,right,m) %m;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll a,b,c;
  cin >> a >> b >> c;
  cout << rec(a,b,c);

}