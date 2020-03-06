#include <stdio.h>
#include <string.h>

int main(void){

int quantidade;
int counter=0;

int total=0;

printf("Quantos numeros quer introduzir\n");
scanf("%d",&quantidade);
if (quantidade > 20)
{
    quantidade =0;
    printf("Insira outra quantidade\n");
    scanf("%d",&quantidade);
    }
if (quantidade <= 20)
    {
        
    int num[quantidade];
    
        for (int i = 0; i < quantidade; i++)
        { 
            printf("Insira um número\n");
            scanf("%d",&num[i]);

            if (num[i] >=0 && num[i] <= 10)
            {
                printf("%dº: %d\n",i,num[i]);
                total = total + num[i];

                if (total >= 100 && total - num[i] < 100)
                {
                    counter = i;
                }
                
                
            }
            else if (num[i] < 0 || num[i] > 10)
            {
                printf("INSIRA NUMEROS ENTRE 0 E 10!\n");
                i--;
            }
        }

        if (total <= 50)
        {
            printf("\nAqui estão todos os números inseridos\n");
            for (int i = 0; i < quantidade; i++)
            {
                printf("%dº: %d\n",i+1,num[i]);
            }
        } 
        else if (total > 50 && total < 100)
        {
            printf("\nAqui estão todos os números inseridos e o total\n");
            for (int i = 0; i < quantidade; i++)
            {
                printf("%dº: %d\n",i,num[i]);
            }
            printf("total = %d\n",total);
        }else if (total >100)
        {
            printf("\nULTRAPASSOU NA POSICAO %d",counter);
            printf("\n!!! ARREBENTOU COM A ESCALA !!!\n");
        }
    }





}