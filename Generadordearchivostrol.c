#include <stdio.h>
char    dato[10];
char trol[50] = "troleado";
int i = 0;
int u = 0;
int d = 0;
int c = 0;
int m = 0;

void camnom()
{
    if (u == 10)
    {
        u = 0;
        d++;
    }else if (d == 10)
    {
        d = 0;
        c++;
    }
    else if (c == 10)
    {
        c = 0;
        m++;
    }
    
    if (i < 10)
    {
        u++;
        trol[8] = u + '0';
        trol[9] = '.';
        trol[10] = 't';
        trol[11] = 'x';
        trol[12] = 't';
    }else if (i > 9 && i < 100)
    {
        u++;
        trol[8] = u + '0';
        trol[9] = d + '0';
        trol[10] = '.';
        trol[11] = 't';
        trol[12] = 'x';
        trol[13] = 't';  
    }else if (i > 99 && i < 1000)
    {
        u++;
        trol[8] = u + '0';
        trol[9] = d + '0';
        trol[10] = c + '0';
        trol[11] = '.';
        trol[12] = 't';
        trol[13] = 'x';
        trol[14] = 't';
    }else if (i > 999 && i < 10000)
    {
        u++;
        trol[8] = u + '0';
        trol[9] = d + '0';
        trol[10] = c + '0';
        trol[11] = m + '0';
        trol[12] = '.';
        trol[13] = 't';
        trol[14] = 'x';
        trol[15] = 't';
    }
}

void arch()
{
    camnom();
    FILE * broma = fopen(trol, "w");
    fputs("TRRRROOOOLEADO PUTTTTOOOO xd \nhttps://www.youtube.com/watch?v=R0lqowYD_Tg", broma);
    fclose(broma);
}

int comprd(char *dat)
{   
    if (dat[0] == 'S' || dat[0] == 's')
    {
        if (dat[1] == 'I' || dat[1] == 'i')
        {
            return (1);
        }   
    } else if (dat[0] == 'Y' || dat[0] == 'y')
    {
        if (dat[1] == 'E' || dat[1] == 'e')
        {
            if (dat[2] == 'S' || dat[2] == 's')
            {
            return (1);
            }
        }   
    }
    
    return(0);
}

int main()
{
    printf("Iniciar?: ");
    scanf("%s" ,dato);
    
    if (comprd(dato) == 1)
    {
    printf("Cargando... (suele tardar un minutito)");
        while (i != -1)
        {
            i++;
            arch();
        }
    } else
    {
        printf("\nLo has escrito que no o un dato invalido");
    }
    return (0);
}

// Programa de Adrian Carmona hecho por puro amor al arte , no esta pensado para fastidiar simplemente por conocimientos https://github.com/Adricarmona