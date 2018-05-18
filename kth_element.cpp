#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    vector<int>a;
    vector<int>b;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++){
        cin>>x;
        b.push_back(x);
    }
    vector<int>cc;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cc.push_back(a[i]+b[j]);
        }
    }
        sort(cc.begin(),cc.end());
    int k;
    cin>>k;
    cout<<cc[k-1];
    return 0;
}
