#include<bits/stdc++.h>
using namespace std;
const int ub = 10;
const int lb = 0;
const double EPSILON = 0.0001;

class LAGRANGE
{
public:

    void lagrange()
    {
        int n;
        cin>>n;
        double x[n],y[n];
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>y[i];
        }


        double sum = 0;
        int p;


        cin>>p;

        for(int i=0; i<n; i++)
        {
            double u=1,d=1;
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                {
                    u*= (p-x[j]);
                    d*= (x[i]-x[j]);
                }
            }
            sum+=((u/d)*y[i]);
        }

        cout<<fixed<<setprecision(2)<<endl;
        cout<<sum<<"k"<<endl;


    }


};

int main()
{

    LAGRANGE lagrnge;



    lagrnge.lagrange();

}
