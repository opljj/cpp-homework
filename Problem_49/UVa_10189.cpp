#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    const int x[8]={-1,0,1,-1,1,-1,0,1},y[8]={1,1,1,0,0,-1,-1,-1};
    int w,l,t=1;
    while (cin>>w>>l&&w!=0&&l!=0){
        vector <string> f(w);
        for (string &x:f)cin>>x;
        for (int i=0;i<w;i++){
            for (int j=0;j<l;j++){
                int n=0;
                if (f[i][j]=='.'){
                for (int k=0;k<8;k++)
                    if (i+x[k]>=0&&i+x[k]<w&&j+y[k]>=0&&j+y[k]<l)
                        if (f[i+x[k]][j+y[k]]=='*')n++;
                f[i][j]=char(n+48);
                }
            }
        }
        cout<<"Field #"<<t<<":\n";
        for (string s:f)cout<<s<<'\n';
        t++;
    }
    return 0;
}