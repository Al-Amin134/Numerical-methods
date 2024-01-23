#include<bits/stdc++.h>
using namespace std;
const int ub = 10;
const int lb = 0;
const double EPSILON = 0.0001;

class LEAST_SQUARE
{
public:

    void least()
    {
        int n;
        cin>>n;
        double x[n],y[n];
        double sumx=0,sumy=0,sumxy=0,sumxx=0;
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
            sumx+=x[i];
            sumxx+=(x[i]*x[i]);
        }
        for(int i=0; i<n; i++)
        {
            cin>>y[i];
            sumy+=y[i];
        }

        for(int i=0; i<n; i++)
        {
            sumxy+=(x[i]*y[i]);
        }

        double a1 = (n*sumxy-(sumx*sumy))/(n*sumxx-(sumx*sumx));
        double a0 = ((sumy/n)-(a1*sumx)/n);
        cout<<"The equation is : y = "<<a0<<" + "<<a1<<" x"<<endl;
    }


};

int main()
{

    LEAST_SQUARE lst_sqaure;

    cout<<fixed<<setprecision(2)<<endl;

    lst_sqaure.least();

}
