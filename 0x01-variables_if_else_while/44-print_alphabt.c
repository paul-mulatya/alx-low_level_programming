#include <stdio.h>                                                              
                                                                                 
/**                                                                             
 * main-for                                                                    
 * Return: 0                                                                   
 */                                                                            
int main(void)                                                                  
{                                                                               
	 char alpha[26]="abcdefghijklmnopqrstuvwxyz";
         int i;                                                                  
                                                                                 
         for (i = 0; i < 26; i++)                                              
                 if (i != 4 && i != 16)                                       
                         putchar(alpha[i]);                                             
         putchar('\n');                                                          
         return (0);                                                             
}                      
