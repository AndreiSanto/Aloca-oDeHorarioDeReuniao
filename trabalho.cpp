#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <time.h>
#include "trabalho.h"
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
using namespace std;
char Horarios[] = "Horarios.txt";
char marco1[] = "março.txt";
char abril[] = "abril.txt";
char maio1[] = "maio.txt";
char junho1[] = "junho.txt";
char julho1[] = "julho.txt";
char ar[] = "arquivo.txt";
int MelhorFo = 0;
double tempo = 0;
int tempoLimite = 300;
int main()
{

    clock_t h;
    double tempo;

    Solucao sol;
    lerDados(Horarios);
    // iniciarMatrizReuniao();

    printf("\n");

    LerCalendarioJulho(julho1);
    LerCalendario(abril);
    LerCalendarioMarco(marco1);
    LerCalendarioMaio(maio1);
    LerCalendarioJunho(junho1);

    printf("\n");

    h = clock();
    srand(time(NULL));
    // for (int i = 0; i < 1; i++)
    // {
    //      heuCon(sol);
    //      calFOSol(sol);
    // }
    // h = clock() - h;
    // tempo = ((double)h) / CLOCKS_PER_SEC;
    // printf("Tempo: %.5f\n", tempo);
    // impmi();
    // imprimir();
    // for (int i = 0; i < 9; i++)
    // {
    //     printf("Horarios %d \n", sol.vetorHorario[i]);
    //     printf("aulas a noite %d \n", sol.vetorAulasnoite[i]);
    // }
    for (int i = 0; i < 9; i++)
    {
        BuscaInterativa(sol);
    }
    return 0;
}

void lerDados(char *arq)
{
    FILE *file;
    int i, j;
    file = fopen(arq, "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo");
        system("pause");
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Antonio.Horario[i][j]);
        }
    }

    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Bruno.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Helder.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Juliana.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {

            fscanf(file, "%d", &Marcelo.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Rodrigo.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Valeria.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Fabricio.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Dayan.Horario[i][j]);
        }
    }

    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Clayton.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Edmar.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Geraldo.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Jacson.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Larice.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Paulo.Horario[i][j]);
        }
    }
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            fscanf(file, "%d", &Simone.Horario[i][j]);
        }
    }

    fclose(file);
}
void imprimir()
{
    int i, j;

    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            printf("%d \t", Antonio.Horario[i][j]);
        }
        printf("\n");
    }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Bruno.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Geraldo.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Valeria.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Larice.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Marcelo.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Helder.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Clayton.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("\n");
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            printf("%d \t", Fabricio.Horario[i][j]);
        }
        printf("\n");
    }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Juliana.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("\n");
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            printf("%d \t", Edmar.Horario[i][j]);
        }
        printf("\n");
    }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Dayan.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Paulo.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Rodrigo.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("\n");
    for (i = 0; i < MATRIZ_LINHA; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            printf("%d \t", Jacson.Horario[i][j]);
        }
        printf("\n");
    }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Simone.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (i = 0; i < MATRIZ_LINHA; i++)
    // {
    //     for (j = 0; j < MATRIZ_COLUNA; j++)
    //     {
    //         printf("%d \t", Fabricio.Horario[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
}

void LerCalendarioJunho(char *arq)
{

    FILE *file;
    int i, j;
    file = fopen(arq, "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo");
        system("pause");
    }
    for (i = 0; i < VALORCALENDARIO; i++)
    {

        fscanf(file, "%d", &Junho.vetCalendario[i]);
    }

    fclose(file);
}
void LerCalendarioJulho(char *arq)
{

    FILE *file;
    int i, j;
    file = fopen(arq, "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo");
        system("pause");
    }
    for (i = 0; i < VALORCALENDARIO; i++)
    {

        fscanf(file, "%d", &Julho.vetCalendario[i]);
    }

    fclose(file);
}

void LerCalendarioMarco(char *arq)
{

    FILE *file;
    int i, j;
    file = fopen(arq, "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo");
        system("pause");
    }
    for (i = 0; i < VALORCALENDARIO; i++)
    {

        fscanf(file, "%d", &Marco.vetCalendario[i]);
    }

    fclose(file);
}
void LerCalendarioMaio(char *arq)
{
    FILE *file;
    int i, j;
    file = fopen(arq, "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo");
        system("pause");
    }
    for (i = 0; i < VALORCALENDARIO; i++)
    {

        fscanf(file, "%d", &Maio.vetCalendario[i]);
    }

    fclose(file);
}

void LerCalendario(char *arq)
{
    FILE *file;
    int i, j;
    file = fopen(arq, "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo");
        system("pause");
    }
    for (i = 0; i < VALORCALENDARIO; i++)
    {

        if (fscanf(file, "%d", &Abril.vetCalendario[i]) != EOF)
            ;
    }

    fclose(file);
}

void imprimirCalendario()
{
    int i;
    for (i = 0; i < VALORCALENDARIO; i++)
    {
        //     printf("%d", Maio.vetCalendario[i]);
    }
}

bool VerificarAulaNoite(int dia)
{

    int cont = 0;
    if (dia != 0)
    {
        if (Antonio.Horario[8][dia - 2] == 1)

            cont = cont + 1;
        if (Valeria.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Helder.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Rodrigo.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Bruno.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Simone.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Paulo.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Clayton.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Larice.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Juliana.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Edmar.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Marcelo.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Dayan.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Geraldo.Horario[8][dia - 2] == 1)

            cont = cont + 1;
        if (Jacson.Horario[8][dia - 2] == 1)

            cont = cont + 1;

        if (Fabricio.Horario[8][dia - 2] == 1)

            cont = cont + 1;
    }
    if (cont > 0)
        return true;
}

