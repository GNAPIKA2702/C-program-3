
#include <stdio.h>
#include <math.h>

int main() 
{
    int unit;
    float amt , tot_amt, sur_charge;
    printf("Enter consumed units:");
    scanf("%d", &unit);
    if ( unit<=50)
     amt= unit*0.50;
    else if ( unit<=150)
     amt= 25+ ((unit-50)*0.75);
    else if (unit<=250)
     amt= 100+((unit-100)*1.20);
    else 
     amt= 220+ ((unit-250)*1.50);
     
    sur_charge= amt*0.20;
    tot_amt= amt+ sur_charge;
    printf("electricity bill= Rs %f", tot_amt); 
    return 0;
}
