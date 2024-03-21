#include<bits/stdc++.h>
using namespace std;
class DIVIDED_DIFFERENCE
{
public:
    void solve(){
       int n;
       cin>>n;
       double x[n],y[n][n];
       for(int i=0;i<n;i++){
        cin>>x[i];
       }
       for(int j=0;j<n;j++){
        cin>>y[j][0];
       }

       for(int j=1;j<n;j++){
        for(int i=0;i<n-j;i++){
            y[i][j] = ((y[i+1][j-1])-(y[i][j-1]))/(x[i+j]-x[i]);
        }
       }
       //difference table

       for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<y[i][j]<<" ";
            }
            cout<<endl;
       }

       // given value xx
       double xx;
       cin>>xx;

       double sum = 0;
       sum+=y[0][0];
       for(int i=1;i<n;i++){
        double p=1;
        for(int j=0;j<i;j++){
            p*=(xx-x[j]);
        }
        sum+=(p*y[0][i]);
       }



       cout<<sum<<endl;
}


};

int main()
{
   cout<<fixed<<setprecision(5);
    DIVIDED_DIFFERENCE d;
   d.solve();

}
