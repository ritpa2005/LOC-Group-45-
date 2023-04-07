//Program to count frequency of each character of the string

#include <stdio.h>
#include <string.h>

void frequency(char s[]){
    int l=strlen(s);
    char s1[l+1];
    for(int i=0;i<l;i++){
        s1[i]=s[i];
    }
    for(int j=0;j<l;j++){
        int c=0;
        for(int i=j;i<l;i++){
            if (s[j]==s1[i]){
                c+=1;
                s1[i]=0;
            }
        }
        if (c!=0) printf("\t%c\t%d\n",s[j],c);
    }
    
}

void main(){
    char s[50];
    printf("Enter a string:");
    scanf("%s",s);
    printf("Elements\tOccurences\n");
    frequency(s);
}