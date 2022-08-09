#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    int Nte1[13];
    int Nte2[15];
    int merge[28];
    int i, j, N, moyn,b=13;
    int c =0;
    int min, max;
do{
    printf ("sortir du programme tapez 0\n");
    printf("donnez le  numero du classe : ");
    scanf("%d", &N);
    switch (N)
    {
    case 1:
        printf("inserez les notes pour la classe 1:\n");
        for (i = 0; i < 13; i++)
        {
            printf("Nte1[%d]= ", i);
            scanf("%d", &Nte1[i]);
        }
        max = Nte1[0];
        min = Nte1[0];
    
        for (i = 1; i < 13; i++)
        {
            if (max < Nte1[i])
                max = Nte1[i];
        }
        for (i = 1; i < 13; i++)

        {
            if (Nte1[i] < min)
                min = Nte1[i];
        }
        for (i = 0; i < 13; i++)
                {if (Nte1[i]>=10 ) {c++;}
                }
                printf ("les notes superieure ou egale a 10 sont:%d\n",c);
        printf("la plus grand moyenne est:%d\nla plus petit moyenne est: %d\n ", max, min);
        break;

    case 2:
        printf("inserez les notes pour la classe 2:\n");
        c=0;
        for (i = 0; i < 15; i++)
        {
            printf("Nte2[%d]= ", i);
            scanf("%d", &Nte2[i]);
        }
        max = Nte2[0];
        min = Nte2[0];
        for (i = 1; i < 15; i++)
        {
            if (max < Nte2[i])
                max = Nte2[i];
        }
        for (i = 1; i < 15; i++)
        {
            if (min > Nte2[i])
                min = Nte2[i];
        }
                for (i = 0; i < 15; i++)
                {if (Nte2[i]>=10 ) {c++;}
                }
                printf ("les notes superieur ou egale 10 sont :%d\n",c);
        
        printf("la plus grand moyenne est:%d\nla plus petit moyenne est: %d\n", max, min);
        break;
    case 3:
        printf("inserez les notes pour les deux classes :\n");
    for (i = 0; i < 13; i++)
    {
        merge[i]=Nte1[i];
    }
    for (i = 0; i < 15; i++)
    {
         merge[b]=Nte2[i];
         b++;
    }
    for (i=0;i<27;i++)
     for (j = i + 1; j < 28; j++)
        { 
            if (merge[i] > merge[j])
            {
                m = merge[i];
                merge[i] = merge[j];
                merge[j] = m;
            }
}
            printf ("les notes de deux classes par ordre croissant est:");
            for (i = 0; i < 28; i++){
                printf("%d\t",merge[i]);
            }

    default:
        printf("choisissez 1 ou 2 ou 3");
    }
    }while(N!=0);
    }