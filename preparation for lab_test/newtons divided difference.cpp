#include<bits/stdc++.h>
using namespace std;
const int ub = 10;
const int lb = 0;
const double EPSILON = 0.0001;

class DIVIDED_DIFFERENCE
{
public:

    void divided_difference()
    {
        int n;
        cin>>n;
        double x[n],y[n][n];
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
        }

        for(int i=0; i<n; i++)
        {
            cin>>y[i][0];
        }

        for(int j=1; j<n; j++)
        {
            for(int i=0; i<n-j; i++)
            {
                y[i][j] = (y[i+1][j-1]-y[i][j-1])/(x[i+j]-x[i]);
            }
        }

        cout<<fixed<<setprecision(0)<<endl;
        srand(time(0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-i; j++)
            {
                cout<<y[i][j]<<" ";
            }
            cout<<endl;
        }

        double sum = y[0][0];
        double f;

        double p;
        cin>>p;

        for(int i=1; i<n; i++)
        {
            f = 1;
            for(int j=0; j<i; j++)
            {
                f*=(p-x[j]);
            }
            sum+=(y[0][i]*f);
        }

        cout<<sum<<endl;

    }

};

int main()
{
    DIVIDED_DIFFERENCE divided;
    divided.divided_difference();

}
