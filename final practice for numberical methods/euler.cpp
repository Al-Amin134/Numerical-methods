#include<bits/stdc++.h>
using namespace std;
class EULER
{
public:
    double func(double x,double y){
        return x+y;
    }
    void solve(){
        double xn;
        cin>>xn;
        double x0 = 0;;
        int n;
        cin>>n;
        double y[n];
        double h = (xn-x0)/n;
        y[0]=1;
       double x = x0;
       double ans = 0;
        for(int i=1;i<=n;i++){

            y[i] = y[i-1]+(h*func(x,y[i-1]));
                x = x+h;
               ans = y[i];
               if(x==xn);
        }
        cout<<ans<<endl;

}
};
int main()
{
   cout<<fixed<<setprecision(4);
    EULER e;
    e.solve();

}
