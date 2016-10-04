#include <stdio.h>
/*imprime la tbala Fahrenheit-Celsius
para fahr=0,20,...,300*/
main()
{
int fahr, celsius;
int lower, upper, step;
lower= 0;  //límite inferior de la tabla de temperaturas//
upper= 300; //límite superior//

fahr = lower;
while (fahr <= upper){
celsius=5*(fahr-32)/9;
printf("%d\t%d\n",fahr,celsius);

fahr = fahr + step;

}

}
