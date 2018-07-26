#include <stdio.h>
#include <stdlib.h>



int main()
{
    FILE *ptDosya;
    char ch;
    int x;
    int bh=0,kh=0,b=0,ys=0,ds=0,tti=0;
    // dosyayý aç:
    ptDosya = fopen("C:\\som.txt", "r");

    do {
    	ch = getc(ptDosya);
    	x=ch;
    	if(x>=65 && x<=90 )
        {
            bh++;
        }
       else if(x>=97 && x<=122 || x==95 )
        {
            kh++;
        }
        //bosluk
        else if(x==32 || x==9 || x==11 || x==13 || x==10 || x==12)
        {
            b++;
        }
        // isaretler(+ - * / =   vs.)
         else if(x==42 || x==43 || x==45 || x==47 || x==61 || x==60 || x==62 )
        {
            ys++;
        }
        //paramtez sayısı
         else if(x==40 || x==41 || x==91 || x==93 || x==123 || x==125 )
        {
            ds++;
        }
         //noktalama işareti sayısı
        else if(x==39 || x==33 || x==34 || x==46 || x==44 || x==58 || x==59 || x==63 )
        {
            tti++;
        }

    	// okunan karakterleri ekrana yaz:
    	// printf("%d  ", ch);
    } while (ch != EOF);

    printf("\nMetindeki buyuk harf sayisi= %d ",bh);
        printf("\nMetindeki kucuk harf ve alt cizgi sayisi= %d ",kh);
            printf("\nMetindeki bosluk sayisi= %d ",b);
                printf("\nMetindeki isaret sayisi(+ - * / =   vs.)= %d ",ys);
                    printf("\nMetindeki noktalama isareti sayisi(. , ; :  vs.) = %d ",tti);
                         printf("\nMetindeki parantez sayisi ( ( ) [ ] { }  vs. )= %d ",ds);
                         printf("\n The Reading is Over :)");





}
