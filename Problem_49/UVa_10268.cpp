#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    while (cin>>x){
        cin.ignore();
        string s;
        getline(cin,s);
        stringstream ss(s);
        vector <int> f;
        while (ss>>y)f.push_back(y);
        int n=f.size()-1,ans=0;
        for (int c:f){
            if(n>0)
                ans+=(int)pow(x,n-1)*n*c;
            n--;
        }
        cout<<ans<<'\n';
    }
    return 0;
}