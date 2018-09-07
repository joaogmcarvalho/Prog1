#include <stdio.h>

/*°C = ( F - 32)/1.8  */
/*°F = C * 1.8+32    */

 int main()
{
 float celsius, fahrenheit;
 
 printf("\nEntre com os graus Celsius:");
 scanf("%f", &celsius);
 
fahrenheit=(1.8*celsius+32);
printf("%.1f em Celsius eh igual a %.1f em Fahr\n",celsius, fahrenheit);

celsius=(fahrenheit-32/1.8);
printf ("%.1f em Fahrenheit eh igual a %.1f em Celsius\n",fahrenheit, celsius);

system ("pause");
return 0;
}
