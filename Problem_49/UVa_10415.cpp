#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    const string o="cdefgabCDEFGAB";
    const string f[14]={"2347890","234789","23478","2347","234","23","2","3","1234789","123478","12347","1234","123","12"};
    int t;
    cin>>t;
    cin.ignore();
    while (t--){
        bool pp[10]={};
        int pt[10]={};
        string s;
        getline(cin,s);
        for (char c:s){
            bool pn[10]={};
            for (char d:f[o.find(c)])
                pn[(d-'0'+9)%10]=true;
            for (int i=0;i<10;i++){
                if (pn[i]&&!pp[i])pt[i]++;
                pp[i]=pn[i];
            }
        }
        for (int i=0;i<10;i++)
            cout<<pt[i]<<(i<9?" ":"\n");
    }
    return 0;
}