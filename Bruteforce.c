#include<stdio.h>

int main()
{
    printf("\t\t\t...... PASSWORD CRACKER ......\n");
    printf("Enter Four Characters Password :\n\t\t\t");
    char p1 ,p2 ,p3 ,p4;
    scanf(" %c%c%c%c", &p1, &p2, &p3, &p4);
    printf("Cracking The Password...");
    char c1 = 32 ,c2 = 32 ,c3 = 32 ,c4 = 32;
    int att = 0;
    for(; p1 != c1 || p2 != c2 || p3 != c3 || p4 != c4;)
    {
     if     (c4 != p4){            c4++; att++;                 }
     else if(c3 != p3){        c3++; c4 = 32; att++;            }
     else if(c2 != p2){    c2++; c3 = 32; c4 = 32; att++;       }
     else if(c1 != p1){ c1++; c2 = 32; c3 = 32; c4 = 32; att++; }
    }
    printf("\nPassword Cracked\nThe Cracked Password is \n\t\t\t%c%c%c%c",c1,c2,c3,c4);
    printf("\nThe Number of Attempts made by the program to crack it are : %d",att);
    return 0;
}
