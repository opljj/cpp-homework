#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        int d,n;
        cin>>d>>n;
        vector <int> k(n);
        for (int &x:k)cin>>x;
        vector <bool> h(d+1,false);
        for (int i=0;i<(int)k.size();i++)
            for (int j=k[i];j<=d;j+=k[i])
                h[j]=true;
        int sum=0;
        for (int i=1;i<(int)h.size();i++)
            if (h[i]&&i%7!=6&&i%7!=0)sum++;
        cout<<sum<<'\n';
    }
    return 0;
}