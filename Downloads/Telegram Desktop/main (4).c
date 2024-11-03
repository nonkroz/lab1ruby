
#include <stdio.h>
#include <math.h>
void main()
{
  float w=700;
float L=0.1;
float R=32.5;
float U=320.4;
float t,i,f;
scanf ("%f",&t);
f=atan((L*w)/R);
i=(U/(R*sqrt(pow((w*L)/R,2)+1)))*sin((w*t)-f);
printf ("f= %f i=%f t=%f",f,i,t);
}
