#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char c;
    bool o=true;
    while (cin.get(c)){
        if (c=='"'){
            cout<<(o?"``":"''");
            o=!o;
        }
        else cout<<c;
    }
    return 0;
}