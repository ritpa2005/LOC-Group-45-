//Program to find total number of alphabets, digits and special characters in a string

# include <stdio.h>

void count(char s[]){
    int ca=0,cd=0,cs=0;
    for(int i=0; s[i]!='\0';i++){
        if ((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)) ca+=1;
        else if(s[i]>=48&&s[i]<=57) cd+=1;
        else if(s[i]!=' ') cs+=1;
    }
    printf("Digits count = %d, Alphabets count = %d and Special characters count = %d",cd, ca, cs);
}

void main(){
    char s[100];
    printf("Enter the string: ");
    gets(s);
    count(s);
}