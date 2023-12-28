#include <stdio.h>

 main() {
   int a,b,c;
   printf("Enter a: ");
   scanf("%d", &a);
    printf("Enter b: ");
   scanf("%d", &b);
    printf("Enter c: ");
   scanf("%d", &c);

   if (a < b) {
       if (a < c) printf("Minimum number is a");
       else printf("Minimum number is c");
   } else {
       if (b < c) printf("Minimum number is b");
       else printf("Minimum number is c");
   }
}
