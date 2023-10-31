#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int p[502][502];
int vis[502][502];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int n, m;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> p[i][j];
    }
  }
  int a=0;
  int b=0;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(p[i][j]==0||vis[i][j]) continue;
        a++;
        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j]=1;
        
        int area=0;
        while(!q.empty()) {
          area++;
          pair<int,int> cur = q.front();
          q.pop();
          for(int k=0; k<4; k++){
            int nx = cur.X+dx[k];
            int ny = cur.Y+dy[k];
            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(p[nx][ny] !=1 || vis[nx][ny]) continue;
            vis[nx][ny]=1;
            q.push({nx,ny});
          }
        }
        b=max(b,area);
    }
  }

  cout << a << '\n' << b << endl;
}