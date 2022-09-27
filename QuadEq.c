#include<stdio.h>
#include<math.h>
int main()
{
    printf("Name: Karan Agarwal\nUniversity roll no.: 2016805\nCSE section: D\nQuadratic Equation\n\n");
    float a,b,c;
    printf("Enter the coefficients:\n");
    scanf("%f%f%f", &a, &b, &c);
    float D=b*b - 4*a*c;
    float r1, r2;
    if(D>0)
    {
        r1=((-1)*b + sqrt(D))/(2*a);
        r2=((-1)*b - sqrt(D))/(2*a);
        printf("Real and distinct roots.\n");
        printf("The roots are:%f, %f", r1, r2);
    }
    else if(D==0)
    {
        r1=r2=(-1)*b /(2*a);
        printf("Real and equal roots.\n");
        printf("The roots are:%f, %f", r1, r2);
    }
    else
    {
        float real=(-1)*b /(2*a);
        float img=sqrt(fabs(D))/(2*a);
        printf("Complex Roots.\n");
        printf("The roots are:\n%f + i%f\n%f - i%f", real, img, real, img);
    }
    return 0;
}


