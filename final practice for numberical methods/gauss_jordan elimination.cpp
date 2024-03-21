#include<bits/stdc++.h>
using namespace std;
class GAUSS_ELIMINATION
{
public:
    void solve()
    {
        int n;
        cin>>n;
        double mat[n][n+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<=n;j++){
                cin>>mat[i][j];
            }
        }

        //echelon form
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                double p = mat[j][i]/mat[i][i];
                for(int k=i;k<=n;k++){
                    mat[j][k]-=(mat[i][k]*p);
                }
            }
        }

        //gauss jordan
        for(int i=n-1;i>0;i--){
            for(int j=i-1;j>=0;j--){
                double p = (mat[j][i]/mat[i][i]);
                for(int k=i;k<=n;k++){
                    mat[j][k]-=(mat[i][k]*p);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=n;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }

        for(int i=0;i<n;i++){
            cout<<mat[i][n]/mat[i][i]<<endl;
        }

    }
};
int main()
{
   cout<<fixed<<setprecision(1);
    GAUSS_ELIMINATION g;
    g.solve();

}

