#include <stdio.h>    
#include <string.h>  
void main()  
{  
    char str[50], temp; 
    int i, left, right, len;  
    printf (" \n Display a reverse string in the C: \n");  
    printf (" \n Enter a string to reverse order: ");  
    scanf( "%[^\n]s", &str);  
    len = strlen(str); 
    i=left; 
    right = len - 1;  
    for (i = 0; i <right; i++)  
    {  
        temp = str[i];  
        str[i] = str[right];  
        str[right] = temp;  
        right--;  
    }  
    printf (" The reverse of the original string is: %s ",  str);  
    
}  