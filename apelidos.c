#include <stdio.h>
#include <string.h>

int main(void){

char nome[300];
int i = 0;
int a = 0;
int t=0;
int b;
int c;
int vogal_count = 0;
int conson_count = 0;
int nome1 =0;
int apelido =0;
int f=0;

printf("Nome Completo\n");
fgets(nome,300,stdin);
c = strlen(nome);
b=c;

for ( i = 0; i < c; i++)
{
    switch (nome[i])
    {
    case '\n':
    case ' ':
    case '"':
    break;

    case 'a':
    case 'A':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'o':
    case 'O':
    case 'U':
    case 'u':
     
     vogal_count ++;
        break;
    
    default:
    conson_count ++;
        break;
    }
    
    
}
printf("%d = vogal , %d = consoantes\n",vogal_count,conson_count);
printf("Primeiro Nome: ");
do
{
    b = b-1;
} while (nome[b] != ' ');


for ( a = 0; a <= c; a++)
{
   if (nome[a] != ' ' && nome[a] != '\n')
   {
       printf("%c",nome[a]);
   }
   else
   {
       printf("\nApelido: ");
       break;
   }
   
}
for (b;b <= c; b++)
{
   printf("%c",nome[b]);
}
printf("\nReverse: ");
for (a;a>=0;a--)
{
    printf("%c",nome[a]);
}
printf("\n");
}

   


  
   






