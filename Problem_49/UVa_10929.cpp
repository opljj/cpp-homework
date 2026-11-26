#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    while (cin>>s&&s!="0"){
        int odd=0,even=0;
        for (int i=0;i<(int)s.size();i+=2)
            odd+=s[i]-'0';
        for (int i=1;i<(int)s.size();i+=2)
            even+=s[i]-'0';
        if (odd-even==0||abs(odd-even)%11==0)cout<<s<<" is a multiple of 11.\n";
        else cout<<s<<" is not a multiple of 11.\n";
    }
    return 0;
}