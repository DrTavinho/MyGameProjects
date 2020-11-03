#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <dos.h>

using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void preparar(), batalha(), embaralhar(), gerar(), tabela(), status(), geraren(), effec(), effec2(), AI(), checkvit(), player(); 
void comprarmao(), desmao(), printmao(), campo(), game(), drops(), escolherinim(), bau(), bauim(), descanso(), fogueira(), descarsel();
void menu(), gastarale(), descartale(), displaycartas(), mercante(), venda(), removcarta(), resetstatus(), cartausada();
int add(int carta), remove(int carta), pegar(int carta), usarcarta(int carta), printcarta(int carta), descartar(int carta);
int gastar(int carta), dano(float dn), gerarinim(int i), escolhacarta(int carta), danot(float dn), danor(float dn, int rep), charToInt(char c);
int pegares(int carta), embalea(int carta), AIturno(int opcao), AIshow(int opcao, int a), descarid(int carta);

typedef struct {
    float vida;
    float vidamax;
    int escudo;
    int lvl;
    int tipo; //leve, medio, tanque, boss, minion
    int veneno;
    float vul=1;
	float fraq=1;
    int Dvul=0;
	int Dfraq=0;
    int forca;
    char nome[50];
    int ataq[10];
    int apo=0;
    
} estrutura;
estrutura inim[10];

char andar[15], c;
int ids = 126; //id da carta mais alta

float vida=80, vidamax=80, vul=1, fraq=1, j2, dn, ml;
int mana=0, manamax=5, maomax=5, ouro=99, escudo=0, nivel=14, dificuldade=0, zona=0;
int i, i2, i3, j, k, x, y, a, b, cj, z, o, em, rep, rando, cont=0, qCartas, qGasta=0, ataque, inimigos=0, qInim=0, opcao, pag; 
int Dfraq, Dvul, forca=0, veneno=0, kills , ouro2 , ourot, autoreparos, manap, laminf, bonusestoque, rastro, envenenar, barricada, milcorte;
int Dfim=0, DStopo=0, Ctopo=0, Mtopo=0, Gtopo=0, turno=0;
int deck[1000], descarte[1000], compra[1000], gasta[1000], mao[1000], escolha[10], item[5], preco[6];
bool erro = false, duelo = false, boss = false;

#include "BatalhaDB.h"
#include "cartas.h"
#include "eventos.h"
#include "AI.h"
#include "menu.h"

int main() {
	
	time_t t;
	srand((unsigned) time(&t));
	setlocale(LC_ALL, "Portuguese");
	SetConsoleTextAttribute(h,15);
	
	if(1){
		displaycartas();
	}
	
	add(1);
	add(1);
	add(1);
	add(1);
	add(3);
	add(3);
	add(3);
	add(3);
	add(3);
	add(5);
	
	while(1){
		game();
	}
	
    return 0;
}     

void game() {
	
	while(1){
		nivel++;
		resetstatus();
		boss = false;
		i=0;
		em=0;
		
		if(nivel == 15) {
			vida = vidamax;
			dificuldade++;
			nivel = 0;
			zona++;
			gerar();
		}
		
		tabela();
		Sleep(1200);
		
		if(andar[nivel] == 'M') { 			//monstro
			printf("\t\t\t !!! BATALHA !!!\n");
		} else if(andar[nivel] == 'L') {	//loja
			printf("\t\t\t !!! LOJA !!!\n");
		} else if(andar[nivel] == 'D') {	//descanso
			printf("\t\t\t !!! DESCANSO !!!\n");
		} else if(andar[nivel] == 'B') {	//bau
			printf("\t\t\t !!! BÁU !!!\n");
		} else if(andar[nivel] == 'I') {	//adicionar cartas
			printf("\t\t\t !!! CARTAS BÔNUS !!!\n");
		} else if(andar[nivel] == 'C') {	//chefe
			printf("\t\t\t !!! CHEFÃO !!!\n");
		}
		
		printf("\n\t   ");
		system("pause");
		
		//bau();
		//descanso();
		//loja();
		//escolhacarta(10);
		
		if(andar[nivel] == 'M') { 			//monstro
			preparar();
		} else if(andar[nivel] == 'L') {	//loja
			loja();
		} else if(andar[nivel] == 'D') {	//descanso
			descanso();
		} else if(andar[nivel] == 'B') {	//bau
			bau();
		} else if(andar[nivel] == 'I') {	//adicionar cartas
			escolhacarta(3);
		} else if(andar[nivel] == 'C') {	//chefe
			boss = true;
			preparar();
		}
	}
} 

