#include<bits/stdc++.h>
using namespace std;
class TRAPEZOIDAL_RULE
{
public:
    void solve(){
        int n;
        cin>>n;
        double x[n],y[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }

        double h = (x[1]-x[0]);
        double yy = (y[0]+y[n-1]);
        for(int i=1;i<n-1;i++){
            yy+=(2*y[i]);
        }
        cout<<(h/2)*yy<<endl;

}
};

int main()
{
   cout<<fixed<<setprecision(5);
    TRAPEZOIDAL_RULE t;
    t.solve();

}
