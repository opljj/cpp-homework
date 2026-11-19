#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m=0;
    vector<string> a;
    string x;
    while (getline(cin,x)&&x!="0"){
        a.push_back(x);
        m=max((int)x.size(),m);
    }
    for (int i=0;i<m;i++){
        for (int j=a.size()-1;j>=0;j--){
            if (i<a[j].size())cout<<a[j][i];
            else cout<<" ";
        }
    cout<<'\n';
    }
    return 0;
}