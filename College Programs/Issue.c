#include <stdio.h>
main()
{
   FILE *f1, *f2, *f3;
   int number, i, a;

   printf("How many data do you want?");
   scanf("%d",&a);
   printf("Enter cOntent");
   f1 = fopen("INPUT", "w"); // Creating File 
   for(i = 1; i <= a; i++){
      scanf("%d", &number);
      if(number == -1) 
             break;
      putw(number,f1);
   }

fclose(f1);

f1 = fopen("INPUT", "r");
f2 = fopen("ODD", "w");
f3 = fopen("EVEN", "w");
/* Read from DATA file */
while((number = getw(f1)) != EOF)
{
    if(number %2 == 0)
       putw(number, f3); // Write to EVEN file 
    else
       putw(number, f2); // Write to ODD file 
}

fclose(f1);
fclose(f2);
fclose(f3);

f2 = fopen("ODD","r");
f3 = fopen("EVEN", "r");

printf("\n\nContents of ODD file\n\n");
while((number = getw(f2)) != EOF)
     printf("%4d", number);

printf("\n\nContents of EVEN file\n\n");
while((number = getw(f3)) != EOF)
     printf("%4d", number);

fclose(f2);
fclose(f3);
}