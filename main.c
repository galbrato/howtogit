#include <stdlib.h>
#include <stdio.h>

double fat(double a){
    double res = 1;
    while(a--) res *= a;
    return res;
}

double pot(double a, double n){
    double res = 1;   
    while(n--) res *= a;
    return res;
}

double cos(double x){
	double res = 1;
	int i;
	for(i = 0; i < 10; i++){
		int f = 2*i;
		 res += (i% 2 == 0) ? (pot(x, f)/fat(f)) : -(pot(x, f)/fat(f));
	}
}

int main (int argc, char const *argv[]){
		
	printf("Ola mundo!vai se fuder cartaz agora temq que dar conflito nessa merda porra
			para que vc querme fuder nao para de mandar eu editar essa merda 
			porra
			porra
			porra
			porra
			\n");		
	printf("cos(3.14) =  %lf\n", cos(3.14));

	return 0;
}