#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll pow(ll a, ll b, ll m) {
  if(b==1) return a % m;
  ll val = pow(a, b/2, m);
  val  = val * val %m;
  if(b%2 == 0)  return val;
  return val * a % m;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll a,b,c;
  cin >> a >> b >> c;
  cout << pow(a,b,c);
}