#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while (cin>>n){
        vector <int> k(n);
        for (int &x:k)cin>>x;
        sort(k.begin(),k.end());
        int l=k[(n-1)/2],h=k[n/2];
        int sum=upper_bound(k.begin(),k.end(),h)-lower_bound(k.begin(),k.end(),l);
        cout<<l<<" "<<sum<<" "<<h-l+1<<'\n';
    }
    return 0;
}