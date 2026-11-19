#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string dtob,htob;
        int k=n;
        while (k>0){
            dtob+=char(k%2+48);
            k/=2;
        }
        k=n;
        while (k>0){
            string f;
            int u=k%10;
            for (int tc=0;tc<4;tc++){
                f+=char(u%2+48);
                u/=2;
            }
            k/=10;
            htob+=f;
        }
        cout<<count(dtob.begin(),dtob.end(),'1')<<" "<<count(htob.begin(),htob.end(),'1')<<'\n';
    }
    return 0;
}