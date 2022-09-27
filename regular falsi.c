#include<stdio.h>
#include<math.h>
float fn(float n, float coeff[], int d)
{
    float ans=0;
    for(int i=0; i<=d; i++)
    {
        ans+=(coeff[i] * pow(n,d-i));
    }
    return ans;
}
//OR DEFINE THE FUNCTION HERE:
/*float fn(float n, float coeff[], int d)
{
    float ans=0;
    ans=3*n + sin(n) - exp(n);
    return ans;
}*/
int main()
{
    printf("Name: Karan Agarwal\nUniversity roll no.: 2016805\nCSE section: D\nRegula Falsi Method\n\n");
    int d, ctr=0;
    float x0=0, x1=1;
    printf("Enter degree of equation: ");
    scanf("%d", &d);
    float coeff[d+1];
    printf("Enter the terms:\n");
    for(int i=0; i<=d; i++)
    {
        printf("coefficient of x^%d:", d-i);
        scanf("%f", &coeff[i]);
    }
    printf("Enter the interval: ");
    scanf("%f%f", &x0, &x1);
    float rt=x1,prevrt=x0;
    while(1)
    {
        ctr++;
        prevrt=rt;
        float fx0 = fn(x0, coeff, d);
        float fx1 = fn(x1, coeff, d);
        rt = x0 - (x1-x0)*fx0/(fx1-fx0);
        float frt = fn(rt, coeff, d);
        printf("Approximate value: %f\n", rt);
        if(fabs(rt-prevrt) < 0.0001)
        {
            printf("The root is: %f", rt);
            break;
        }
        else if(frt*fx0 < 0)
        {
            x1=rt;
        }
        else x0=rt;
        if(ctr>50)
        {
            printf("Root not found in given interval.\n");
            break;
        }
    }
    return 0;
}

