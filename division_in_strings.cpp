#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1, s2;
    cin>>s1;
    cin>>s2;
    int len1 = s1.size();
    int len2 = s2.size();
    if(len1%len2 == 0){
        int p = len1/len2;
        string ss="";
        for(int i=0;i<p;i++){
           ss=ss+s2;
        }
        if(s1.find(ss)!=string::npos)
            cout<<"1";
        else
            cout<<"-1";
       
    }else{
        cout<<"-1";
    }
    return 0;
}