void status() {
	printf("-----------------------------------------------------------------------\n\n");
	if(duelo == true) {
		printf("\t     VIDA: %.0f/%.0f || ESCUDO: %d || MANA: ", vida, vidamax, escudo);
		
		for(o=0;o<mana;o++){
			
			if(o<manamax){
				SetConsoleTextAttribute(h,3);
				printf("@ ");	
			} else {
				SetConsoleTextAttribute(h,1);
				printf("@ ");	
			}
			
		}
		
		SetConsoleTextAttribute(h,8);
		for(o=0;o<(manamax-mana);o++){
			printf("o ");
		}
		SetConsoleTextAttribute(h,15);
		printf("\n\t\tCOMPRA: %d  DESCARTE: %d  GASTAS: %d\n", Ctopo, DStopo, qGasta);
		
		SetConsoleTextAttribute(h,2);
		printf("\t      VENENO:%d ",veneno);
		SetConsoleTextAttribute(h,11);
		printf("FRAQUEZA:%d  ",Dfraq);
		SetConsoleTextAttribute(h,13);
		printf("VULNERA:%d ",Dvul);
		SetConsoleTextAttribute(h,12);
		printf("FORÇA:%d\n\n",forca);
		SetConsoleTextAttribute(h,15);
		
	} else {
		printf("\t    VIDA: %.0f/%.0f  OURO: %d  DECK: %d  ZONA: %d\n\n", vida, vidamax, ouro, qCartas, zona);
	}
	printf("-----------------------------------------------------------------------\n\n");
}

void tabela() {
	
	system("cls");
	status();
	
	if(duelo == false){
		printf("\t\t");
		printf("  %c", andar[0]);
		for(i=1;i<15;i++){
			printf("-%c", andar[i]);
		}
		printf("\n");
		
		printf("\t\t");
		for(i=0;i<nivel;i++){
			printf("  ");
		}
		printf("  ^\n");
	}
	
	
}

void preparar() {
	
	resetstatus();
	i=0;
	em=0;
	
	for(i=0;i<10;i++){
		inim[i].escudo = 0;
		inim[i].vida = 0;
		inim[i].vidamax = 0;
		inim[i].lvl = 0;
		inim[i].tipo = 0;
		inim[i].veneno = 0;
		inim[i].vul = 1;
		inim[i].fraq = 1;
		inim[i].forca = 0;
		inim[i].Dfraq = 0;
		inim[i].Dvul = 0;
		inim[i].apo = 0;
		inim[i].ataq[0] = 0;
		inim[i].ataq[1] = 0;
		inim[i].ataq[2] = 0;
		inim[i].ataq[3] = 0;
		inim[i].ataq[4] = 0;
		inim[i].ataq[5] = 0;
		inim[i].ataq[6] = 0;
		inim[i].ataq[7] = 0;
		inim[i].ataq[8] = 0;
		inim[i].ataq[9] = 0;
		
	}
	
	
	for(i=0;i<1000;i++){
		descarte[i] = 0;
	}
	for(i=0;i<1000;i++){
		compra[i] = 0;
	}
	for(i=0;i<1000;i++){
		gasta[i] = 0;
	}
	for(i=0;i<1000;i++){
		mao[i] = 0;
	}
	
	i=0;
	while(i != qCartas) {
		descarte[i] = deck[i];
		i++;
		DStopo++;
	}
	
	
	embaralhar();
	batalha();
	
}

void gerar() {  // m m ? D ? m L m D m ? m ? D C    (? = b, m, L, i)
	
	andar[0] = 'M';
	andar[1] = 'M';
	andar[3] = 'D';
	andar[5] = 'M';
	andar[6] = 'L';
	andar[7] = 'M';
	andar[8] = 'D';
	andar[9] = 'M';
	andar[11] = 'M';
	andar[13] = 'D';
	andar[14] = 'C';
	
	rando = (rand() % 10);
	if(rando >= 0 && rando < 3){
		andar[2] = 'I';
	} else if(rando >= 3 && rando < 6){
		andar[2] = 'B';
	} else if(rando >= 6 && rando < 9){
		andar[2] = 'M';
	} else if(rando == 9){
		andar[2] = 'L';
	}
	
	rando = (rand() % 10);
	if(rando >= 0 && rando < 3){
		andar[4] = 'I';
	} else if(rando >= 3 && rando < 6){
		andar[4] = 'B';
	} else if(rando >= 6 && rando < 9){
		andar[4] = 'M';
	} else if(rando == 9){
		andar[4] = 'L';
	}
	
	rando = (rand() % 10);
	if(rando >= 0 && rando < 4){
		andar[10] = 'I';
	} else if(rando >= 4 && rando < 7){
		andar[10] = 'B';
	} else if(rando >= 7 && rando < 9){
		andar[10] = 'M';
	} else if(rando == 9){
		andar[10] = 'L';
	}
	
	rando = (rand() % 10);
	if(rando >= 0 && rando < 4){
		andar[12] = 'I';
	} else if(rando >= 4 && rando < 7){
		andar[12] = 'B';
	} else if(rando >= 7 && rando < 9){
		andar[12] = 'M';
	} else if(rando == 9){
		andar[12] = 'L';
	}
	
	
	
}

