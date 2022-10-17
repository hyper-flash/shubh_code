#include <stdio.h>

int main()
{   
    
    // print hello world
    printf("Hello World\n\n");
    
    // new progarm integer number 
    
    int a,b;
    
    // input the value of a
    printf("enter the value of a : ");
    scanf("%d",&a);
    
    // input the value of b
    printf("enter the value of b : ");
    scanf("%d",&b);
    
    
    int sum = a+b ;
    
    // sum a and b
    
    printf("ans = %d\n\n",sum);
    
    
    // new progarm folat number    
    
    
    float x,y;
    
    // input the value of x
    printf("enter the value of x : ");
    scanf("%f",&x);
    
    // input the value of y
    printf("enter the value of y : ");
    scanf("%f",&y);
    
    float  z = x-y ;
    
    // sum x and y
    
    printf("ans = %.2f\n\n ",z);
    
    
    // print charter 
    
    char c ='S';
    
    printf("charter = %c\n\n ",c);
    
    
    // enter the name 
    
    char name[100] ="hello come to c language";
    
    printf(" intro = %s ",name);
   
   
    
    // thank you 
    

    return 0;
}
