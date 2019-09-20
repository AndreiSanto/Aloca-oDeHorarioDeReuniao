#ifndef FILE_H
#define FILE_H
#define LINHA 20
#define COLUNA 5
#define MAX_V 1
#define VALORCALENDARIO 33
#define COLUNA_CALENDARIO 7
#define LINHA_CA 6
#define AULANOITE 5
#define MATRIZ_LINHA 9
#define MATRIZ_COLUNA 5
#define LINHA_REU 8
#define PESO 7
#define PROFESSOR 16
#define REUNIAO_MES 5
#define DIA_R 9
typedef struct reuniao
{
    int HorarioReuniao[LINHA_REU][MATRIZ_COLUNA];
    int Aux[LINHA_REU][MATRIZ_COLUNA];

} ReuniaoHorario;
typedef struct tSolucao
{
    int vetorAulaPerdidas[PROFESSOR];
    int vetorReuniaoTerceiroTurno[PROFESSOR];
    int vetorAulasnoite[PROFESSOR];
    int vetorMesReuniao[REUNIAO_MES];
    int veterDataReuniao[DIA_R];   
    int vetpeso[PESO];
    double foaux=1000000000;
    double fo;
    int vetorHorario[DIA_R];
    
}Solucao;
   




typedef struct horario
{
    int Horario[MATRIZ_LINHA][MATRIZ_COLUNA];
    int AulasPerdidas[MAX_V];
    int AulasNoite[MAX_V];
    int AulasTerceiroTurno[MAX_V];
    int Reuniao[LINHA_REU][MATRIZ_COLUNA];

} Horario;
typedef struct calendario
{
    int vetCalendario[VALORCALENDARIO];
    int VetReuniao[VALORCALENDARIO];

} Calendario;

Horario mabril;
Horario marco;
Horario maio;
Horario junho;
Horario julho;
Calendario Marco;
Calendario Abril;
Calendario Maio;
Calendario Junho;
Calendario Julho;

Horario Antonio;
Horario Bruno;
Horario Jacson;
Horario Juliana;
Horario Edmar;
Horario Geraldo;
Horario Dayan;
Horario Valeria;
Horario Paulo;
Horario Rodrigo;
Horario Clayton;
Horario Helder;
Horario Simone;
Horario Larice;
Horario Marcelo;
Horario Fabricio;
 double mediaa;
  int aulan;
 int total;

static int VetorDiaAUX[DIA_R];
void lerDados(char *arq);
void imprimir();
void LerCalendario(char *arq);
void AulaNoiteAnterio(Horario &sol, int dia);
void imprimirNoite(Horario &sol);
void iniciarMatrizReuniao();
int DiaDaSemana(Calendario &c, int dia);
bool VerificarAulaNoite(int dia);
bool TerceiroTurno(int dia);
void MarcaFaltas(int i, int j,Solucao &sol);
void LerCalendarioMarco(char *arq);
bool MarcaReuniaoMarco(int inicial, int ultimo,Solucao &sol);
void LerCalendarioMaio(char *arq);
bool MarcaReuniaoMaio(int inicial, int ultimo,Solucao &sol);
void LerCalendarioJunho(char *arq);
bool MarcaReuniaoJunho(int inicial, int ultimo,Solucao &sol);
void LerCalendarioJulho(char *arq);
bool MarcaReuniaoJulho(int inicial,Solucao &sol);
bool verificarfaltass(int dia,Solucao &sol);
void heuCon(Solucao &s);
void AulasN(int dia,Solucao &sol);
void LerPeso(char*arq);
void calFOSol(Solucao &s);
void gravarArquivo(Solucao &s);
void terceiroTurno(int dia,Solucao &s);
void impmi();
void clonarSolucao(Solucao &o, Solucao &d);
void GerarVizinho(Solucao &s,Solucao &sol);
void BuscaInterativa(Solucao &sol);
void GravarFo(int fo,double tempo,Solucao &s);
#endif