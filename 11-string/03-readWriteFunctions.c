#include<stdio.h>
int main(){

    //input using scanset { Doubt-03 }
    char str1[10];
    printf("Enter vowel letter : ");
    scanf("%[aeiou]",str1);
    printf("%s\n",str1);

    char str2[10];
    printf("Enter consonant letter : ");
    scanf(" %[^aeiou]",str2);
    printf("%s\n",str2);












    return 0;
}