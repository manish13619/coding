#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long sum=0;
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum=sum+x;
            if(x%2==0)
                even++;
            else
                odd++;
        }
        if(sum%2==0)
            cout<<even<<endl;
        else cout<<odd<<endl;
    }
    return 0;
}
