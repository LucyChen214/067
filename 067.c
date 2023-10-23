#include<stdio.h>

int main ()
{
    int i, n, k, m, posK, posM, andou, aux;

    scanf("%d %d %d", &n, &k, &m);
    int doces[n];
    for(i=0; i<n; i++)
    {
        doces[i] = 1; //inicializa as posicoes com doces
    }
    posK = -1; //posicao inicial de K
    posM = n; //posicao inicial de M
    aux = n;


    while(aux>=0)
    {
        andou = 0;

        while(andou<k)
        {
            posK ++;
            if(posK >= n) //Condicao para caso ultrapasse a posicao n
            {
                posK = 0;
            }
            if(doces[posK] == 1)
            {
                andou ++;
            }

        }
        andou = 0;
        while(andou<m)
        {
            posM --;
            if(posM < 0) //Condicao para caso ultrapasse a posicao 0 
            {
                posM = n-1;
            }
            if(doces[posM] == 1)
                andou ++;

        }
        //retira o doce da posicao final
        doces[posK] = 0;
        doces[posM] = 0;
        if(posK == posM) //condicao para caso ambos caiam no mesmo espaco ao mesmo tempo
            printf("%d\n", posK+1);
        else
            printf("%d %d\n", posK+1, posM+1);

        aux-=2;
    }

    return 0;
}