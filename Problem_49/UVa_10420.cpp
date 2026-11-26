#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    while (cin>>t){
        map <string,int> k;
        while (t--){
            string s,l;
            cin>>s;
            getline(cin,l);
            k[s]++;
        }
        for (auto p:k)cout<<p.first<<" "<<p.second<<'\n';
    }
    return 0;
}