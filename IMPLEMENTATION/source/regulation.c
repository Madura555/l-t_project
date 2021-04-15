#include"transformer.h"

float regulation(Vp,Ip,Rp,Xp)
{   float pu_res,pu_react,regln;
    pu_res=Ip*Rp/Vp;
    pu_react=Xp*Ip/Vp;

    regln=((pu_res*0.8)+(pu_react*0.6))*100;
printf("\n voltage regulation is:%f%",regln);
 
}