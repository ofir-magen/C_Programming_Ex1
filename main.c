#include<stdio.h>
#include"myMath.h"

int main(){
double var;
printf("Please inset a real number: \n");
scanf("%lf",&var);
int vare =(int) var;
double a0 = Exponent(vare);
double a1 = Power(var,3); 
float a2 = add(a0,a1);
float f1 = sub(a2,2); 


printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %0.4lf is: %0.4f\n",var,f1);

a0=mul(var,3);
a1=Power(var,2);
a1=mul(a1,2);
float f2= add((float)a1,(float)a0);
printf("The value of f(x) = 3x + 2X^2 at the point %0.4lf is: %0.4f\n",var,f2);
a0= Power(var,3);
a1=mul(a0,4);
a0=div(a1,5);
double a3=mul(var,2);
float f3=sub((float)a0,(float)a3);
printf("The value of f(x) = (4x^3)/5 -2x at the point %0.4lf is: %0.4f\n",var,f3);

return 0;
}