void embaralhar() {			//embaralha a pilha de descartes embaixo da pilha de compras
	
	if((DStopo-1) > 0){
		
		if(compra[0] > 0){
			for(em=Ctopo;em>=0;em--){
				compra[em+DStopo] = compra[em];
				compra[em] = 0;
				
			}
			Ctopo = 0;
		}
		
		cont=0;
		em=0;
		while(cont < DStopo) {
			rando = (rand() % 4);
		
			switch(rando){
			
				case 0:
					if(descarte[em] > 0){
						compra[Ctopo] = descarte[em];
						descarte[em] = 0;
						Ctopo++;
						cont++;
						em++;
					} else {
						em++;
					}
				break;
				
				case 1:
					em++;
				break;
			
				case 2:
					em++;
				break;
			
				case 3:
					em++;
				break;
			
			}
		
			if(em == DStopo){
				em = 0;
			}
		}
		
		em=0;
		while(compra[em] != 0){
			em++;
		}
		Ctopo = em;
		
		DStopo = 0;	
	}
}

void printmao() {			//imprime as cartas da mão do jogador na tela
	
	for(i=0;i<Mtopo;i++){
		
		printcarta(mao[i]);
		
	}
	
}

void comprarmao() {			//compra uma mão cheia de cartas da pilha de compras
	
	if(laminf == 1) {
		pegares(53);
	} else if(laminf == 2) {
		pegares(54);
	}
	
	pegar(maomax);
	
}

void desmao() {				//descarta para a pilha de descarte TODAS as cartas na mão	
	
	x = Mtopo;
	for(j=0;j<x;j++){
		if(mao[0] == 15 || mao[0] == 16 || mao[0] == 58 || mao[0] == 76){
			
			if(mao[0] == 76){
				j2 = escudo;
				escudo = escudo - 2;
				dn = 2 - j2;
		
				j2 = vida;
		
				if(escudo < 0){
					escudo = 0;
				}
		
				if(dn >= 0){
					vida = vida - dn;
					j2 = j2 - vida;
			
					printf("\tDANO:");
					SetConsoleTextAttribute(h,12);
					printf(" %.0f ",j2);
					SetConsoleTextAttribute(h,15);
					printf("->QUEIMADURA\n");
			
				} else {
					printf("\tESCUDO TE PROTEJEU ->QUEIMADURA\n");
				}
				Sleep(1200);
				checkvit();
			}
			
			gastar(1);
		} else {
			descartar(1);	
		}
	}
	
}

int add(int carta) {		//adiciona carta de id X ao deck principal
	
	deck[Dfim] = carta;
	Dfim++;
	qCartas++;
	
}

int remove(int carta) { 	//remove carta de id X do deck principal
	
	for(i=0;i<Dfim;i++) {
		if(deck[i] == carta){
			goto acao;
		}
	}
	
	acao:
		while(i != Dfim) {
			deck[i] = deck[i+1];
			i++;
		}
	Dfim--;
	qCartas--;
}

int pegar(int carta) { 		//compra uma quantidade X de cartas da pilha de compras e põe na mão do jogador
	
	
	if(Ctopo < carta) {
		embaralhar();
		
		if(Ctopo < carta){
			carta = Ctopo;
			//printf("Não há cartas suficientes para se comprar, comprando o maximo possivel: %d\n", carta);
			
		}
		
	}
	
	for(i=0;i<carta;i++){
		mao[Mtopo] = compra[Ctopo-1];
		compra[Ctopo-1] = 0;
		Mtopo++;
		Ctopo--;
	}
	
	
	
		
}

