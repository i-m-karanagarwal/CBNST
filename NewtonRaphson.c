#include<stdio.h>
#include<math.h>
#define ACCEPTABLE_ERROR 0.0001


float f(float);
float differentiation(float);

int main()
{
    int  i=0;
    float x1,x2,x,x0;

    do{
        printf("Enter value of a and b: ");
        scanf("%f%f", &x1, &x2);

        if(f(x1)*f(x2)>0)
        {
            printf("a and b are not correct values\n");
            printf("Please enter correct value\n");
            continue;
        }else
        {
            printf("Root lies between %f and %f\n", x1,x2);
            break;
        }
    }while(1);

    if(fabs(f(x1))< fabs(f(x2)))
        x0=x1;
    else
        x0=x2;

    while(++i)
    {
        x=x0-(f(x0)/differentiation(x0));
        if(fabs(x-x0) < ACCEPTABLE_ERROR)
        {
            printf("Iteration : %d  Root %f\n", i, x);
            break;
        }
        printf("Iteration : %d  Root %f\n", i, x);
        x0=x;
    }

    printf("Root: %f    Iteration : %d", x,i);
    return 0;

}

float f(float x)
{
    return x*x*x-4*x-9;
}
float differentiation(float x)
{
    return 3*x*x-4;
}
// float f(float x)
// {
//     return x*x-12;
// }
// float differentiation(float x)
// {
//     return 2*x;
// }