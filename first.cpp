#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=0;i<=n;i++) a[0][i]=0;
    for(int i=0;i<=m;i++) a[i][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int x;
            cin>>x;
            a[i][j] = a[i-1][j]+x;
        }
    }
    int k;
    cin>>k;
    int cnt=0;
    for(int i=1; i<=(n-k)+1;i++){
        for(int j=1;j<=(m-k)+1;j++){
            int ones=0;
            for(int l=j; l<(j+k);l++){
                ones=ones+a[i+k-1][l];
            }
            for(int l=j; l<(j+k);l++){
                ones=ones-a[i-1][l];
            }
            //cout<<i<<" "<<j<<" "<<ones<<endl;
            int zeroes = k*k-ones;
            if(ones>=zeroes)
                cnt++;
            
        }
    }
    cout<<cnt;

    return 0;
}

