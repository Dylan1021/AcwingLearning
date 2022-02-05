#include <iostream>

using namespace std;

int main(){

    double x;
    cin >> x;

    double l = 0, r = x;
    while(r - 1 > 1e - 6){
        double mid = (l+r)/2;
        if(mid * mid >= x) r = mid ;
        else l = mid;
    }

    printf("%lf\n",l);

    return 0; 
}