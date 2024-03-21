#include<bits/stdc++.h>
using namespace std;
class BACKWARD_INTERPOLATION
{
public:
    void solve(){
        int n;
        cin>>n;
        double x[n];
        double y[n][n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i][0];
        }

        //difference table
        for(int j=1;j<n;j++){
            for(int i=0;i<n-j;i++){
                y[i][j] = (y[i+1][j-1])-(y[i][j-1]);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<y[i][j]<<" ";
            }
            cout<<endl;
        }
    // insert xx;
    double xx;
    cin>>xx;
    //calculation of forward difference

    double yy= 0.0;
    yy+=y[n-1][0];
    int fact = 1;
    double h = (x[1]-x[0]);
    double u = (xx-x[n-1])/h;
    double p = u;


    for(int i=1;i<n;i++){
        yy+=((p*y[n-i-1][i])/fact);
        fact*=(i+1);
        p*=(u+i);
    }

    cout<<yy<<endl;



}


};

int main()
{
   cout<<fixed<<setprecision(0);
   BACKWARD_INTERPOLATION  nn;
   nn.solve();

}
