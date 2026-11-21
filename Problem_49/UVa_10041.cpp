#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector <int> k(n);
        for (int &x:k)cin>>x;
        sort(k.begin(),k.end());
        int m=k[(int)k.size()/2];
        int d=0;
        for (int x:k)d+=abs(m-x);
        cout<<d<<'\n';
    }
    return 0;
}