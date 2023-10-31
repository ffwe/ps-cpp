#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int n,m;
string board[102];
int dist[102][102];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i=0; i<n;i++)
    cin >> board[i];
  
  queue<pair<int,int>> q;
  q.push({0,0});
  while(!q.empty()){
    pair<int,int> cur=q.front(); q.pop();
    for(int d=0;d<4;d++){
      int nx=cur.X+dx[d];
      int ny=cur.Y+dy[d];
      if(nx<0||n<=nx||ny<0||m<=ny) continue;
      if(dist[nx][ny]!=0||board[nx][ny]=='0') continue;
      dist[nx][ny]=dist[cur.X][cur.Y]+1;
      q.push({nx,ny});
    }
  }
  cout << dist[n-1][m-1] +1;
}