//Program to find number of vowels and consonants in a string

# include <stdio.h>

void count(char s[]){
    int cv=0,cs=0;
    for(int i=0; s[i]!='\0';i++){
        if ((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)){
            if (s[i]==65||s[i]==69||s[i]==73||s[i]==79||s[i]==85||s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117) cv+=1;
            else cs+=1;
        }
    }
    printf("Vowel count = %d and Consonant count = %d",cv,cs);
}

void main(){
    char s[100];
    printf("Enter the string: ");
    gets(s);
    count(s);   
}