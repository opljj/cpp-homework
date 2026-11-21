#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n,k;
        double p,ans;
        cin>>n>>p>>k;
        double q=1-p;
        ans=p*pow(q,k-1)/(1-pow(q,n));
        printf("%.4f\n",ans);
    }
    return 0;
}