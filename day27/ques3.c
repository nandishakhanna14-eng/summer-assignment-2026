#include <stdio.h>
int main()
{
    char name[50];
    float basic,hra,da,pf,gross,net;
    printf("enter employee name");
    scanf("%[^\n]",name);
    printf("enter employee salary");
    scanf("%f",&basic);
    hra=basic*0.20;
    da=basic*0.10;
    pf=basic*0.08;
    gross=basic+hra+da;
    net=gross-pf;
    printf("\n____salary slip_____\n");
    printf("employee name:%s\n",name);
    printf("basic salary :%.2f\n",basic);
    printf("hra          :%.2f\n",hra);
    printf("da           :%.2f\n",da);
    printf("pf           :%.2f\n",pf);
    printf("gross salary :%.2f\n",gross);
    printf("net salary   :%.2f\n",net);
    return 0;
}