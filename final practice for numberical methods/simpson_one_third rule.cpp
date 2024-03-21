#include<bits/stdc++.h>
using namespace std;
class SIMPSON_ONE_THIRD
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
           if(i%2==0)yy+=(2*y[i]);
           else yy+=(4*y[i]);
        }
        cout<<(h/3)*yy<<endl;

}
};

int main()
{
   cout<<fixed<<setprecision(5);
    SIMPSON_ONE_THIRD s;
    s.solve();

}