int pegares(int carta) {	//compra a carta de id X e põe na mão do jogador
	
	mao[Mtopo] = carta;
	Mtopo++;
	tabela();
	campo();
	printmao();

}

int descartar(int carta) {	//descarta a carta de posição X da mão do jogador e põe ela na pilha de descarte
	
	if(Mtopo>0){
		
		carta--;
	
		descarte[DStopo] = mao[carta];
		DStopo++;
	
		i = carta;
		while(mao[i] > 0){
			
			mao[i] = mao[i+1];
			i++;
		}
	
		Mtopo--;	
		
		
	}
	
	
}

int descarid(int carta) {	//adiciona carta de id X a pilha de descartes
	
	descarte[DStopo] = carta;
	DStopo++;
	
}

void descarsel() {			//descarta carta da mão desejada pelo usuário
	
	if(Mtopo > 0) {
		tabela();
		campo();
		printmao();
		printf("\n\tDescarte uma carta:\n");
		printf("\t->");
		scanf("%d", &k);
	
		descartar(k);	
	}
	
}

int gastar(int carta) {		//descarta a carta de posição X da mão do jogador e põe na pilha de cartas gastas
	
	carta--;
	qGasta++;
	
	i = carta;
	while(mao[i] > 0){
		
		gasta[Gtopo] = mao[i];
		Gtopo++;
		mao[i] = mao[i+1];
		i++;
	}
	
	Mtopo--;
	
	
}

void gastarale() {			//gasta uma carta aleatoria da mão
	
	if(Mtopo > 0){
					
		rando = (rand() % Mtopo);			
		gastar(rando);
					
	}
	
}

void descartale() { 		//descarta uma carta aleatoria da mão
	
	if(Mtopo > 0){
					
		rando = (rand() % Mtopo);
		descartar(rando);
					
	}
	
}

int embalea(int carta) {	//embaralha carta de id X aleatoriamente na pilha de compras
	
	if(Ctopo > 0){
		rando = (rand() % Ctopo);
	
		for(k = Ctopo;k>=rando;k--) {
		
			compra[k+1] = compra[k];
		
		}
	
		compra[rando] = carta; 
	
		Ctopo++;
		
	} else {
		
		compra[Ctopo] = carta; 
		Ctopo++;
		
	}
	
}

void displaycartas() {		//apresenta todas as cartas do jogo em uma lista ordenada em grupos de 6 por página
	
	system("cls");
	
	j2 = ids;
	printf("\n\t    -- Card Conquer --\n");
	SetConsoleTextAttribute(h,8);
	printf("\t     Um jogo por: DrT\n");
	SetConsoleTextAttribute(h,15);
	printf("\t   Aperte 0 para jogar!\n");
	printf("\t   Total de cartas: %d\n", ids);
	printf("    Use (<) e (>) para passar as páginas!\n\n");
	printf("\t     < (PÁGINA: %d/%0.f) > \n", (pag+1), ceil(j2/6));
			
	for(i=(pag*6);i<((pag*6)+6);i++){
		if(i < ids){
			printcarta(i+1);
		}
	}
				
	fflush(stdin);
	c = getch();
				
	switch(c) {
		
		case 48:
			//ir para jogo
		break;
	
		case 44:
			if(pag > 0){
				pag--;
				displaycartas();
			} else {
				displaycartas();
			}
		break;
					
		case 46:
			if((pag+1) == ceil(j2/6)){
				displaycartas();
			} else if(pag < ceil(j2/6)){
				pag++;
				displaycartas();
			} else {
				displaycartas();
			}
		break;
					
		default:
			displaycartas();
					
	}
	
}

void resetstatus() {		//restaura algumas variaveis de batalha ao estado original
	
	veneno=0;
	fraq=1;
	Dfraq=0;
	vul=1;
	Dvul=0;
	forca=0;
	qInim=0;
	qGasta=0;
	escudo=0;
	DStopo=0;
	Ctopo=0;
	Mtopo=0;
	Gtopo=0;
	maomax=5;
	autoreparos=0;
	manap=0;
	laminf=0;
	bonusestoque=0;
	envenenar=0;
	
}
/*

	SetConsoleTextAttribute(h,15);

	0 = Black
	1 = Blue
	2 = Green
	3 = Aqua
	4 = Red
	5 = Purple
	6 = Yellow
	7 = White
	8 = Gray
	9 = Light Blue
	10 = Light Green
	11 = Light Aqua
	12 = Light Red
	13 = Light Purple
	14 = Light Yellow
	15 = Bright White

*/


