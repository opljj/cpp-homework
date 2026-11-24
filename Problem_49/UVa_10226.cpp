#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    cin.ignore();
    string s;
    getline(cin,s);
    while (t--){
        map <string,int> k;
        double total=0;
        while (getline(cin,s)&&!s.empty()){
            k[s]++;
            total++;
        }
        for (auto p:k)cout<<p.first<<" "<<fixed<<setprecision(4)<<p.second/total*100<<'\n';
        cout<<'\n';
    }
    return 0;
}