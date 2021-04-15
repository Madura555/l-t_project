#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"transformer.h"
void main(){
float losses(Ilv,Ihv,R_lv,R_hv,Hw,D,a,Ai);
float efficiency(Q,P_tot);
float regulation(Vp,Ip,Rp,Xp);
float core_dimensions(float Ai,float F,float B);

int test()
{
    float losses(200,400,20,20,5,60,20,40);
    float efficiency(20000,500);
    float regulation(10000,200,50,20);
    float core_dimensions(25,50,90);
}
}