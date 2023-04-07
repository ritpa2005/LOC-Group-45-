//Program to remove a specific chaaracter from a string

#include <stdio.h>
#include <string.h>

void remo(char str[],char c){
    int n=strlen(str),k=1;
    for(int i=0;i<=n;i++){
        if (str[i]==c){ 
            for (int j=i;j<n;j++){
                str[j]=str[j+k];
            }
            k++;
            i--;
            n--;
        }
    }
}
 
int main()
{   int l;
    char s[50];
    char c;
    printf("Enter the string: ");
    gets(s);
    printf("Enter the character to be removed: ");
    scanf("%c",&c);
    remo(s,c);
    printf("The string after removal of character is %s",s);
    return 0;
}