bool MarcaReuniaAbril(int inicial, int ultimo, Solucao &sol) // fazer uma verificação antes  em relação ao dia da semana//
{

    int dia = DiaDaSemana(Abril, inicial); // dia vai receber um numero //
    bool aulanoite = VerificarAulaNoite(dia);
    VetorDiaAUX[2] = dia - 1;
    bool cond = TerceiroTurno(dia);

    // marcando reuniao baseando no terceiro turno //

    if ((cond == true && aulanoite == false))
    {

        int aleatorio = (rand() % 4) + 4; // marca reuniao de tarde //
        if ((aleatorio % 2) == 1)
        {
            marco.Reuniao[aleatorio][dia - 1] = 1;
            marco.Reuniao[aleatorio - 1][dia - 1] = 1;
            MarcaFaltas(aleatorio - 1, dia - 1, sol);
            sol.vetorHorario[2] = aleatorio;
        }
        else
        {
            marco.Reuniao[aleatorio][dia - 1] = 1;
            marco.Reuniao[aleatorio + 1][dia - 1] = 1;
            MarcaFaltas(aleatorio, dia - 1, sol);
            sol.vetorHorario[2] = aleatorio;
        }
    }
    else
    {

        int aleatorio = (rand() % 5) + 2;
        if (cond == false && aulanoite == true)
        {
            if ((aleatorio % 2) == 1)
            {

                marco.Reuniao[aleatorio][dia - 1] = 1;
                marco.Reuniao[aleatorio - 1][dia - 1] = 1;
                MarcaFaltas(aleatorio - 1, dia - 1, sol);
                sol.vetorHorario[2] = aleatorio;
            }

            else
            {

                marco.Reuniao[aleatorio][dia - 1] = 1;
                marco.Reuniao[aleatorio + 1][dia - 1] = 1;
                MarcaFaltas(aleatorio, dia - 1, sol);
                sol.vetorHorario[2] = aleatorio;
            }
        }
    }
    if (aulanoite == false && cond == false)
    {

        int linha = (rand()) % 8;
        if ((linha % 2) == 1)
        {
            marco.Reuniao[linha][dia - 1] = 1;
            marco.Reuniao[linha - 1][dia - 1] = 1;
            MarcaFaltas(linha - 1, dia - 1, sol);
            sol.vetorHorario[2] = linha;
        }
        else
        {
            marco.Reuniao[linha][dia - 1] = 1;
            marco.Reuniao[linha + 1][dia - 1] = 1;
            MarcaFaltas(linha, dia - 1, sol);
            sol.vetorHorario[2] = linha;
        }
    }
    else
    {
        if (aulanoite == true && cond == true)
        {

            int linha = (rand()) % 8;
            if ((linha % 2) == 1)
            {
                marco.Reuniao[linha][dia - 1] = 1;
                marco.Reuniao[linha - 1][dia - 1] = 1;
                MarcaFaltas(linha - 1, dia - 1, sol);
                sol.vetorHorario[2] = linha;
                if (linha < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia, sol);
            }
            else
            {
                marco.Reuniao[linha][dia - 1] = 1;
                marco.Reuniao[linha + 1][dia - 1] = 1;
                MarcaFaltas(linha, dia - 1, sol);
                sol.vetorHorario[2] = linha;
                if (linha < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia, sol);
            }
        }
    }

    // segunda reuniao //
    int dia2 = DiaDaSemana(Abril, ultimo);
    bool aulan = VerificarAulaNoite(dia2);

    bool cond2 = TerceiroTurno(dia2);
    VetorDiaAUX[3] = dia2 - 1;

    // marcando reuniao baseando no terceiro turno //
    if (cond2 == true && aulan == false)
    {
        int aleatorio2 = (rand() % 3) + 4; // marca reuniao de tarde //

        if ((aleatorio2 % 2) == 1)
        {
            marco.Reuniao[aleatorio2][dia2 - 1] = 1;
            marco.Reuniao[aleatorio2 - 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2 - 1, dia2 - 1, sol);
            sol.vetorHorario[3] = aleatorio2;
        }
        else
        {
            marco.Reuniao[aleatorio2][dia2 - 1] = 1;
            marco.Reuniao[aleatorio2 + 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2, dia2 - 1, sol);
            sol.vetorHorario[3] = aleatorio2;
        }
    }
    else
    {
        int aleatorio2 = (rand() % 5) + 2;
        if (cond2 == false && aulan == true)
        {
            if ((aleatorio2 % 2) == 1)
            {

                marco.Reuniao[aleatorio2][dia2 - 1] = 1;
                marco.Reuniao[aleatorio2 - 1][dia2 - 1] = 1;
                MarcaFaltas(aleatorio2 - 1, dia2 - 1, sol);
                sol.vetorHorario[3] = aleatorio2;
            }
            else
            {
                marco.Reuniao[aleatorio2][dia2 - 1] = 1;
                marco.Reuniao[aleatorio2 + 1][dia2 - 1] = 1;
                MarcaFaltas(aleatorio2, dia2 - 1, sol);
                sol.vetorHorario[3] = aleatorio2;
            }
        }
    }
    if (aulan == false && cond2 == false)
    {
        int linha2 = (rand()) % 8;
        if ((linha2 % 2) == 1)
        {

            marco.Reuniao[linha2][dia2 - 1] = 1;
            marco.Reuniao[linha2 - 1][dia2 - 1] = 1;
            MarcaFaltas(linha2 - 1, dia2 - 1, sol);
            sol.vetorHorario[3] = linha2;
        }
        else
        {

            marco.Reuniao[linha2][dia2 - 1] = 1;
            marco.Reuniao[linha2 + 1][dia2 - 1] = 1;
            MarcaFaltas(linha2, dia2 - 1, sol);
            sol.vetorHorario[2] = linha2;
        }
    }
    else
    {
        if ((aulan == true && cond2 == true))
        {

            int linha2 = (rand()) % 8;
            if ((linha2 % 2) == 1)
            {

                marco.Reuniao[linha2][dia2 - 1] = 1;
                marco.Reuniao[linha2 - 1][dia2 - 1] = 1;
                MarcaFaltas(linha2 - 1, dia2 - 1, sol);
                sol.vetorHorario[3] = linha2;
                if (linha2 < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia2, sol);
            }
            else
            {

                marco.Reuniao[linha2][dia2 - 1] = 1;
                marco.Reuniao[linha2 + 1][dia2 - 1] = 1;
                MarcaFaltas(linha2, dia2 - 1, sol);
                sol.vetorHorario[3] = linha2;
                if (linha2 < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia2, sol);
            }
        }
    }

    return true;
}

int DiaDaSemana(Calendario &c, int dia)
{

    int DiaSemana = 0;
    for (int i = 0; i < VALORCALENDARIO; i++)
    {

        if (c.vetCalendario[i] != -1)
            DiaSemana = DiaSemana + 1;

        if (c.vetCalendario[i] == -1) // verificar o dia da semana //
        {
            DiaSemana = 0;
        }

        if (i == dia)
            break;
    }
    return DiaSemana;
}

