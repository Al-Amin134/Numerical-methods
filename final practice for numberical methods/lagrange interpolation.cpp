#include<bits/stdc++.h>
using namespace std;
class LAGRANGE_INTERPOLATION
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

        // Enter the interpolating point
        double xx;
        cin>>xx;

        double sum = 0.0;
        for(int i=0;i<n;i++){
            double numerator = 1;
            double denominator = 1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    numerator*=(xx-x[j]);
                    denominator*=(x[i]-x[j]);
                }
            }
            sum+=((numerator/denominator)*y[i]);
        }

        cout<<sum<<endl;

}


};

int main()
{
   cout<<fixed<<setprecision(4);
   LAGRANGE_INTERPOLATION l;
   l.solve();

}
