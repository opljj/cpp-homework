#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    double x[4],y[4];
    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3])==8){
        for (int i=0;i<2;i++)
            for (int j=2;j<4;j++)
                if (x[i]==x[j]&&y[i]==y[j]){
                    double rx=x[1-i]+x[5-j]-x[i];
                    double ry=y[1-i]+y[5-j]-y[i];
                    if (fabs(rx)<5e-4)rx=0;
                    if (fabs(ry)<5e-4)ry=0;
                    printf("%.3f %.3f\n",rx,ry);
                }
    }    
    return 0;
}