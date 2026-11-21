#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while (cin>>n){
        vector <int> k(n);
        for (int &x:k)cin>>x;
        vector <int> seen(n,0);
        for (int i=0;i<(int)k.size()-1;i++){
            int u=abs(k[i]-k[i+1]);
            if (u>0&&u<n)
            seen[u-1]=1;
        }
        if (count(seen.begin(),seen.end()-1,0))cout<<"Not jolly\n";
        else cout<<"Jolly\n";
    }
    return 0;
}