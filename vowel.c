#include<stdio.h>
#include<stdio.h>
   void main() {
     char in;
     printf("enter a character\n");
     scanf("%s", &in);

     if(in == 'a'||in=='i'||in=='o'||in=='u') {
        printf("its a vowel");
     } else {
        printf("its a consonant");

     }
   }