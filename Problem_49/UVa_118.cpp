#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

static map <char,int> d={{'N',1},{'E',2},{'S',3},{'W',4},{'L',-1},{'R',1}};
static map <int,char> id={{1,'N'},{2,'E'},{3,'S'},{4,'W'}};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int w,h,x,y;
    cin>>w>>h;
    vector <int> spotx,spoty;
    while (cin>>x>>y){
        char face;
        string move;
        cin>>face>>move;
        int f=d[face];
        bool fall=false;
        for (size_t i=0;i<move.size();i++){
            if (move[i]!='F'){
                f+=d[move[i]];
                if (f>4)f=1;
                else if (f<1)f=4;
            }
            else{
                if (f==1||f==3)
                    y-=(f-2);
                else
                    x-=(f-3);
            }
            if (x>w||y>h||x<0||y<0){
                bool safe=false;
                if (f==1||f==3)
                    y+=(f-2);
                else
                    x+=(f-3);
                for (size_t j=0;j<spotx.size();j++)
                    if (x==spotx[j]&&y==spoty[j])
                        safe=true;
                if (!safe){
                    fall=true;
                    break;
                }
            }
        }
        if (fall){
            spotx.push_back(x);
            spoty.push_back(y);
            cout<<x<<" "<<y<<" "<<id[f]<<" LOST\n";
        }
        else cout<<x<<" "<<y<<" "<<id[f]<<"\n";
    }
    return 0;
}