#include<bits/stdc++.h>
using namespace std;
const int ub = 100;
const int lb = -100;
const double EPSILON = 0.0001;

class BISECTION
{
public:

    double function(double x)
    {
        return pow(x,3)-4*x-9;
    }

    void bisection(double a, double b)
    {
        double root;
        while(abs(b-a)>EPSILON)
        {
            root = (a+b)/2;
            if(function(root)==0.0)break;

            if(function(root)*function(a)<0.0)
                b = root;
            else a = root;
        }
        cout<<"root: "<<root<<endl;
    }

};

int main()
{

    BISECTION bisec;
    double a,b;
    cout<<fixed<<setprecision(4)<<endl;
    srand(time(0));
    do
    {
        a = (rand()%(ub-lb+1))+lb;
    }
    while(bisec.function(a)>0.0);

    do
    {
        b = (rand()%(ub-lb+1))+lb;
    }
    while(bisec.function(b)<0.0);

    cout<<"a :"<<a<<" b: "<<b<<endl;

    bisec.bisection(a,b);
}
