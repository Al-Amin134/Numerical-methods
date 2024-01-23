#include<bits/stdc++.h>
using namespace std;
const int ub = 10;
const int lb = 0;
const double EPSILON = 0.0001;

class FALSE_POSITION
{
public:

    double func(double x)
    {
        return x*x*x-2*x-5;
    }

    double falsi(double a,double b)
    {
        return (a*func(b)-b*func(a))/(func(b)-func(a));
    }

    double get_rand()
    {
        return ((rand()%(ub-lb+1))+lb);
    }

    void false_position(double a, double b)
    {
        double root = a;
        double prev = a;
        while(abs(a-b)>=EPSILON)
        {
            root = falsi(a,b);
            if(func(root)==0.0)break;

            else if(func(a)*func(root)<0.0)
            {
                b = root;
            }
            else a = root;

            if(abs(prev-root)<EPSILON)break;
            else prev = root;

            cout<<"a "<<a<<" b"<<b<<" root "<<root<<endl;

        }

    }

};

int main()
{

    FALSE_POSITION fals;
    double a,b;
    cout<<fixed<<setprecision(4)<<endl;
    srand(time(0));
    do
    {
        a = fals.get_rand();
    }
    while(fals.func(a)>0.0);

    do
    {
        b = fals.get_rand();
    }
    while(fals.func(b)<0.0);

    //cout<<"a :"<<a<<" b: "<<b<<endl;

    fals.false_position(a,b);
}
