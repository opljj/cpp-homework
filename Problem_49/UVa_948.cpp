#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        vector <ll> f={1,2};
        while (f.back()+f[f.size()-2]<=n)
            f.push_back(f.back()+f[f.size()-2]);
        vector <int> x(f.size(),0);
        ll sum=0;
        for (int i=(int)f.size()-1;i>=0;i--)
            if (sum+f[i]<=n){
                sum+=f[i];
                x[i]=1;
            }
        cout<<n<<" = ";
        bool first=false;
        for (int i=(int)x.size()-1;i>=0;i--){
            if (x[i])first=true;
            if (first)cout<<x[i];
        }
        cout<<" (fib)\n";
    }
    return 0;
}