#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string s;
    while (getline(cin,s)){
        string k="1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
        for (char c:s){
        if (k.find(tolower(c))+1)
            cout<<k[k.find(tolower(c))-2];
        else cout<<c;
        }
    }
    return 0;
}