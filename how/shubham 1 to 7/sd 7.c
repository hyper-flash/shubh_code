#include <stdio.h>

int main()
{
    printf("program 7\n\n");
    
    // program &&
    
    int x,y;
    
    printf("enter the value of x: ");
    scanf("%d",&x);
    
    printf("enter the value of y: ");
    scanf("%d",&y);
    
    printf("ans : %d\n\n" , x<10 && y<10);
    
    
    //program ||
    
    int a,b;
    
    printf("enter the value of a: ");
    scanf("%d",&a);
    
    printf("enter the value of b: ");
    scanf("%d",&b);
    
    printf("ans : %d\n\n" , a<10 || b<10 );
    
    
    // new program !
    
    int p,q;
    
    printf("enter the value of p: ");
    scanf("%d",&p);
    
    printf("enter the value of q: ");
    scanf("%d",&q);
    
    printf("ans : %d" , !(p<10 && q<10));

    return 0;
}
