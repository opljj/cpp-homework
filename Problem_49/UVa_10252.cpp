#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b;
    while (cin>>a>>b){
        for (char i='a';i<='z';i++)
            for (int j=0;j<min(count(a.begin(),a.end(),i),count(b.begin(),b.end(),i));j++)
                cout<<i;
        cout<<'\n';
    }
    return 0;
}