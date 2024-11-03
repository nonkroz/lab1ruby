
#include <stdio.h>
#include <math.h>


void main( )
{
    float m;
    float l;
    float A=4.735;
    float b=8.216;
    scanf("%f" , &l);
    if(l<= A)
    {
        m=sqrt(fabs(A-exp(l-0.5))*b);
        printf("%f " , m);
    }
    else if(((A+b)/2<l)&&(l<=b))
        {
          m=(A*(log(b)));  
          printf("%f " , m);
        }
        
        
            
  
}