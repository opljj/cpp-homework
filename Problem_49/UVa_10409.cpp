#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    while (cin>>t&&t!=0){
        int top=1,north=2,west=3;
        string s;
        while (t--){
            cin>>s;
            int old=top;
            switch(s[0]){
                case 'n':top=7-north;north=old;break;
                case 's':top=north;north=7-old;break;
                case 'e':top=west;west=7-old;break;
                case 'w':top=7-west;west=old;break;
            }
        }
        cout<<top<<'\n';
    }
    return 0;
}