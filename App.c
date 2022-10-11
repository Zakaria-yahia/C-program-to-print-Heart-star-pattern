#include <stdio.h>

int main()
{
    unsigned char x=11,b=1,f=2;


    for(unsigned char i=1;i<=2;i++)
   {
       unsigned char n,w=0;
       for(unsigned char m=1;m<=2;m++ )
       {
           for(unsigned char y=1;y<=f+w;y++)
            {
                printf(" ");
            }
            for(unsigned char z=1;z<=7+n;z++)
            {
                printf("*");
            }
            if(i==1){
                w++;
            }
        }
        w=0;
        f=f-1;
        n=n+2;
      printf("\n");
    }
   for(unsigned char y=1;y<=2;y++)
   {
       for(unsigned char z=1;z<=2*x-1;z++)
       {
           printf("*");
       }
       printf("\n");
   }
   for(unsigned char y=x;y>=1;y--)
   {
       for(unsigned char a=1;a<b;a++)
       {
           printf(" ");
       }
       for(unsigned char z=1;z<=2*y-1;z++)
       {
           printf("*");
       }
       b++;

      printf("\n");
    }
}
