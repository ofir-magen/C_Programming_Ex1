#include"myMath.h"
#include<stdio.h>

double Exponent(int x){
double e = 2.71828;
double e2 = e;
if(x < 0) {
while(x!=-1){
e2 = e2*e;
x++;
	}
e2 = 1/e2;
}
else if(x>0){
while(x!=1){
e2 = e2*e;
x--;
	}
}
else{
e2 =1;
}
return e2;
} 


double Power(double x , int y){
double x2 = x;
if(y < 0) {
while(y!=1){
x2 = x2*x;
y++;
	}
x2 = 1/x2;
}
else if(y>0){
while(y!=1){
x2 = x2*x;
y--;
	}
}
else{
x2 =1;
}
return x2;
}


