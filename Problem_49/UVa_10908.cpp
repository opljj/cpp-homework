#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const int ad[8]={-1,0,1-1,1,-1,0,1},ws[8]={-1,-1,-1,0,0,1,1,1};
    int t;
    cin>>t;
    while (t--){
        vector <int> ans;
        int m,n,q;
        cin>>m>>n>>q;
        vector <string> s(m);
        for (string &x:s)cin>>x;
        int a,b;
        for (int tc=0;tc<q;tc++){
            cin>>a>>b;
            char mid=s[a][b];
            int i=0;
            bool stop=false;
            while (!stop){
                i++;
                for (int k=0;k<8;k++){
                    int ak=a+ws[k]*i,bk=b+ad[k]*i;
                    if (ak>=m||bk>=n||ak<0||bk<0||s[ak][bk]!=mid){
                        stop=true;
                        i--;
                        break;
                    }
                }
            }
            ans.push_back(i*2+1);
        }
        cout<<m<<" "<<n<<" "<<q<<'\n';
        for (int x:ans)cout<<x<<'\n';
    }
    return 0;
}