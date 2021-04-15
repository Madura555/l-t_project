#include"transformer.h"
float efficiency(Q,P_tot)
{ float eff;
eff=Q*100/(Q+P_tot/1000); 
printf("\nefficiency is:%f",eff); 
}