#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    while (getline(cin,s)){
        vector <int> k(129,0);
        for (int x:s)k[x]++;
        vector <pair<int,int>> u;
        for (int i=32;i<129;i++)
            if (k[i]>0) u.push_back({k[i],-i});
        sort(u.begin(),u.end());
        for (auto x:u)cout<<-x.second<<" "<<x.first<<'\n';
        cout<<'\n';
    }
    return 0;
}