#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string l,s="";
    cin.ignore();
    while (n--){
        getline(cin,l);
        s+=l;
    }
    vector <int> k(26,0);
    for (char c:s)
        if(isalpha((unsigned char)c))
            k[toupper(c)-'A']++;
    vector <pair<int,char>> x;
    for (int i=0;i<(int)k.size();i++)
        if (k[i]>0)x.push_back({-k[i],char('A'+i)});
    sort(x.begin(),x.end());
    for (auto p:x)cout<<p.second<<" "<<-p.first<<'\n';
    return 0;
}