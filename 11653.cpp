// https://www.acmicpc.net/problem/11653
#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int i=2;
  while(n>1){
    if(i*i>n){
       cout << n;
       return 0;
    }
    if(n%i==0){
      cout << i << endl;
      n=n/i;
    }else{
      i++;
    }
  }
}