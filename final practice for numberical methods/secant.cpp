
#include<bits/stdc++.h>
using namespace std;
const double EPSILON=0.00001;
const int ub = 100;
const int lb = -100;


class SECANT{
public:
    double function(double x){
        return x*x*x-2*x+2;
    }

    void solve(double x1,double x2){
        double root;
        int i=1;
        while(abs(x1-x2)>=EPSILON){
            root = (x1*function(x2)-x2*function(x1))/(function(x2)- function(x1));
            if(function(root)==0.0)
                break;
            else {
                x1 = x2;
                x2 = root;
            }
            cout<<"iteration is " <<i<<" x1 is : "<<x1<<" x2 is : "<<x2<<endl;
                i++;

        }
        cout<<"The root is  :"<<root<<endl;
    }
};

int main()
{
   SECANT secant;
    cout<<fixed<<setprecision(4)<<endl;
    srand(time(0));
    int  a = (rand()%(ub-lb+1))+lb;
    int b = (rand()%(ub-lb+1))+lb;

    secant.solve((double)a,(double)b);
}
