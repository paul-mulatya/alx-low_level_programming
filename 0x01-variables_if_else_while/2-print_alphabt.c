#include <stdio.h>                                                              
 /**                                                                             
   * main-for                                                                    
   * Return: 0                                                                   
   */                                                                            
 int main(void)                                                                  
 {                                                                               
         char alpha[26] = "abcdefghijklmnopqrstuvwxyz";                          
         int i;                                                                  
        
	 putchar(alpha[0]);
	 for (i = 0; i < 26; i++)                                                
 		putchar(alpha[i]);                                              
         putchar('\n');                                                          
	 return (0);                                                             
  }           