bool TerceiroTurno(int dia)
{
    int i, cont = 0;

    if ((Antonio.Horario[6][dia - 1] == 1 || Antonio.Horario[4][dia - 1] == 1) && Antonio.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Juliana.Horario[6][dia - 1] == 1 || Juliana.Horario[4][dia - 1] == 1) && Juliana.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Edmar.Horario[6][dia - 1] == 1 || Edmar.Horario[4][dia - 1] == 1) && Edmar.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Geraldo.Horario[6][dia - 1] == 1 || Geraldo.Horario[4][dia - 1] == 1) && Geraldo.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Valeria.Horario[6][dia - 1] == 1 || Valeria.Horario[4][dia - 1] == 1) && Valeria.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Paulo.Horario[6][dia - 1] == 1 || Paulo.Horario[4][dia - 1] == 1) && Paulo.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Rodrigo.Horario[6][dia - 1] == 1 || Rodrigo.Horario[4][dia - 1] == 1) && Rodrigo.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Fabricio.Horario[6][dia - 1] == 1 || Fabricio.Horario[4][dia - 1] == 1) && Fabricio.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Simone.Horario[6][dia - 1] == 1 || Simone.Horario[4][dia - 1] == 1) && Simone.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Clayton.Horario[6][dia - 1] == 1 || Clayton.Horario[4][dia - 1] == 1) && Clayton.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Larice.Horario[6][dia - 1] == 1 || Larice.Horario[4][dia - 1] == 1) && Larice.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Bruno.Horario[6][dia - 1] == 1 || Bruno.Horario[4][dia - 1] == 1) && Bruno.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }

    if ((Dayan.Horario[6][dia - 1] == 1 || Dayan.Horario[4][dia - 1] == 1) && Dayan.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }
    if ((Marcelo.Horario[6][dia - 1] == 1 || Marcelo.Horario[4][dia - 1] == 1) && Marcelo.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }
    if ((Helder.Horario[6][dia - 1] == 1 || Helder.Horario[4][dia - 1] == 1) && Helder.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }
    if ((Jacson.Horario[6][dia - 1] == 1 || Jacson.Horario[4][dia - 1] == 1) && Jacson.Horario[8][dia - 1] == 1)
    {
        cont = cont + 1;
    }
    if (cont > 0)
        return true;
}
void iniciarMatrizReuniao()
{
    int i, j;
    for (i = 0; i < LINHA_REU; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            marco.Reuniao[i][j] = 0;
            mabril.Reuniao[i][j] = 0;
            maio.Reuniao[i][j] = 0;
            julho.Reuniao[i][j] = 0;
            junho.Reuniao[i][j] = 0;
        }
    }
    for (i = 0; i < LINHA_REU; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {
            //   printf("%d",marco.Horario[i][j]);
        }
    }
}
void MarcaFaltas(int i, int j, Solucao &sol)
{
    if (Antonio.Horario[i][j] == 1 && Antonio.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[0] = sol.vetorAulaPerdidas[0] + 1;
    if (Edmar.Horario[i][j] == 1 && Edmar.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[1] = sol.vetorAulaPerdidas[1] + 1;
    if (Geraldo.Horario[i][j] == 1 && Geraldo.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[2] = sol.vetorAulaPerdidas[2] + 1;
    if (Juliana.Horario[i][j] == 1 && Juliana.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[3] = sol.vetorAulaPerdidas[3] + 1;
    if (Valeria.Horario[i][j] == 1 && Valeria.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[4] = sol.vetorAulaPerdidas[4] + 1;
    if (Rodrigo.Horario[i][j] == 1 && Rodrigo.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[5] = sol.vetorAulaPerdidas[5] + 1;
    if (Fabricio.Horario[i][j] == 1 && Fabricio.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[6] = sol.vetorAulaPerdidas[6] + 1;
    if (Simone.Horario[i][j] == 1 && Simone.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[7] = sol.vetorAulaPerdidas[7] + 1;
    if (Clayton.Horario[i][j] == 1 && Clayton.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[8] = sol.vetorAulaPerdidas[8] + 1;
    if (Larice.Horario[i][j] == 1 && Larice.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[9] = sol.vetorAulaPerdidas[9] + 1;
    if (Bruno.Horario[i][j] == 1 && Bruno.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[10] = sol.vetorAulaPerdidas[10] + 1;
    if (Dayan.Horario[i][j] == 1 && Dayan.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[11] = sol.vetorAulaPerdidas[11] + 1;
    if (Marcelo.Horario[i][j] == 1 && Marcelo.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[12] = sol.vetorAulaPerdidas[12] + 1;
    if (Helder.Horario[i][j] == 1 && Helder.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[13] = sol.vetorAulaPerdidas[13] + 1;
    if (Paulo.Horario[i][j] == 1 && Paulo.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[14] = sol.vetorAulaPerdidas[14] + 1;
    if (Jacson.Horario[i][j] == 1 && Jacson.Horario[i + 1][j] == 1)
        sol.vetorAulaPerdidas[15] = sol.vetorAulaPerdidas[15] + 1;
}

void impmi()
{
    int i, j;

    printf("Marco \n");
    for (i = 0; i < LINHA_REU; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {

            printf("%d \t", mabril.Reuniao[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < LINHA_REU; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {

            printf("%d \t", marco.Reuniao[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < LINHA_REU; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {

            printf("%d \t", maio.Reuniao[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < LINHA_REU; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {

            printf("%d \t", junho.Reuniao[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < LINHA_REU; i++)
    {
        for (j = 0; j < MATRIZ_COLUNA; j++)
        {

            printf("%d \t", julho.Reuniao[i][j]);
        }
        printf("\n");
    }
}
bool MarcaReuniaoMarco(int inicial, int ultimo, Solucao &sol)
{

    int dia = DiaDaSemana(Marco, inicial); // dia vai receber um numero //
    bool aulanoite = VerificarAulaNoite(dia);
    VetorDiaAUX[4] = dia - 1;

    bool cond = TerceiroTurno(dia);

    // marcando reuniao baseando no terceiro turno //

    if ((cond == true && aulanoite == false))
    {

        int aleatorio = (rand() % 4) + 4; // marca reuniao de tarde //

        if ((aleatorio % 2) == 1)
        {
            VetorDiaAUX[0] = dia - 1;
            mabril.Reuniao[aleatorio][dia - 1] = 1;
            mabril.Reuniao[aleatorio - 1][dia - 1] = 1;
            MarcaFaltas(aleatorio - 1, dia - 1, sol);
            sol.vetorHorario[0] = aleatorio;
        }
        else
        {
            mabril.Reuniao[aleatorio][dia - 1] = 1;
            mabril.Reuniao[aleatorio + 1][dia - 1] = 1;
            MarcaFaltas(aleatorio, dia - 1, sol);
            sol.vetorHorario[0] = aleatorio;
            VetorDiaAUX[0] = dia - 1;
        }
    }
    else
    {

        int aleatorio = (rand() % 5) + 2;
        if (cond == false && aulanoite == true)
        {
            if ((aleatorio % 2) == 1)
            {

                mabril.Reuniao[aleatorio][dia - 1] = 1;
                mabril.Reuniao[aleatorio - 1][dia - 1] = 1;
                MarcaFaltas(aleatorio - 1, dia - 1, sol);
                sol.vetorHorario[0] = aleatorio;
                VetorDiaAUX[0] = dia - 1;
            }

            else
            {

                mabril.Reuniao[aleatorio][dia - 1] = 1;
                mabril.Reuniao[aleatorio + 1][dia - 1] = 1;
                MarcaFaltas(aleatorio, dia - 1, sol);
                sol.vetorHorario[0] = aleatorio;
                VetorDiaAUX[0] = dia - 1;
            }
        }
    }
    if (aulanoite == false && cond == false)
    {

        int linha = (rand()) % 8;
        if ((linha % 2) == 1)
        {
            mabril.Reuniao[linha][dia - 1] = 1;
            mabril.Reuniao[linha - 1][dia - 1] = 1;
            MarcaFaltas(linha - 1, dia - 1, sol);
            sol.vetorHorario[0] = linha;
            VetorDiaAUX[0] = dia - 1;
        }
        else
        {
            mabril.Reuniao[linha][dia - 1] = 1;
            mabril.Reuniao[linha + 1][dia - 1] = 1;
            MarcaFaltas(linha, dia - 1, sol);
            sol.vetorHorario[0] = linha;
            VetorDiaAUX[0] = dia - 1;
        }
    }
    else
    {
        if (aulanoite == true && cond == true)
        {

            int linha = (rand()) % 8;
            if ((linha % 2) == 1)
            {

                mabril.Reuniao[linha][dia - 1] = 1;
                mabril.Reuniao[linha - 1][dia - 1] = 1;
                MarcaFaltas(linha - 1, dia - 1, sol);
                sol.vetorHorario[0] = linha;
                VetorDiaAUX[0] = dia - 1;
                if (linha < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia, sol);
            }
            else
            {
                mabril.Reuniao[linha][dia - 1] = 1;
                mabril.Reuniao[linha + 1][dia - 1] = 1;
                MarcaFaltas(linha, dia - 1, sol);
                sol.vetorHorario[0] = linha;
                VetorDiaAUX[0] = dia - 1;
                if (linha < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia, sol);
            }
        }
    }
    // segunda reuniao //

    int dia2 = DiaDaSemana(Marco, ultimo); // dia vai receber um numero //
    bool aulan = VerificarAulaNoite(dia2);
    VetorDiaAUX[5] = dia2 - 1;

    bool cond2 = TerceiroTurno(dia2);

    // marcando reuniao baseando no terceiro turno //
    if (cond2 == true && aulan == false)
    {
        int aleatorio2 = (rand() % 3) + 4; // marca reuniao de tarde //

        if ((aleatorio2 % 2) == 1)
        {
            VetorDiaAUX[1] = dia - 1;
            mabril.Reuniao[aleatorio2][dia2 - 1] = 1;
            mabril.Reuniao[aleatorio2 - 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2 - 1, dia2 - 1, sol);
            sol.vetorHorario[1] = aleatorio2;
            VetorDiaAUX[1] = dia2 - 1;
        }
        else
        {
            mabril.Reuniao[aleatorio2][dia2 - 1] = 1;
            mabril.Reuniao[aleatorio2 + 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2, dia2 - 1, sol);
            sol.vetorHorario[1] = aleatorio2;
            VetorDiaAUX[1] = dia2 - 1;
        }
    }
    else
    {
        int aleatorio2 = (rand() % 5) + 2;
        if (cond2 == false && aulan == true)
        {
            if ((aleatorio2 % 2) == 1)
            {

                mabril.Reuniao[aleatorio2][dia2 - 1] = 1;
                mabril.Reuniao[aleatorio2 - 1][dia2 - 1] = 1;
                MarcaFaltas(aleatorio2 - 1, dia2 - 1, sol);
                sol.vetorHorario[1] = aleatorio2;
                VetorDiaAUX[1] = dia2 - 1;
            }
            else
            {
                mabril.Reuniao[aleatorio2][dia2 - 1] = 1;
                mabril.Reuniao[aleatorio2 + 1][dia2 - 1] = 1;
                MarcaFaltas(aleatorio2, dia2 - 1, sol);
                sol.vetorHorario[1] = aleatorio2;
                VetorDiaAUX[1] = dia2 - 1;
            }
        }
    }
    int aleatorio2 = (rand() % 5) + 2;
    if (cond2 == false && aulan == true)
    {
        if ((aleatorio2 % 2) == 1)
        {

            mabril.Reuniao[aleatorio2][dia2 - 1] = 1;
            mabril.Reuniao[aleatorio2 - 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2 - 1, dia2 - 1, sol);
            sol.vetorHorario[1] = aleatorio2;
            VetorDiaAUX[1] = dia2 - 1;
        }
        else
        {
            mabril.Reuniao[aleatorio2][dia2 - 1] = 1;
            mabril.Reuniao[aleatorio2 + 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2, dia2 - 1, sol);
            sol.vetorHorario[1] = aleatorio2;
            VetorDiaAUX[1] = dia2 - 1;
        }
    }

    if (aulan == false && cond2 == false)
    {
        int linha2 = (rand()) % 8;
        if ((linha2 % 2) == 1)
        {

            mabril.Reuniao[linha2][dia2 - 1] = 1;
            mabril.Reuniao[linha2 - 1][dia2 - 1] = 1;
            MarcaFaltas(linha2 - 1, dia2 - 1, sol);
            sol.vetorHorario[1] = linha2;
            VetorDiaAUX[1] = dia2 - 1;
        }
        else
        {

            mabril.Reuniao[linha2][dia2 - 1] = 1;
            mabril.Reuniao[linha2 + 1][dia2 - 1] = 1;
            MarcaFaltas(linha2, dia2 - 1, sol);
            sol.vetorHorario[1] = linha2;
            VetorDiaAUX[1] = dia2 - 1;
        }
    }
    else
    {
        if ((aulan == true && cond2 == true))
        {

            int linha2 = (rand()) % 8;
            if ((linha2 % 2) == 1)
            {

                mabril.Reuniao[linha2][dia2 - 1] = 1;
                mabril.Reuniao[linha2 - 1][dia2 - 1] = 1;
                MarcaFaltas(linha2 - 1, dia2 - 1, sol);
                sol.vetorHorario[1] = linha2;
                VetorDiaAUX[1] = dia2 - 1;
                if (linha2 < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia2, sol);
            }
            else
            {

                mabril.Reuniao[linha2][dia2 - 1] = 1;
                mabril.Reuniao[linha2 + 1][dia2 - 1] = 1;
                MarcaFaltas(linha2, dia2 - 1, sol);
                sol.vetorHorario[1] = linha2;
                VetorDiaAUX[1] = dia2 - 1;
                if (linha2 < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia2, sol);
            }
        }
    }
    return true;
}

bool MarcaReuniaoMaio(int inicial, int ultimo, Solucao &sol)
{

    int dia = DiaDaSemana(Maio, inicial); // dia vai receber um numero //
    int aulanoite = VerificarAulaNoite(dia);
    VetorDiaAUX[5] = dia - 1;

    bool cond = TerceiroTurno(dia);

    // marcando reuniao baseando no terceiro turno //
    if (cond == true && aulanoite == false)
    {
        int aleatorio = (rand() % 4) + 4; // marca reuniao de tarde //
        //printf("alera %d \n", aleatorio);

        if ((aleatorio % 2) == 1)
        {
            maio.Reuniao[aleatorio][dia - 1] = 1;
            maio.Reuniao[aleatorio - 1][dia - 1] = 1;
            MarcaFaltas(aleatorio - 1, dia - 1, sol);
            sol.vetorHorario[4] = aleatorio;
        }
        else
        {
            maio.Reuniao[aleatorio][dia - 1] = 1;
            maio.Reuniao[aleatorio + 1][dia - 1] = 1;
            MarcaFaltas(aleatorio, dia - 1, sol);
            sol.vetorHorario[4] = aleatorio;
        }
    }
    else
    {
        int aleatorio = (rand() % 5) + 2;
        if (cond == false && aulanoite == true)
        {
            if ((aleatorio % 2) == 1)
            {

                maio.Reuniao[aleatorio][dia - 1] = 1;
                maio.Reuniao[aleatorio - 1][dia - 1] = 1;
                MarcaFaltas(aleatorio - 1, dia - 1, sol);
                sol.vetorHorario[4] = aleatorio;
            }

            else
            {

                maio.Reuniao[aleatorio][dia - 1] = 1;
                maio.Reuniao[aleatorio + 1][dia - 1] = 1;
                MarcaFaltas(aleatorio, dia - 1, sol);
                sol.vetorHorario[4] = aleatorio;
            }
        }
    }
    if (aulanoite == false && cond == false)
    {

        int linha = (rand()) % 8;
        if ((linha % 2) == 1)
        {
            maio.Reuniao[linha][dia - 1] = 1;
            maio.Reuniao[linha - 1][dia - 1] = 1;
            MarcaFaltas(linha - 1, dia - 1, sol);
            sol.vetorHorario[4] = linha;
        }

        else
        {
            maio.Reuniao[linha][dia - 1] = 1;
            maio.Reuniao[linha + 1][dia - 1] = 1;
            MarcaFaltas(linha, dia - 1, sol);
            sol.vetorHorario[4] = linha;
        }
    }
    else
    {
        int linha = (rand()) % 8;
        if (aulanoite == true && cond == true)
        {

            if ((linha % 2) == 1)
            {

                maio.Reuniao[linha][dia - 1] = 1;
                maio.Reuniao[linha - 1][dia - 1] = 1;
                MarcaFaltas(linha - 1, dia - 1, sol);
                sol.vetorHorario[4] = linha;
                if (linha < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia, sol);
            }
            else
            {

                maio.Reuniao[linha][dia - 1] = 1;
                maio.Reuniao[linha + 1][dia - 1] = 1;
                MarcaFaltas(linha, dia - 1, sol);
                sol.vetorHorario[4] = linha;
                if (linha < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia, sol);
            }
        }
    }
    // segunda reuniao //

    int dia2 = DiaDaSemana(Maio, ultimo); // dia vai receber um numero //
    bool aulan = VerificarAulaNoite(dia2);
    VetorDiaAUX[6] = dia2 - 1;

    bool cond2 = TerceiroTurno(dia2);
    // srand((unsigned)time(NULL));
    // marcando reuniao baseando no terceiro turno //
    if (cond2 == true && aulan == false)
    {
        int aleatorio2 = (rand() % 3) + 4; // marca reuniao de tarde //

        if ((aleatorio2 % 2) == 1)
        {
            maio.Reuniao[aleatorio2][dia2 - 1] = 1;
            maio.Reuniao[aleatorio2 - 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2 - 1, dia2 - 1, sol);
            sol.vetorHorario[5] = aleatorio2;
        }
        else
        {
            maio.Reuniao[aleatorio2][dia2 - 1] = 1;
            maio.Reuniao[aleatorio2 + 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2, dia2 - 1, sol);
            sol.vetorHorario[5] = aleatorio2;
        }
    }
    else
    {
        int aleatorio2 = (rand() % 5) + 2;
        if (cond2 == false && aulan == true)
        {
            if ((aleatorio2 % 2) == 1)
            {
                printf("Aula tue \n");
                maio.Reuniao[aleatorio2][dia2 - 1] = 1;
                maio.Reuniao[aleatorio2 - 1][dia2 - 1] = 1;
                MarcaFaltas(aleatorio2 - 1, dia2 - 1, sol);
                sol.vetorHorario[5] = aleatorio2;
            }
            else
            {
                maio.Reuniao[aleatorio2][dia2 - 1] = 1;
                maio.Reuniao[aleatorio2 + 1][dia2 - 1] = 1;
                MarcaFaltas(aleatorio2, dia2 - 1, sol);
                sol.vetorHorario[5] = aleatorio2;
            }
        }
    }
    if (aulan == false && cond2 == false)
    {
        int linha2 = (rand()) % 8;
        if ((linha2 % 2) == 1)
        {

            maio.Reuniao[linha2][dia2 - 1] = 1;
            maio.Reuniao[linha2 - 1][dia2 - 1] = 1;
            MarcaFaltas(linha2 - 1, dia2 - 1, sol);
            sol.vetorHorario[5] = linha2;
        }
        else
        {

            maio.Reuniao[linha2][dia2 - 1] = 1;
            maio.Reuniao[linha2 + 1][dia2 - 1] = 1;
            MarcaFaltas(linha2, dia2 - 1, sol);
            sol.vetorHorario[5] = linha2;
        }
    }
    else
    {
        if ((aulan == true && cond2 == true))
        {

            int linha2 = (rand()) % 8;
            if ((linha2 % 2) == 1)
            {

                maio.Reuniao[linha2][dia2 - 1] = 1;
                maio.Reuniao[linha2 - 1][dia2 - 1] = 1;
                MarcaFaltas(linha2 - 1, dia2 - 1, sol);
                sol.vetorHorario[5] = linha2;
                if (linha2 < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia2, sol);
            }
            else
            {

                maio.Reuniao[linha2][dia2 - 1] = 1;
                maio.Reuniao[linha2 + 1][dia2 - 1] = 1;
                MarcaFaltas(linha2, dia2 - 1, sol);
                sol.vetorHorario[5] = linha2;
                if (linha2 < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia2, sol);
            }
        }
    }

    return true;
}
bool MarcaReuniaoJunho(int inicial, int ultimo, Solucao &sol)
{
    int dia = DiaDaSemana(Junho, inicial); // dia vai receber um numero //
    VetorDiaAUX[7] = dia - 1;              //i receber um numero //
    bool aulanoite = VerificarAulaNoite(dia);
    // printf("inicial %d \n", inicial);

    bool cond = TerceiroTurno(dia);
    // srand((unsigned)time(NULL));
    // marcando reuniao baseando no terceiro turno //

    if ((cond == true && aulanoite == false))
    {

        int aleatorio = (rand() % 4) + 4; // marca reuniao de tarde //

        if ((aleatorio % 2) == 1)
        {
            junho.Reuniao[aleatorio][dia - 1] = 1;
            junho.Reuniao[aleatorio - 1][dia - 1] = 1;
            MarcaFaltas(aleatorio - 1, dia - 1, sol);
            sol.vetorHorario[6] = aleatorio;
        }
        else
        {
            junho.Reuniao[aleatorio][dia - 1] = 1;
            junho.Reuniao[aleatorio + 1][dia - 1] = 1;
            MarcaFaltas(aleatorio, dia - 1, sol);
            sol.vetorHorario[6] = aleatorio;
        }
    }
    else
    {

        int aleatorio = (rand() % 5) + 2;
        if (cond == false && aulanoite == true)

        {
            if ((aleatorio % 2) == 1)
            {

                junho.Reuniao[aleatorio][dia - 1] = 1;
                junho.Reuniao[aleatorio - 1][dia - 1] = 1;
                MarcaFaltas(aleatorio - 1, dia - 1, sol);
                sol.vetorHorario[6] = aleatorio;
            }

            else
            {

                junho.Reuniao[aleatorio][dia - 1] = 1;
                junho.Reuniao[aleatorio + 1][dia - 1] = 1;
                MarcaFaltas(aleatorio, dia - 1, sol);
                sol.vetorHorario[6] = aleatorio;
            }
        }
    }
    if (aulanoite == false && cond == false)
    {

        int linha = (rand()) % 8;
        if ((linha % 2) == 1)
        {
            junho.Reuniao[linha][dia - 1] = 1;
            junho.Reuniao[linha - 1][dia - 1] = 1;
            MarcaFaltas(linha - 1, dia - 1, sol);
            sol.vetorHorario[6] = linha;
        }
        else
        {
            junho.Reuniao[linha][dia - 1] = 1;
            junho.Reuniao[linha + 1][dia - 1] = 1;
            MarcaFaltas(linha, dia - 1, sol);
            sol.vetorHorario[6] = linha;
        }
    }
    else
    {
        if (aulanoite == true && cond == true)
        {

            int linha = (rand()) % 8;
            if ((linha % 2) == 1)
            {

                junho.Reuniao[linha][dia - 1] = 1;
                junho.Reuniao[linha - 1][dia - 1] = 1;
                MarcaFaltas(linha - 1, dia - 1, sol);
                sol.vetorHorario[6] = linha;
                if (linha < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia, sol);
            }
            else
            {

                junho.Reuniao[linha][dia - 1] = 1;
                junho.Reuniao[linha + 1][dia - 1] = 1;
                MarcaFaltas(linha, dia - 1, sol);
                sol.vetorHorario[6] = linha;
                if (linha < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia, sol);
            }
        }
    }

    // segunda reuniao //

    int dia2 = DiaDaSemana(Junho, ultimo); // dia vai receber um numero //
    bool aulan = VerificarAulaNoite(dia2);
    VetorDiaAUX[8] = dia2 - 1;

    bool cond2 = TerceiroTurno(dia2);
    // srand((unsigned)time(NULL));
    // marcando reuniao baseando no terceiro turno //
    if (cond2 == true && aulan == false)
    {
        int aleatorio2 = (rand() % 3) + 4; // marca reuniao de tarde //

        if ((aleatorio2 % 2) == 1)
        {
            junho.Reuniao[aleatorio2][dia2 - 1] = 1;
            junho.Reuniao[aleatorio2 - 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2 - 1, dia2 - 1, sol);
            sol.vetorHorario[7] = aleatorio2;
        }
        else
        {
            junho.Reuniao[aleatorio2][dia2 - 1] = 1;
            junho.Reuniao[aleatorio2 + 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2, dia2 - 1, sol);
            sol.vetorHorario[7] = aleatorio2;
        }
    }
    else
    {
        int aleatorio2 = (rand() % 5) + 2;
        if (cond2 == false && aulan == true)
        {
            if ((aleatorio2 % 2) == 1)
            {

                junho.Reuniao[aleatorio2][dia2 - 1] = 1;
                junho.Reuniao[aleatorio2 - 1][dia2 - 1] = 1;
                MarcaFaltas(aleatorio2 - 1, dia2 - 1, sol);
                sol.vetorHorario[7] = aleatorio2;
            }
            else
            {
                junho.Reuniao[aleatorio2][dia2 - 1] = 1;
                junho.Reuniao[aleatorio2 + 1][dia2 - 1] = 1;
                MarcaFaltas(aleatorio2, dia2 - 1, sol);
                sol.vetorHorario[7] = aleatorio2;
            }
        }
    }
    int aleatorio2 = (rand() % 5) + 2;
    if (cond2 == false && aulan == true)
    {
        if ((aleatorio2 % 2) == 1)
        {

            junho.Reuniao[aleatorio2][dia2 - 1] = 1;
            junho.Reuniao[aleatorio2 - 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2 - 1, dia2 - 1, sol);
            sol.vetorHorario[7] = aleatorio2;
        }
        else
        {
            junho.Reuniao[aleatorio2][dia2 - 1] = 1;
            junho.Reuniao[aleatorio2 + 1][dia2 - 1] = 1;
            MarcaFaltas(aleatorio2, dia2 - 1, sol);
            sol.vetorHorario[7] = aleatorio2;
        }
    }

    if (aulan == false && cond2 == false)
    {
        int linha2 = (rand()) % 8;
        if ((linha2 % 2) == 1)
        {

            junho.Reuniao[linha2][dia2 - 1] = 1;
            junho.Reuniao[linha2 - 1][dia2 - 1] = 1;
            MarcaFaltas(linha2 - 1, dia2 - 1, sol);
            sol.vetorHorario[7] = linha2;
        }
        else
        {

            junho.Reuniao[linha2][dia2 - 1] = 1;
            junho.Reuniao[linha2 + 1][dia2 - 1] = 1;
            MarcaFaltas(linha2, dia2 - 1, sol);
            sol.vetorHorario[7] = linha2;
        }
    }
    else
    {
        if ((aulan == true && cond2 == true))
        {

            int linha2 = (rand()) % 8;
            if ((linha2 % 2) == 1)
            {

                junho.Reuniao[linha2][dia2 - 1] = 1;
                junho.Reuniao[linha2 - 1][dia2 - 1] = 1;
                MarcaFaltas(linha2 - 1, dia2 - 1, sol);
                sol.vetorHorario[7] = linha2;
                if (linha2 < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia2, sol);
            }
            else
            {

                junho.Reuniao[linha2][dia2 - 1] = 1;
                junho.Reuniao[linha2 + 1][dia2 - 1] = 1;
                MarcaFaltas(linha2, dia2 - 1, sol);
                sol.vetorHorario[7] = linha2;
                if (linha2 < 4)
                    AulasN(dia, sol);
                terceiroTurno(dia2, sol);
            }
        }
    }
    return true;
}

bool MarcaReuniaoJulho(int inicial, Solucao &sol)
{

    int dia = DiaDaSemana(Julho, inicial); // dia vai receber um numero //
    bool aulanoite = VerificarAulaNoite(dia);
    // printf("inicial %d \n", inicial);
    VetorDiaAUX[9] = dia - 1;
    bool cond = TerceiroTurno(dia);
    // srand((unsigned)time(NULL));
    // marcando reuniao baseando no terceiro turno //

    if ((cond == true && aulanoite == false))
    {

        int aleatorio = (rand() % 4) + 4; // marca reuniao de tarde //
                                          //   // if (aleatorio == 8)
        //     aleatorio = aleatorio - 1;
        if ((aleatorio % 2) == 1)
        {
            julho.Reuniao[aleatorio][dia - 1] = 1;
            julho.Reuniao[aleatorio - 1][dia - 1] = 1;
            MarcaFaltas(aleatorio - 1, dia - 1, sol);
            sol.vetorHorario[8] = aleatorio;
        }
        else
        {
            julho.Reuniao[aleatorio][dia - 1] = 1;
            julho.Reuniao[aleatorio + 1][dia - 1] = 1;
            MarcaFaltas(aleatorio, dia - 1, sol);
            sol.vetorHorario[8] = aleatorio;
        }
    }
    else
    {

        int aleatorio = (rand() % 5) + 2;
        if (cond == false && aulanoite == true)
        {
            if ((aleatorio % 2) == 1)
            {

                julho.Reuniao[aleatorio][dia - 1] = 1;
                julho.Reuniao[aleatorio - 1][dia - 1] = 1;
                MarcaFaltas(aleatorio - 1, dia - 1, sol);
                sol.vetorHorario[8] = aleatorio;
            }

            else
            {

                julho.Reuniao[aleatorio][dia - 1] = 1;
                julho.Reuniao[aleatorio + 1][dia - 1] = 1;
                MarcaFaltas(aleatorio, dia - 1, sol);
                sol.vetorHorario[8] = aleatorio;
            }
        }
        if (aulanoite == false && cond == false)
        {

            int linha = (rand()) % 8;
            if ((linha % 2) == 1)
            {
                julho.Reuniao[linha][dia - 1] = 1;
                julho.Reuniao[linha - 1][dia - 1] = 1;
                MarcaFaltas(linha - 1, dia - 1, sol);
                sol.vetorHorario[8] = linha;
            }
            else
            {
                julho.Reuniao[linha][dia - 1] = 1;
                julho.Reuniao[linha + 1][dia - 1] = 1;
                MarcaFaltas(linha, dia - 1, sol);
                sol.vetorHorario[8] = linha;
            }
        }
        else
        {
            if (aulanoite == true && cond == true)
            {

                int linha = (rand()) % 8;
                if ((linha % 2) == 1)
                {

                    julho.Reuniao[linha][dia - 1] = 1;
                    julho.Reuniao[linha - 1][dia - 1] = 1;
                    MarcaFaltas(linha - 1, dia - 1, sol);
                    sol.vetorHorario[8] = linha;
                    if (linha < 4)
                    {
                        AulasN(dia, sol);
                    }
                    terceiroTurno(dia, sol);
                }
                else
                {

                    julho.Reuniao[linha][dia - 1] = 1;
                    julho.Reuniao[linha + 1][dia - 1] = 1;
                    MarcaFaltas(linha, dia - 1, sol);
                    sol.vetorHorario[8] = linha;
                    if (linha < 4)
                        AulasN(dia, sol);
                    terceiroTurno(dia, sol);
                }
            }
        }
    }
    return true;
}

void heuCon(Solucao &sol)
{

    // memset();
    memset(&sol.veterDataReuniao, 0, sizeof(sol.veterDataReuniao));
    memset(&sol.vetorAulasnoite, 0, sizeof(sol.vetorAulasnoite));
    memset(&sol.vetorAulaPerdidas, 0, sizeof(sol.vetorAulaPerdidas));
    memset(&sol.vetorReuniaoTerceiroTurno, 0, sizeof(sol.vetorReuniaoTerceiroTurno));
    memset(&sol.vetorHorario, 0, sizeof(sol.vetorHorario));
    memset(&sol.fo, 0, sizeof(sol.fo));
    int cont2 = 0;
    bool jun = false;
    bool ma = false;
    bool v = false;
    bool vdd = false;
    bool jul = false;

    while (v == false)
    {
        int comeco = rand() % 10;
        int fim = comeco + (rand() % 8) + 10;
        if (fim <= 20)
        {
            if (Marco.vetCalendario[comeco] != -1 && Marco.vetCalendario[fim] != -1 && Marco.vetCalendario[comeco] != 0 && Marco.vetCalendario[fim] != 0)
            {

                sol.veterDataReuniao[0] = Marco.vetCalendario[comeco];
                sol.veterDataReuniao[1] = Marco.vetCalendario[fim];

                v = MarcaReuniaoMarco(comeco, fim, sol);
            }
        }
    }

    while (vdd == false)
    {
        int comeco = 9 + rand() % 10;
        int fim = comeco + (rand() % 9) + 10;
        if (fim <= 30)
        {

            if (Abril.vetCalendario[comeco] != -1 && Abril.vetCalendario[fim] != -1 && Abril.vetCalendario[comeco] != -2 && Abril.vetCalendario[fim] != -2 && Abril.vetCalendario[comeco] != 0 && Abril.vetCalendario[fim] != 0)
            {
                sol.veterDataReuniao[2] = Abril.vetCalendario[comeco];
                sol.veterDataReuniao[3] = Abril.vetCalendario[fim];
                vdd = MarcaReuniaAbril(comeco, fim, sol);
            }
        }
    }

    while (ma == false)
    {
        int comeco = rand() % 10 + 10;
        int fim = comeco + (rand() % 10) + 10;

        if (fim <= 30)
        {
            if (Maio.vetCalendario[comeco] != -1 && Maio.vetCalendario[fim] != -1 && Maio.vetCalendario[comeco] != -2 && Maio.vetCalendario[fim] != -2 & Maio.vetCalendario[comeco] != 0 && Maio.vetCalendario[fim] != 0)
            {

                sol.veterDataReuniao[4] = Maio.vetCalendario[comeco];
                sol.veterDataReuniao[5] = Maio.vetCalendario[fim];
                ma = MarcaReuniaoMaio(comeco, fim, sol);
            }
        }
    }

    while (jun == false)
    {
        int comeco = rand() % 10 + 9;
        int fim = comeco + (rand() % 20) + 10;

        if (fim <= 29)
        {
            if (Junho.vetCalendario[comeco] != -1 && Junho.vetCalendario[fim] != -1 && Junho.vetCalendario[comeco] != -2 && Junho.vetCalendario[fim] != -2)
            {

                sol.veterDataReuniao[6] = Junho.vetCalendario[comeco];
                sol.veterDataReuniao[7] = Junho.vetCalendario[fim];

                jun = MarcaReuniaoJunho(comeco, fim, sol);
            }
        }
    }

    while (jul == false)
    {
        int comeco = (rand() % 10) + 7;
        if (comeco <= 13)
        {
            if (Julho.vetCalendario[comeco] != -1 && Julho.vetCalendario[comeco] != -2)
            {
                sol.veterDataReuniao[8] = Julho.vetCalendario[comeco];
                jul = MarcaReuniaoJulho(comeco, sol);
            }
        }
    }
}
void AulasN(int dia, Solucao &sol)
{
    if (dia != 0)
    {
        if (Antonio.Horario[8][dia - 2] == 1)
            sol.vetorAulasnoite[0] = sol.vetorAulasnoite[0] + 1;

        if (Valeria.Horario[8][dia - 2] == 1)
            sol.vetorAulasnoite[4] = sol.vetorAulasnoite[4] + 1;

        if (Helder.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[13] = sol.vetorAulasnoite[13] + 1;

        if (Rodrigo.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[5] = sol.vetorAulasnoite[5] + 1;

        if (Bruno.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[10] = sol.vetorAulasnoite[10] + 1;

        if (Simone.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[7] = sol.vetorAulasnoite[7] + 1;

        if (Paulo.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[14] = sol.vetorAulasnoite[14] + 1;

        if (Clayton.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[8] = sol.vetorAulasnoite[8] + 1;

        if (Larice.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[9] = sol.vetorAulasnoite[9] + 1;

        if (Juliana.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[3] = sol.vetorAulasnoite[3] + 1;

        if (Edmar.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[1] = sol.vetorAulasnoite[1] + 1;

        if (Marcelo.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[12] = sol.vetorAulasnoite[12] + 1;

        if (Dayan.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[11] = sol.vetorAulasnoite[11] + 1;

        if (Geraldo.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[2] = sol.vetorAulasnoite[2] + 1;

        if (Jacson.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[15] = sol.vetorAulasnoite[15] + 1;

        if (Fabricio.Horario[8][dia - 2] == 1)

            sol.vetorAulasnoite[6] = sol.vetorAulasnoite[6] + 1;
    }
}
void calFOSol(Solucao &sol)
{

    int i;
    int restricao1 = 0;
    int restricao3 = 0;
    int retricao7 = 0;
    int restricao5 = 0;
    double media = 0, restricao6 = 0;
    int soma = 0;
    int restricao4 = 0;

    for (i = 0; i < 9; i++)
    {

        if (i != 8)
            retricao7 = max(0, 10 - sol.veterDataReuniao[i + 1] + sol.veterDataReuniao[i]) + retricao7;
        if (i == 8)
            retricao7 = retricao7 + (0, 10 - sol.veterDataReuniao[i]);
    }
    media = (restricao1 / 16);
    for (i = 0; i < PROFESSOR; i++)
    {
        restricao1 = restricao1 + sol.vetorAulaPerdidas[i];
        restricao3 = restricao3 + sol.vetorAulasnoite[i];
        restricao5 = max(0, sol.vetorAulaPerdidas[i] - 3) + restricao5;
        restricao6 = abs(sol.vetorAulaPerdidas[i] - media) + restricao6;
        restricao4 = sol.vetorReuniaoTerceiroTurno[i] + restricao4;
    }

    media = (restricao1 / 16);

    soma = sol.fo = (10 * restricao1) + (5 * restricao6) + (1 * restricao3) + (2 * restricao4) + (2 * restricao5) + (2 * (retricao7));

    // for (i = 0; i < PROFESSOR; i++)
    // {
    //     printf("Professor %d:  \n", i);

    //     printf("Aulas perdidas: %d \n", sol.vetorAulaPerdidas[i]);

    //     printf("Aulas no terceiros turno: %d \n", sol.vetorReuniaoTerceiroTurno[i]);

    //     printf("Aulas a noite: %d \n", sol.vetorAulasnoite[i]);
    //     printf("\n");
    // }
    // for (i = 0; i < DIA_R; i++)
    // {
    //     if (i <= 1)
    //         printf("Mes Março dias %d  \n", sol.veterDataReuniao[i]);
    //     if (i > 1 && i <= 3)
    //         printf("Mes de Abril dias %d \n", sol.veterDataReuniao[i]);
    //     if (i > 3 && i <= 5)
    //         printf("Mes de Maio dias %d \n", sol.veterDataReuniao[i]);
    //     if (i > 5 && i <= 7)
    //         printf("Mes de Julho dias %d \n", sol.veterDataReuniao[i]);
    //     if (i == 8)
    //         printf("Mes de Junho dias %d \n", sol.veterDataReuniao[i]);
    // }

    // printf("Numeros total de aulas perdidas %d \n", aulsPerdidas);
    // printf("Numero medio de aula perdida %f\n", media);
    // printf("Numeros total de aulas a noite %d \n", restricao3);
    // // for (i = 0; i < PROFESSOR; i++)
    // // {
    //     printf("Professor %d:  \n", i);

    //     printf("Aulas perdidas: %d \n", sol.vetorAulaPerdidas[i]);

    //     printf("Aulas no terceiros turno: %d \n", sol.vetorReuniaoTerceiroTurno[i]);

    //     printf("Aulas a noite: %d \n", sol.vetorAulasnoite[i]);
    //     printf("\n");
    // }
    // for (i = 0; i < DIA_R; i++)
    // {
    //     if (i <= 1)
    //         printf("Mes Março dias %d  \n", sol.veterDataReuniao[i]);
    //     if (i > 1 && i <= 3)
    //         printf("Mes de Abril dias %d \n", sol.veterDataReuniao[i]);
    //     if (i > 3 && i <= 5)
    //         printf("Mes de Maio dias %d \n", sol.veterDataReuniao[i]);
    //     if (i > 5 && i <= 7)
    //         printf("Mes de Julho dias %d \n", sol.veterDataReuniao[i]);
    //     if (i == 8)
    //         printf("Mes de Junho dias %d \n", sol.veterDataReuniao[i]);
    // }
    // printf("Numeros total de aulas perdidas %d \n", soma);
    // printf("Numero medio de aula perdida %f\n", media);
    // printf("Numeros total de aulas a noite %d \n", restricao3);
    total = 0;
    mediaa = 0;
    total = restricao1;
    mediaa = media;
    aulan = restricao3;
    

    // for (i = 0; i < PROFESSOR; i++)
    // {
    //     printf("Professor %d:  \n", i);

    //     printf("Aulas perdidas: %d \n", sol.vetorAulaPerdidas[i]);

    //     printf("Aulas no terceiros turno: %d \n", sol.vetorReuniaoTerceiroTurno[i]);

    //     printf("Aulas a noite: %d \n", sol.vetorAulasnoite[i]);
    //     printf("\n");
    // }
    // for (i = 0; i < DIA_R; i++)
    // {
    //     if (i <= 1)
    //         printf("Mes Março dias %d  \n", sol.veterDataReuniao[i]);
    //     if (i > 1 && i <= 3)
    //         printf("Mes de Abril dias %d \n", sol.veterDataReuniao[i]);
    //     if (i > 3 && i <= 5)
    //         printf("Mes de Maio dias %d \n", sol.veterDataReuniao[i]);
    //     if (i > 5 && i <= 7)
    //         printf("Mes de Julho dias %d \n", sol.veterDataReuniao[i]);
    //     if (i == 8)
    //         printf("Mes de Junho dias %d \n", sol.veterDataReuniao[i]);
    // }
    // printf("Numeros total de aulas perdidas %d \n", total);
    // printf("Numero medio de aula perdida %f\n", media);
    // printf("Numeros total de aulas a noite %d \n", aulan);
    // printf("F0 : %f", sol.fo);
}

void terceiroTurno(int dia, Solucao &sol)
{

    if ((Antonio.Horario[6][dia - 1] == 1 || Antonio.Horario[4][dia - 1] == 1) && Antonio.Horario[8][dia - 1] == 1)

        sol.vetorReuniaoTerceiroTurno[0] = sol.vetorReuniaoTerceiroTurno[0] + 1;

    if ((Juliana.Horario[6][dia - 1] == 1 || Juliana.Horario[4][dia - 1] == 1) && Juliana.Horario[8][dia - 1] == 1)

        sol.vetorReuniaoTerceiroTurno[3] = sol.vetorReuniaoTerceiroTurno[3] + 1;

    if ((Edmar.Horario[6][dia - 1] == 1 || Edmar.Horario[4][dia - 1] == 1) && Edmar.Horario[8][dia - 1] == 1)

        sol.vetorReuniaoTerceiroTurno[1] = sol.vetorReuniaoTerceiroTurno[1] + 1;

    if ((Geraldo.Horario[6][dia - 1] == 1 || Geraldo.Horario[4][dia - 1] == 1) && Geraldo.Horario[8][dia - 1] == 1)

        sol.vetorReuniaoTerceiroTurno[2] = sol.vetorReuniaoTerceiroTurno[2] + 1;

    if ((Valeria.Horario[6][dia - 1] == 1 || Valeria.Horario[4][dia - 1] == 1) && Valeria.Horario[8][dia - 1] == 1)

        sol.vetorReuniaoTerceiroTurno[4] = sol.vetorReuniaoTerceiroTurno[4] + 1;

    if ((Paulo.Horario[6][dia - 1] == 1 || Paulo.Horario[4][dia - 1] == 1) && Paulo.Horario[8][dia - 1] == 1)

        sol.vetorReuniaoTerceiroTurno[14] = sol.vetorReuniaoTerceiroTurno[14] + 1;

    if ((Rodrigo.Horario[6][dia - 1] == 1 || Rodrigo.Horario[4][dia - 1] == 1) && Rodrigo.Horario[8][dia - 1] == 1)

        sol.vetorReuniaoTerceiroTurno[5] = sol.vetorReuniaoTerceiroTurno[5] + 1;

    if ((Fabricio.Horario[6][dia - 1] == 1 || Fabricio.Horario[4][dia - 1] == 1) && Fabricio.Horario[8][dia - 1] == 1)

        sol.vetorReuniaoTerceiroTurno[6] = sol.vetorReuniaoTerceiroTurno[6] + 1;

    if ((Simone.Horario[6][dia - 1] == 1 || Simone.Horario[4][dia - 1] == 1) && Simone.Horario[8][dia - 1] == 1)
        sol.vetorReuniaoTerceiroTurno[7] = sol.vetorReuniaoTerceiroTurno[7] + 1;

    if ((Clayton.Horario[6][dia - 1] == 1 || Clayton.Horario[4][dia - 1] == 1) && Clayton.Horario[8][dia - 1] == 1)
        sol.vetorReuniaoTerceiroTurno[8] = sol.vetorReuniaoTerceiroTurno[8] + 1;

    if ((Larice.Horario[6][dia - 1] == 1 || Larice.Horario[4][dia - 1] == 1) && Larice.Horario[8][dia - 1] == 1)
        sol.vetorReuniaoTerceiroTurno[9] = sol.vetorReuniaoTerceiroTurno[9] + 1;

    if ((Bruno.Horario[6][dia - 1] == 1 || Bruno.Horario[4][dia - 1] == 1) && Bruno.Horario[8][dia - 1] == 1)
        sol.vetorReuniaoTerceiroTurno[10] = sol.vetorReuniaoTerceiroTurno[10] + 1;

    if ((Dayan.Horario[6][dia - 1] == 1 || Dayan.Horario[4][dia - 1] == 1) && Dayan.Horario[8][dia - 1] == 1)
        sol.vetorReuniaoTerceiroTurno[11] = sol.vetorReuniaoTerceiroTurno[11] + 1;

    if ((Marcelo.Horario[6][dia - 1] == 1 || Marcelo.Horario[4][dia - 1] == 1) && Marcelo.Horario[8][dia - 1] == 1)
        sol.vetorReuniaoTerceiroTurno[12] = sol.vetorReuniaoTerceiroTurno[12] + 1;
    if ((Helder.Horario[6][dia - 1] == 1 || Helder.Horario[4][dia - 1] == 1) && Helder.Horario[8][dia - 1] == 1)
        sol.vetorReuniaoTerceiroTurno[13] = sol.vetorReuniaoTerceiroTurno[13] + 1;

    if ((Jacson.Horario[6][dia - 1] == 1 || Jacson.Horario[4][dia - 1] == 1) && Jacson.Horario[8][dia - 1] == 1)
        sol.vetorReuniaoTerceiroTurno[15] = sol.vetorReuniaoTerceiroTurno[15] + 1;
}
void gravarArquivo(Solucao &sol)
{
    FILE *file;
    int i, j;
    file = fopen("arquivo.txt", "a");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo");
        system("pause");
    }
    for (i = 0; i < PROFESSOR; i++)
    {
        fprintf(file, "Professor %d:  \n", i);

        fprintf(file, "Aulas perdidas: %d \n", sol.vetorAulaPerdidas[i]);

        fprintf(file, "Aulas no terceiros turno: %d \n", sol.vetorReuniaoTerceiroTurno[i]);

        fprintf(file, "Aulas a noite: %d \n", sol.vetorAulasnoite[i]);
        printf("\n");
    }
    for (i = 0; i < DIA_R; i++)
    {
        if (i <= 1)
        {
            fprintf(file, "Mes Março dia %d  \n", sol.veterDataReuniao[i]);
        }
        if (i > 1 && i <= 3)
        {
            fprintf(file, "Mes de Abril dia %d \n", sol.veterDataReuniao[i]);
        }
        if (i > 3 && i <= 5)
        {
            fprintf(file, "Mes de Maio dia %d \n", sol.veterDataReuniao[i]);
        }
        if (i > 5 && i <= 7)
        {

            fprintf(file, "Mes de Julho dia %d \n", sol.veterDataReuniao[i]);
        }
        if (i == 8)
        {

            fprintf(file, "Mes de Junho dia %d \n", sol.veterDataReuniao[i]);
        }
    }
    for (i = 0; i < 9; i++)
    {

        fprintf(file, "Horario %d \n", sol.vetorHorario[i]);
    }

    fprintf(file, "Numeros total de aulas perdidas %d \n", total);
    fprintf(file, "Numero medio de aula perdida %f\n", mediaa);
    fprintf(file, "Numeros total de aulas a noite %d \n", aulan);
    fprintf(file, "FO: %f", sol.fo);
    fprintf(file, "\n");
    fprintf(file, "\n");
    fclose(file);
}
void clonarSolucao(Solucao &sO, Solucao &sD)
{
    memcpy(&sD, &sO, sizeof(sO));
}

void GerarVizinho(Solucao &s, Solucao &sol)
{
    // memset(&s.veterDataReuniao, 0, sizeof(s.veterDataReuniao));
    // memset(&s.vetorAulasnoite, 0, sizeof(s.vetorAulasnoite));
    memset(&s.vetorAulaPerdidas, 0, sizeof(s.vetorAulaPerdidas));
    // memset(&s.vetorReuniaoTerceiroTurno, 0, sizeof(s.vetorReuniaoTerceiroTurno));
    // memset(&s.vetorHorario, 0, sizeof(s.vetorHorario));
    memset(&s.fo, 0, sizeof(s.fo));

    bool controle = false;

    while (controle != true)
    {

        int aux = 0;
        int mes = random() % 9;
        int mes2 = random() % 9;
        // printf("sol1 %d \n",sol.vetorHorario[mes]);
        // printf("s %d \n",s.vetorHorario[mes2]);
        aux = sol.vetorHorario[mes];
        sol.vetorHorario[mes] = s.vetorHorario[mes2];
        s.vetorHorario[mes2] = aux;

        if (sol.vetorHorario[mes] - 1 == s.vetorHorario[mes2] && sol.vetorHorario[mes] + 1 == s.vetorHorario[mes2] || sol.vetorHorario[mes] == s.vetorHorario[mes2])
        {
            controle = false;
        }
        else
        {

            controle = true;
            if (s.vetorHorario[mes2] % 2 == 1)
            {
                MarcaFaltas(s.vetorHorario[mes2] - 1, VetorDiaAUX[mes2], s);
                calFOSol(s);
            }
            else
            {
                MarcaFaltas(s.vetorHorario[mes2], VetorDiaAUX[mes2], s);
                calFOSol(s);
            }

            if (sol.vetorHorario[mes] % 2 == 1)
            {
                MarcaFaltas(sol.vetorHorario[mes] - 1, VetorDiaAUX[mes], sol);
                calFOSol(sol);
            }
            else
            {
                MarcaFaltas(sol.vetorHorario[mes], VetorDiaAUX[mes], sol);
                calFOSol(sol);
            }
        }
    }

    // calFOSol(sol);

    // MarcaFaltas(sol.vetorHorario[3], VetorDiaAUX[0], s);

    // // sol.vetorHorario[0] = 0;
    // calFOSol(sol);

    // // s.vetorHorario[0] = 0;

    // calFOSol(s);
}

void BuscaInterativa(Solucao &sol)
{
    clock_t hI, hF;
    Solucao s;
    Solucao aux;
    memset(&aux.veterDataReuniao, 0, sizeof(aux.veterDataReuniao));
    memset(&aux.vetorAulasnoite, 0, sizeof(aux.vetorAulasnoite));
    memset(&aux.vetorAulaPerdidas, 0, sizeof(aux.vetorAulaPerdidas));
    memset(&aux.vetorReuniaoTerceiroTurno, 0, sizeof(aux.vetorReuniaoTerceiroTurno));
    memset(&aux.vetorHorario, 0, sizeof(aux.vetorHorario));
    memset(&aux.fo, 0, sizeof(aux.fo));

    heuCon(sol);
    clonarSolucao(sol, s);
    memset(&s.vetorAulaPerdidas, 0, sizeof(s.vetorAulaPerdidas));

    hI = clock();
    while (tempo < 300)
    {
        GerarVizinho(s, sol);
        if (sol.fo < s.fo)
        {
            MelhorFo = sol.fo;
            clonarSolucao(sol, aux);
        }
        else
        {
            MelhorFo = s.fo;
            clonarSolucao(s, aux);
        }
        hF = clock();
        tempo = ((double)hF - hI) / CLOCKS_PER_SEC;
         printf("Tempo %f \n",tempo);
        //
    }
     GravarFo(MelhorFo, tempo, aux);
    tempo = 0;
   
   
}

void GravarFo(int fo, double tempo, Solucao &sol)
{

    FILE *file;
    int i, j;
    file = fopen("FO.txt", "a");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo");
        system("pause");
    }
    fprintf(file, "Melhor FO : %d \n", fo);
    fprintf(file, "Tempo : %f \n",tempo);

    for (i = 0; i < PROFESSOR; i++)
    {
        fprintf(file, "Professor %d:  \n", i);

        fprintf(file, "Aulas perdidas: %d \n", sol.vetorAulaPerdidas[i]);

        fprintf(file, "Aulas no terceiros turno: %d \n", sol.vetorReuniaoTerceiroTurno[i]);

        fprintf(file, "Aulas a noite: %d \n", sol.vetorAulasnoite[i]);
        printf("\n");
    }
    for (i = 0; i < DIA_R; i++)
    {
        if (i <= 1)
        {
            fprintf(file, "Mes Março dia %d  \n", sol.veterDataReuniao[i]);
        }
        if (i > 1 && i <= 3)
        {
            fprintf(file, "Mes de Abril dia %d \n", sol.veterDataReuniao[i]);
        }
        if (i > 3 && i <= 5)
        {
            fprintf(file, "Mes de Maio dia %d \n", sol.veterDataReuniao[i]);
        }
        if (i > 5 && i <= 7)
        {

            fprintf(file, "Mes de Julho dia %d \n", sol.veterDataReuniao[i]);
        }
        if (i == 8)
        {

            fprintf(file, "Mes de Junho dia %d \n", sol.veterDataReuniao[i]);
        }
    }
    

for (i = 0; i < 9; i++)
    {
        if (sol.vetorHorario[i] == 1 || sol.vetorHorario[i] == 0)
            fprintf(file, "Horario de  8h ás 10h \n");
        if (sol.vetorHorario[i] == 2 || sol.vetorHorario[i] == 3)
            fprintf(file, "Horario de  10h ás 12h \n");
        if (sol.vetorHorario[i] == 4 || sol.vetorHorario[i] == 5)
            fprintf(file, "Horario de 14h ás 16h \n");
        if (sol.vetorHorario[i] == 6 || sol.vetorHorario[i] == 7)
            fprintf(file, "Horario de 16h ás 18h \n");
    }


    
    fprintf(file, "Numeros total de aulas a noite %d \n", aulan);

    fprintf(file, "\n");
    fprintf(file, "\n");
    fclose(file);


}