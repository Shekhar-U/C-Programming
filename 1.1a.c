  
  /* Read a character from the user using  getchar()  and display 
 it using  putchar(). */
  
  #include <stdio.h>
int main(){
    
    char ch;

    printf("Enter a character ");
    ch = getchar();

    
    printf("You Entered ");
    putchar(ch);

    return 0;
}