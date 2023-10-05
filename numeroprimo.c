#include <stdio.h>
int main(){
    int num, div;

    printf("Ingrese un numero: ");
    scanf("%d",&num);
    if(num!=-1 && num>0)
        {
            primo=0;
            div=2;
            while(div<num  && primo!=1)
            {
                if(num%div==0) primo=1;
                div++;
            }
            if (primo==0)
            {
                printf("\nEl numero %d si es primo",num);
              }
            else
            {
                printf("\nEl numero %d no es primo",num);
            }
        }
    } while(num!=-1);
    
    



    return 0;

}
