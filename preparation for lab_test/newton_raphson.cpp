#include<bits/stdc++.h>
using namespace std;
const int ub = 10;
const int lb = 0;
const double EPSILON = 0.0001;

class NEWTON_RAPSON
{
public:

    double func(double x)
    {
        return x*x*x-2*x-5;
    }
    double ddx_func(double x)
    {
        return 3*x*x-2;
    }

    double get_rand()
    {
        return ((rand()%(ub-lb+1))+lb);
    }


    void newton_rapson(double x)
    {
        double h = func(x)/ddx_func(x);
        while(abs(h)>=EPSILON)
        {
            x = x-h;
            h = func(x)/ddx_func(x);
        }

        cout<<"the root is "<<x<<endl;

    }

};

int main()
{

    NEWTON_RAPSON nwtn;
    double a,b;
    cout<<fixed<<setprecision(6)<<endl;
    srand(time(0));
    a = nwtn.get_rand();
    cout<<"the initial guess :"<<a<<endl;
    nwtn.newton_rapson(a);
}
