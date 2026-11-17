#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    while (cin>>a>>b){
        int m=0;
        for (int i=min(a,b);i<=max(a,b);i++){
            int k=i,sum=1;
            while (k>1){
                if (k%2==0)
                    k/=2;
                else 
                    k=k*3+1;
                sum++;
            }
            m=max(sum,m);
        }
        cout<<a<<" "<<b<<" "<<m<<'\n';
    }
    return 0;
}