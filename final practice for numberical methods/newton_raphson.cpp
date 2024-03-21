#include<bits/stdc++.h>
using namespace std;
const double EPSILON = 0.001;
const int ub = 100;
const int lb = -100;

class NEWTON_RAPSHSON
{
public:

    // function for the main equation
    double func(double x){
        return x*x*x-2*x-5;
    }

    //function for the differentiate of the function
    double ddxfunc(double x){
        return 3*x*x-2;
    }

    //newton raphson method

   void newton_ranpson(double x){
    if(func(x)==0.0){
        cout<<"The root is "<<x<<endl;
        return;
    }

    double h = func(x)/ddxfunc(x);
    while(abs(h)>EPSILON){
        x = x-h;
        h = func(x)/ddxfunc(x);

   }

   cout<<"The root is : "<<x<<endl;
}

};

//main function
int main()
{
//double a=1,b=1;
    srand(time(0));
    NEWTON_RAPSHSON newton;
    double x = (rand()%(ub-lb+1))+lb;
    cout<<"initial_guess: "<<x<<endl;
    newton.newton_ranpson(1);


}
