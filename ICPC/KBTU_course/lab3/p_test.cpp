#include <bits/stdc++.h>
using namespace std;

const int N = 5005;

int n, m, a[N], b[N];
int f[N][N], pre[N][N];

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
 
    cin >> m;
    for (int j = 1; j <= m; ++j)
        cin >> b[j];
  
  /* O(n^3) solution
  for(int i = 1; i <= n; ++i)
    for(int j = 1; j <= m; ++j) 
    {
      if(a[i] == b[j]) 
      {
        for(int k = 0; k < j; ++k)
          if(a[i] > b[k])
            f[i][j] = max(f[i][j], f[i-1][k]+1);
      }
      else f[i][j] = f[i-1][j];
    }
  */
  
    for (int i = 1; i <= n; ++i)
    {
        int fmax = 0, pos = 0;
        for (int j = 1; j <= m; j++)
        {
            f[i][j] = f[i - 1][j];     
            pre[i][j] = pre[i-1][j];
            if (a[i] == b[j]){   
                if (f[i][j] < fmax + 1) {
                    f[i][j] = fmax + 1;
                    pre[i][j] = pos;  
                }
            }
            if (b[j] < a[i])
            {
                if (f[i - 1][j] > fmax)
                {
                    fmax = f[i - 1][j]; 
                    pos = j;
                }
            }
        }
    }

    int res = 0, last = 0, tot = 0, path[N];

    for (int j = 1; j <= m; ++j) 
    { 
        if (res < f[n][j])
        {
            res = f[n][j];
            last = j;
        }
    }

    cout << res << endl;

    int i = n, j = last;
    while (i || j) 
    {
        if (pre[i][j] != j)
            path[++tot] = b[j];
        j = pre[i][j];
        i--;
    }

    while (tot)
        cout << path[tot--] << ' ';
    cout << endl;

    return 0;
}