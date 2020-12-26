#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("color f0");
    int i,j;
    char crip[1000],real[1000];
    printf("Digite a frase criptografada: \n");
    gets(crip);
    for(i=1;i<26;i++){
        for(j=0;j<strlen(crip);j++){
            real[j]=crip[j]+i;
            if(((real[j]<'A' || real[j]>'Z')&&(crip[j]>='A' && crip[j]<='Z'))||((real[j]<'a' || real[j]>'z')&&(crip[j]>='a' && crip[j]<='z')))
                real[j]-=26;

            if((crip[j]<'A' || crip[j]>'Z')&&(crip[j]<'a' || crip[j]>'z'))
                real[j]=crip[j];
        }
        printf("\n\n%d: %s",i,real);
    }
    system("pause");
    return 0;
}
