#include"transformer.h"
float losses(Ilv,Ihv,R_lv,R_hv,Hw,D,a,Ai)
{
float Pc_lv,Pc_hv,Pc,Li,p_iron,gi,Gi,Pi,P_tot;
Pc_lv=Ilv*Ilv*R_lv;
Pc_hv=Ihv*Ihv*R_hv;
Pc=1.1*(Pc_lv+Pc_hv);
 
Li=2*(Hw+D+a);
p_iron=1.16;  //specific iron loss
gi=7650;  //specific weight of iron
Gi=Li*gi*Ai;
Pi=1.2*p_iron*Gi;  //making 20%allowance for joints
P_tot=Pi+Pc;
printf("\ntotal losses=%f",P_tot);
}