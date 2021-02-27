#include"myMath.h"
#include<stdio.h>

float add(float x , float y)// -- returns x + y
{

return (x+y);
}

float sub(float x , float y)// -- returns x - y
{
return (x-y);
}
double mul(double x , int y)// -- returns y*x
{
return (y*x);
}
double div(double x, int y)// -- returns x/y
{
if(y!=0){
return (x/y);
}
}
