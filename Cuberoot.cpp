#include <stdio.h>
double diff(double n ,double mid)
{
    if(n>(mid*mid*mid))
    return (n-(mid*mid*mid));
    else
    
    return( (mid*mid*mid)-n);
    
}
double cubicroot(int n )
{
    double start=0,end=n;
    double e=0.0000001;
    while(1)
    {
        double mid=(start+end)/2;   
        double error=diff(n,mid);
        if(error<=e)
        return mid;
        if((mid*mid*mid)>n)
        {
            end=mid;
        }
        else{
            start=mid;
        }
        }
}
int main()
{
    printf("Enetre he number \n");
double n ;
scanf("%lf",&n);
double res=cubicroot(n);
printf("Cubic root is %lf",res);
    return 0;
}
