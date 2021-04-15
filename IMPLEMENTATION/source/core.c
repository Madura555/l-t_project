#include"transformer.h"
float core_dimensions(float Ai,float F,float B)
{
    float d,a,b;
    Ai=F/B;
d=sqrt(Ai/0.56);
a=0.85*d;
b=0.53*d;
printf("\nDIMENSIONS OF LAMINATIONS\ta=%f,\tb=%f",a,b);
 
}