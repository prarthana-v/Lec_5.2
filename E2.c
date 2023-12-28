#include <stdio.h>

 main() {
   int a, b, c, d;
    
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    printf("Enter d: ");
    scanf("%d",&d);
   
   if (a > b) {
       if (a > c) {
           if (a > d)
               printf("Maximum number is a");
           else
               printf("Maximum number is d");
       } else {
           if (c > d)
               printf("Maximum number is c");
           else
               printf("Maximum number is d");
       }
   } else {
       if (b > c) {
           if (b > d)
               printf("Maximum number is b");
           else
               printf("Maximum number is d");
       } else {
           if (c > d)
               printf("Maximum number is c");
           else
               printf("Maximum number is d");
       }
   }
}
