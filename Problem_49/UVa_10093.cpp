#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    while (getline(cin,s)){
        int m=1,sum=0;
        for (char x:s){
            int d=0;
            if (isdigit(x))d=x-'0';
            else if (isupper(x))d=x-'A'+10;
            else if (islower(x))d=x-'a'+36;
            sum+=d;
            if (d>m)m=d;
        }
        bool p=true;
        for (int i=m;i<=61;i++)
            if (sum%i==0){cout<<i+1<<'\n';p=!p;break;}
        if (p)cout<<"such number is impossible!\n";
    }
}