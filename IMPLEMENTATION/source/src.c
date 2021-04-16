#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"transformer.h"
float Hw,Ww,ratio,W_hv,W_lv,H_lv,H_hv;
float Vhv,Vlv,Tlv,Thv,Alv,Ahv,Ilv,Ihv;
float pi=3.14,res=0.000000021;
float mu=(0.0000004*3.1416);
void main()
{ 
	float Vp,Vs,Ip,Is,Rp,Xp,Ai,F,B,d,a,b,eff,Q,P_tot,Ilv,Ihv,R_lv,R_hv,Hw,D,a,Ai;
	float f,ph,K,E,type,i;
clrscr();
f=50;
ph=1;
printf("enter the rating of transformer in kVA:");
scanf("%f",&Q);
printf("\nenter the primary voltage in volts:");
scanf("%f",&Vp);
printf("\nenter the secondary voltage in volts:");
scanf("%f",&Vs);
if(Vp>Vs)
	{
	Vhv=Vp;
	Vlv=Vs;
	}
else
	{
	Vhv=Vs;
	Vlv=Vp;
	}

Ip=Q*1000/Vp;
Is=Q*1000/Vs;

if(Vp==Vhv)
	{
	Ihv=Ip;
	Ilv=Is;
	}
else
	{
	Ilv=Ip;
	Ihv=Is;
	}
printf("\nenter the type of transformer:enter c for core type,s for shell type:");
scanf("%c",&type);
if(type=='c')
	K=0.8;
else
	K=1.1;
E=K*sqrt(Q);
printf("\n\nemf per turn E= %f",E);
F=E/(4.44*f);
printf("\n\nflux in core F= %f",F);
printf("\n\nenter assumed flux density value");
scanf("%f",&B);
printf("\n\nenter assumed current density value");
scanf("%f",&i);

float losses();
float efficiency();
float regulation();
float core_dimensions(float Ai,float F,float B);
	return 0;

}
