#include<bits/stdc++.h>
using namespace std;
const int ub = 10;
const int lb = 0;
const double EPSILON = 0.0001;

class SECANT
{
public:

    double func(double x)
    {
        return x*x*x-2*x-5;
    }

    double get_rand()
    {
        return ((rand()%(ub-lb+1))+lb);
    }

    double secant_func(double x1,double x2)
    {
        return ((x1*func(x2))-(x2*func(x1)))/(func(x2)-func(x1));
    }

    void secant(double x1,double x2)
    {
        double root = x1;
        while(abs(x1-x2)>=EPSILON)
        {
            root = secant_func(x1,x2);
            x1 = x2;
            x2 = root;
        }
        cout<<root<<endl;
    }

};

int main()
{

    SECANT scnt;
    double a,b;
    cout<<fixed<<setprecision(6)<<endl;
    srand(time(0));
    a = scnt.get_rand();
    b = scnt.get_rand();
    cout<<"the initial guess :"<<a<<" b : "<<b<<endl;
    scnt.secant(a,b);
}
