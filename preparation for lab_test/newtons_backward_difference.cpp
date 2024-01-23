#include<bits/stdc++.h>
using namespace std;
const int ub = 10;
const int lb = 0;
const double EPSILON = 0.0001;

class NEWTONS_BACKWARD
{
public:

    void newtons_backward()
    {
        int n;
        cin>>n;
        double x[n],y[n][n];
        double sumx=0,sumy=0,sumxy=0,sumxx=0;
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
                y[i][j] = y[i+1][j-1]-y[i][j-1];
            }
        }

        //table
        for(int i=0; i<n; i++)
        {
            for(int j=0; i<n-j; j++)
            {
                cout<<y[i][j]<<" ";
            }
            cout<<endl;
        }


        //interpollation


        double d = (x[1]-x[0]);

        double p;

        cin>>p;

        double h = (p-x[0])/d;

        double sum = y[0][0];

        double u = h;

        int fact = 1;

        int j = 0;
        for(int i=n-1; i>=0; i--)
        {
            sum+=(u*y[i][n-i+1])/fact;
            fact*=(j+1);
            u*=(h+j);
            j++;
        }

        cout<<fixed<<setprecision(2)<<endl;
        cout<<sum<<"k"<<endl;


    }


};

int main()
{

    NEWTONS_BACKWARD nwtns;



    nwtns.newtons_backward();

}
