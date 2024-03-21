#include<bits/stdc++.h>
using namespace std;
const double EPSILON=0.00001;
const int ub = 100;
const int lb = -100;


class FALSE_POSITION{
public:
    double function(double x){
        return x*x*x-2*x+2;
    }
    double falsi(double a, double b){
        return (a*function(b)-b*function(a))/(function(b)-function(a));
    }
    void solve(double a,double b){
        double root;
        int i=1;
        while(abs(a-b)>=EPSILON){
            root = (a+b)/2;
            if(function(root)==0.0)
                break;
            else if(function(a)*function(root)>0.0)
                a = root;
                else b = root;

                cout<<"iteration is : "<<i<<" a is : "<<a<<" b is : "<<b<<endl;
                i++;

        }
        cout<<"The root is  :"<<root<<endl;
    }
};

int main()
{
    FALSE_POSITION false_position;
    cout<<fixed<<setprecision(4)<<endl;
    srand(time(0));
    int a = (rand()%(ub-lb+1))+lb;
    int b = a+1;
    double f1 = false_position.function(a);
    double f2 = false_position.function(b);
    int i=1;
    if(f1>0&&f1<f2)i=-i;
    else if(f1<0&&f1>f2)i=-i;
    while(false_position.function(f1)*false_position.function(f2)>0){
        f1=f2;
        f2+=i;
    }
    cout<<"a is: "<<f1<<" b is:"<<f2<<endl;
    false_position.solve(f1,f2);
}
