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
//#include <ncurses.h>

using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void printmapa(), gerarmapa(), game(), checkpos(), moverinim(), build(), sala0(), sala1(), sala2(), sala3(), sala4(), sala5();
void salaT(), salaloja(), tabela(), attack(), bitens(), AI(), AIa(), checkvit(), tabemin(), drops(), lvlup(), itemshow(), info();
void equipamento(), inventario(), effec(), intro(), testequip(), mercante(), mercanteim(), comprar(), reparar(), aprimorar();
int main();

int assistir = 0;

char mapa[201][201], name[50] = "rfy5qy53qyft43ygvba", name2[50], upg[4] = {' ', ' ', ' ', ' '};
int lin, col, ouro = 0, optn = 0, optn2 = 0, optn3 = 1, randoslin, randoscol, randoo, i, i2, inimcont, wait = 0, itcont = 0, inimcontt;
int x, y, turno, direc, direc2, oponente, duelo = 0, posicionar, chave = 0, mimic, andar = 1, loja = 0, saida = 10;
int stun, stun2, milagre, milagrep, milagrep2, milagre2, sang, sang2, veneno, veneno2, enfc, enfc2, ai, estus = 0, estusc = 2, bomba = 2, pocao = 3, pocaom = 5;
float vida = 30, vidamax = 30, ataque = 10, dano, xp=0, lxp = 100, rando, rando2, prot = 1, prot2 = 1, enf = 1, enf2 = 1;

int a[4] = {1, 0, 0, 0}, lvl = 1, saber[50] = {0,0,0,0,0,0,0,0,0,0,0,0}, dura[4], durat[50] = {60,50,45,60,40,50,25,25,15,30,30,40}, lojai[3], repa[4], repad[4];
float preco[3];

//  {0,0,0,0,0,0,0,0,0,0,0,0}
//  {1,1,1,1,1,1,1,1,1,1,1,1}
//  {0,0,1,0,1,0,1,1,0,1,0,1}

typedef struct // Cria uma STRUCT para armazenar os dados
{
    float vida;
    int poslin;
    int poscol;
    float ataque;
    int lvl;
    float vidamax;
    int a[4];
    int equip1[2];
    int	equip2[2];
    
} estrutura;
estrutura inim[100];
estrutura item[100];

#include "salas.h"
#include "opcoes.h"
#include "batalha.h"
#include "outros.h"
#include "AIBot.h"
#include "loja.h"

void game() {

		printmapa();
		//printf("\t\t\t\t\t\t  CORDS: lin%d col%d  ",x-10,y-30);
		//printf("REAL CORDS: lin%d col%d  INIMIGOS: %d\n\n",x,y,inimcont);
		
		
		printf("\t\t\t\t\t\t\t[Q]Bombas: %d  [E]Poções: %d/%d  INIMIGOS: %d\n", bomba, pocao, pocaom, inimcont);
		printf("\t\t\t\t\t\t\t    1.Inventário   2.Equipamento   3.Info\n\n");
		if (optn == 1) {
			inventario();
		} else if (optn == 2) {
			equipamento();
		} else if (optn == 3) {
			printf("\t\t\t\t\t\t\t\tDeseja saber mais sobre:\n");
			printf("\t\t\t\t\t\t\t\t4.Ataques  5.Caracteres  6.Funções\n");
			info();
		} else {
			SetConsoleTextAttribute(h,8);
			printf("\n\t\t\t\t\t\t\t  W=CIMA | A=ESQUERDA | S=BAIXO | D=DIREITA\n\n");
			printf("\t\t\t\t\t\t\t\t    Um jogo por: DrT\n");
			SetConsoleTextAttribute(h,15);
		}
		
		fflush(stdin);
		switch(toupper(getch())) {
			
			case 49:
				optn = 1;
				optn2 = 0;
				optn3 = 1;
				game();
			break;
				
			case 50:
				optn = 2;
				optn2 = 0;
				optn3 = 1;
				game();
			break;
			
			case 51:
				optn = 3;
				optn2 = 0;
				optn3 = 1;
				game();
			break;
				
			case 52:
				if(optn == 3) {
					optn2 = 1;
					optn3 = 1;
					game();
				} else {
					SetConsoleTextAttribute(h,4);
					printf("\n\t\t\t\t\t\t!!! Opção Inválida !!!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(500);
					optn3 = 1;
					game();
				}
			break;
				
			case 53:
				if(optn == 3) {
					optn2 = 2;
					optn3 = 1;
					game();
				} else {
					SetConsoleTextAttribute(h,4);
					printf("\n\t\t\t\t\t\t!!! Opção Inválida !!!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(500);
					optn3 = 1;
					game();
				}
			break;	
				
			case 54:
				if(optn == 3) {
					optn2 = 3;
					optn3 = 1;
					game();
				} else {
					SetConsoleTextAttribute(h,4);
					printf("\n\t\t\t\t\t\t!!! Opção Inválida !!!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(500);
					optn3 = 1;
					game();
				}
			break;
			
			case 65: //A
				if (mapa[x][y-1] != 'M' && mapa[x][y-1] != '#' && mapa[x][y-1] != '|' && mapa[x][y-1] != 'I' && mapa[x][y-1] != '$' && mapa[x][y-1] != ']' && mapa[x][y-1] != '[' && mapa[x][y-1] != '=') {
					mapa[x][y] = '.';
					y--;
					checkpos();
					mapa[x][y] = '@';
				}
				moverinim();
				game();
			break;
			
			case 68: //D
				if (mapa[x][y+1] != 'M' && mapa[x][y+1] != '#' && mapa[x][y+1] != '|' && mapa[x][y+1] != 'I' && mapa[x][y+1] != '$' && mapa[x][y+1] != ']' && mapa[x][y+1] != '[' && mapa[x][y+1] != '=') {
					mapa[x][y] = '.';
					y++;
					checkpos();
					mapa[x][y] = '@';
				}
				moverinim();
				game();
			break;
			
			case 83: //S
				if (mapa[x+1][y] != 'M' && mapa[x+1][y] != '#' && mapa[x+1][y] != '|' && mapa[x+1][y] != 'I' && mapa[x+1][y] != '$' && mapa[x+1][y] != ']' && mapa[x+1][y] != '[' && mapa[x+1][y] != '=') {
					mapa[x][y] = '.';
					x++;
					checkpos();
					mapa[x][y] = '@';
				}
				moverinim();
				game();
			break;
			
			case 87: //W
				if (mapa[x-1][y] != 'M' && mapa[x-1][y] != '#' && mapa[x-1][y] != '|' && mapa[x-1][y] != 'I' && mapa[x-1][y] != '$' && mapa[x-1][y] != ']' && mapa[x-1][y] != '[' && mapa[x-1][y] != '=') {
					mapa[x][y] = '.';
					x--;
					checkpos();
					mapa[x][y] = '@';
				}
				moverinim();
				game();
			break;
			
			case 80:  //P
				SetConsoleTextAttribute(h,4);
				printf("\n\t\t\t\t\t\t ESTA FUNÇÃO SÓ DEVE SER USADA CASO O JOGADOR FIQUE PRESO EM ALGUM LUGAR\n");
				printf("\t\t\t\t\t\t VOCÊ ESTÁ PRESO?\n");
				SetConsoleTextAttribute(h,15);
				printf("\t\t\t\t\t\t 1.SIM  2.NÃO\n");
				
				switch(getch()) {
					
					case 49:
						mapa[x][y] = '.';
						posicionar = 0;		//jogador
						while (posicionar == 0) {
							randoslin = (rand() % 180) + 10;
							randoscol = (rand() % 140) + 30;
							if (mapa[randoslin][randoscol] == '.') {
								x = randoslin;
								y = randoscol;
								mapa[x][y] = '@';
								posicionar = 1;
							}
						}
						
					break;
					
					case 50:
						game();
					break;
					
					default:
						SetConsoleTextAttribute(h,4);
						printf("\n\t\t\t\t\t\t\t!!! Opção Inválida !!!\n");
						SetConsoleTextAttribute(h,15);
						Sleep(500);
						game();
					
					
				}
				
			break;
			
			case 70: 	//F
				keybd_event (VK_MENU, 0x36, 0, 0);
				keybd_event (VK_RETURN, 0x1C, 0, 0);
				keybd_event (VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
				keybd_event (VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
			break;
			
			case 81: 	//Q
				
				if(bomba >= 1) {
					
				/*
				......................
				......................
				........*****.........
				......*********.......
				......****@****.......
				......*********.......
				........*****.........
				......................
				......................
				*/
				
				bomba--;
				
				for(i=-2; i<=2; i++) {
					if(mapa[x-2][y+i] == '#'){
						mapa[x-2][y+i] = '*';
					}
				}				
				
				for(i=-4; i<=4; i++) {
					for(i2=-1;i2<=1;i2++){
						if(mapa[x+i2][y+i] == '#'){
							mapa[x+i2][y+i] = '*'; 
						}	
					}
				}
				
				for(i=-2; i<=2; i++) {
					if(mapa[x+2][y+i] == '#'){
						mapa[x+2][y+i] = '*'; 
					}
				}
				
				for(lin = 0; lin <=200; lin++) {
    				for (col = 0; col <= 200; col++) {
  						if ((col >= 0 && col <=29) || (col >= 170 && col <= 200) || (lin >= 0 && lin <=9) || (lin >= 190 && lin <= 200)) {
							mapa[lin][col] = '#';
						}
					}
 	 			}
				
				printmapa();
				SetConsoleTextAttribute(h,8);
				printf("\t\t\t\t\t\t\t\t            !!! BOOM !!!\n");
				Sleep(1000);
				SetConsoleTextAttribute(h,15);
				
				for(i=-5; i<=5; i++) {
					for(i2=-4;i2<=4;i2++){
						if(mapa[x+i2][y+i] == '*'){
							mapa[x+i2][y+i] = '.'; 
						}	
					}
				}
				
				
				
				} else {
					SetConsoleTextAttribute(h,4);
					printf("\t\t\t\t\t\t\t\t   VOCÊ NÃO TEM MAIS BOMBAS!\n");
					Sleep(1000);
					SetConsoleTextAttribute(h,15);
				}
				
			break;
			
			case 69: 	//E
			if(pocao >= 1 && vida < vidamax) {	
				dano = round(vidamax * 0.2);
				vida = vida + dano;
				if (vida > vidamax) {
					vida = vidamax;
				}
				pocao--;
				printmapa();
				SetConsoleTextAttribute(h,10);
				printf("\t\t\t\t\t\t\t\t\t   CUROU: %.0f!\n", dano);
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			} else if(vida == vidamax) {
				SetConsoleTextAttribute(h,12);
				printf("\t\t\t\t\t\t\t\t   SUA VIDA ESTÁ NO MÁXIMO!\n");
				Sleep(1000);
				SetConsoleTextAttribute(h,15);
			} else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\t\t   VOCÊ NÃO TEM MAIS POÇÕES!\n");
				Sleep(1000);
				SetConsoleTextAttribute(h,15);
			}
			
			break;
			
			case 44: 	//< (,)
				if(optn2 == 1) {
					if(optn3 != 1){
						optn3--;	
					}
					game();
				} else {
					SetConsoleTextAttribute(h,4);
					printf("\n\t\t\t\t\t\t\t!!! Opção Inválida !!!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(500);
					game();
				}
			break;
			
			case 46: 	//> (.)
				if(optn2 == 1) {
					if(optn3 < 4){
						optn3++;	
					}
					game();
				} else {
					SetConsoleTextAttribute(h,4);
					printf("\n\t\t\t\t\t\t\t!!! Opção Inválida !!!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(500);
					game();
				}
			break;
			
			default:
				SetConsoleTextAttribute(h,4);
				printf("\n\t\t\t\t\t\t\t!!! Opção Inválida !!!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(500);
				game();
		}

}

void checkpos() {
	
	switch(mapa[x][y]) {
		
	case 44:  //,
		chave++;
		mapa[x][y] = '@';
	break;
	
	case 43:  //+
		mapa[x][y] = '@';
		SetConsoleTextAttribute(h,14);
		printf("\t\t\t\t\t\t\t\t\t NÍVEL CONCLUÍDO!\n\n");
		SetConsoleTextAttribute(h,15);
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
		andar++;
		saida = 10;
		main();
	break;
	
	case 111:  //o
		randoo = (rand() % 20) + 5;
		mapa[x][y] = '@';
		printmapa();
		Sleep(200);
		ouro = ouro + randoo;
		randoo = 0;
	break;
	
	case 79:  //O
		randoo = (rand() % 30) + 20;
		mapa[x][y] = '@';
		printmapa();
		Sleep(200);
		ouro = ouro + randoo;
		randoo = 0;
	break;
	
	case 48:  //0
		randoo = (rand() % 50) + 50;
		mapa[x][y] = '@';
		printmapa();
		Sleep(200);
		ouro = ouro + randoo;
		randoo = 0;
	break;
	
	case 81:  //Q
		mapa[x][y] = '@';
		bomba++;
		printmapa();
		SetConsoleTextAttribute(h,14);
		printf("\t\t\t\t\t\t\t\t        +1 BOMBA\n");
		SetConsoleTextAttribute(h,15);
		Sleep(1000);	
	break;
	
	case 112:  //p
		mapa[x][y] = '@';
		if(pocao < pocaom) {
			pocao++;
			printmapa();
			SetConsoleTextAttribute(h,14);
			printf("\t\t\t\t\t\t\t\t        +1 POCÃO\n");
			SetConsoleTextAttribute(h,15);
			Sleep(1000);	
		} else {
			SetConsoleTextAttribute(h,12);
			printf("\t\t\t\t\t\t\t\tSUA MOCHILA JÁ ESTÁ CHEIA DE POÇÕES!\n");
			SetConsoleTextAttribute(h,10);
			Sleep(1000);
			printf("\t\t\t\t\t\t\t\tVOCÊ BEBE A POÇÃO PARA NÃO DESPERDIÇAR!\n");
			SetConsoleTextAttribute(h,15);
			Sleep(1000);
			
			dano = round(vidamax * 0.2);
			vida = vida + dano;
			if (vida > vidamax) {
				vida = vidamax;
			}
			
			SetConsoleTextAttribute(h,10);
			printf("\t\t\t\t\t\t\t\tCUROU: %.0f!\n", dano);
			SetConsoleTextAttribute(h,15);
			Sleep(1500);
		}
		
	break;
	
	case 66:  //B
		rando = (rand() % 10);
		if (rando != 0) {
			randoo = (rand() % 75) + 75;
			mapa[x][y] = '@';
			printmapa();
			Sleep(500);
			ouro = ouro + randoo;
			randoo = 0;
		} else {
			
			Sleep(1000);
			SetConsoleTextAttribute(h,12);
			printf("\n\t\t\t\t\t\t\tO baú! Está... se movendo??\n");
			Sleep(2000);
			SetConsoleTextAttribute(h,4);
			printf("\t\t\t\t\t\t\tEle tem uMA BOCA!! E DENTES!!!\n");
			Sleep(2000);
			
			direc = x;
			direc2 = y;
			
			inim[100].poslin = x;
			inim[100].poscol = y;
			rando = (rand() % 3) + 25;
			inim[100].vida = rando;
			
			rando = (rand() % 3);
			inim[100].lvl = ceil((lvl + rando) * 1.3);
			
			if (inim[posicionar].lvl < 0) {
				inim[posicionar].lvl = 0;
			}
			
			inim[100].vida = inim[100].vida + (inim[100].lvl * 4);
			inim[100].vidamax = inim[100].vida;
			rando = (rand() % 3) + 1;
			inim[posicionar].a[0] = rando;
			rando = (rand() % 3) + 1;
			inim[posicionar].a[1] = rando;
			rando = (rand() % 3) + 1;
			inim[posicionar].a[2] = rando;
			rando = (rand() % 3) + 1;
			inim[posicionar].a[3] = rando;
			
			if(inim[100].a[0] == 0 && inim[100].a[1] == 0 && inim[100].a[2] == 0 && inim[100].a[3] == 0) {
				inim[100].a[0] = 1;
			}
			
			inim[100].ataque = 6 + (inim[100].lvl * 1.4);
			
			if(mapa[x-1][y] == '.'){
				x--;
			} else if(mapa[x+1][y] == '.'){
				x++;
			} else if(mapa[x][y+1] == '.'){
				y++;
			} else if(mapa[x][y-1] == '.'){
				y--;
			}
			
			SetConsoleTextAttribute(h,4);
			printf("\t\t\t\t\t\t\tÉ UM MÍMICO!!!\n");
			SetConsoleTextAttribute(h,15);
			Sleep(1000);
			mapa[x][y] = '@';
			optn = 0;
			turno = 2;
			mimic = 1;
			fflush(stdin);
			batalha();
			
		}
		
	break;
	
	}
	
	if (mapa[x-1][y] == 'I' || mapa[x][y-1] == 'I' || mapa[x+1][y] == 'I' || mapa[x][y+1] == 'I') {
		mapa[x][y] = '@'; //lin, col
		printmapa();
		
		if (mapa[x-1][y] == 'I') {
			direc = x-1;
			direc2 = y;
		} else if (mapa[x][y-1] == 'I') {
			direc2 = y-1;
			direc = x;
		} else if (mapa[x+1][y] == 'I') {
			direc = x+1;
			direc2 = y;
		} else if (mapa[x][y+1] == 'I') {
			direc2 = y+1;
			direc = x;
		}
		
		for (i = 0; i <= 100; i++) {
		
			if (mapa[direc][direc2] == 'I' && item[i].poslin == direc && item[i].poscol == direc2) {
					
				printf("\t\t\t\t\t\tITEM:\n");
				SetConsoleTextAttribute(h,14);
				itemshow();
				SetConsoleTextAttribute(h,15);
				printf("\n\t\t\t\t\t\tDESEJA SUBSTITUIR SEU ITEM ATUAL?\n");
				printf("\t\t\t\t\t\t1.SIM  2.NÃO\n");
				item:
				switch(getch()) {
					
					case 49:
						mapa[direc][direc2] = '.';
						if(item[i].equip2[0] == -1) {
							a[0] = item[i].equip1[0];
							a[1] = item[i].equip1[1];
							upg[0] = ' ';
							upg[1] = ' ';
							
							if(a[0] == 1) {
								dura[0] = durat[0];
							} else if(a[0] == 2) {
								dura[0] = durat[1];
							} else if(a[0] == 3) {
								dura[0] = durat[2];
							} else {
								dura[0] = 1;
							}
	
							if(a[1] == 1) {
								dura[1] = durat[3];
							} else if(a[1] == 2) {
								dura[1] = durat[4];
							} else if(a[1] == 3) {
								dura[1] = durat[5];
							} else {
								dura[1] = 1;
							}
							
						} else {
							a[2] = item[i].equip1[2];
							a[3] = item[i].equip1[3];
							upg[2] = ' ';
							upg[3] = ' ';
							
							if(a[2] == 1) {
								dura[2] = durat[6];
							} else if(a[2] == 2) {
								dura[2] = durat[7];
							} else if(a[2] == 3) {
								dura[2] = durat[8];
							} else {
								dura[2] = 1;
							}
	
							if(a[3] == 1) {
								dura[3] = durat[9];
							} else if(a[3] == 2) {
								dura[3] = durat[10];
							} else if(a[3] == 3) {
								dura[3] = durat[11];
							} else {
								dura[3] = 1;
							}
							
						}
								
					break;
					
					case 50:
						game();
					break;
					
					default:
						goto item;
					
				}
				game();
			}
		}
	}
	
	
	if (mapa[x][y-1] == '[' || mapa[x][y+1] == ']') {
		mapa[x][y] = '@';
		printmapa();
		Sleep(200);
		loja = 1;
		mercante();
	}
	
	
	if ((mapa[x][y-1] == '|' || mapa[x][y+1] == '|') && chave > 0) {
		chave--;
		
		if(mapa[x][y-1] == '|'){ 			//a esquerda
			mapa[x][y-1] = '.';
			mapa[x+1][y-1] = '.';
			mapa[x+2][y-1] = '.';
			mapa[x+3][y-1] = '.';
			mapa[x-1][y-1] = '.';
			mapa[x-2][y-1] = '.';
			mapa[x-3][y-1] = '.';	
			mapa[x][y-20] = '.';
			mapa[x+1][y-20] = '.';
			mapa[x+2][y-20] = '.';
			mapa[x+3][y-20] = '.';
			mapa[x-1][y-20] = '.';
			mapa[x-2][y-20] = '.';
			mapa[x-3][y-20] = '.';	
		} else if (mapa[x][y+1] == '|') { 	//a direita
			mapa[x][y+1] = '.';
			mapa[x+1][y+1] = '.';
			mapa[x+2][y+1] = '.';
			mapa[x+3][y+1] = '.';
			mapa[x-1][y+1] = '.';
			mapa[x-2][y+1] = '.';
			mapa[x-3][y+1] = '.';
			mapa[x][y+20] = '.';
			mapa[x+1][y+20] = '.';
			mapa[x+2][y+20] = '.';
			mapa[x+3][y+20] = '.';
			mapa[x-1][y+20] = '.';
			mapa[x-2][y+20] = '.';
			mapa[x-3][y+20] = '.';
				
		}
		
	}
	
	if (mapa[x-1][y] == 'M' || mapa[x][y-1] == 'M' || mapa[x+1][y] == 'M' || mapa[x][y+1] == 'M') {
		mapa[x][y] = '@'; //lin, col
		printmapa();
		
		if (mapa[x-1][y] == 'M') {
			direc = x-1;
			direc2 = y;
		} else if (mapa[x][y-1] == 'M') {
			direc2 = y-1;
			direc = x;
		} else if (mapa[x+1][y] == 'M') {
			direc = x+1;
			direc2 = y;
		} else if (mapa[x][y+1] == 'M') {
			direc2 = y+1;
			direc = x;
		}
		
		SetConsoleTextAttribute(h,12);
		printf("\t\t\t\t\t\t\t\t      !!! BATALHA !!!\n");
		SetConsoleTextAttribute(h,15);
		rando = (rand() % 3);
		
		if (rando == 0 || rando == 1) {
			SetConsoleTextAttribute(h,14);
			printf("\t\t\t\t\t\t\t\t   VOCÊ ATACA PRIMEIRO\n");
			SetConsoleTextAttribute(h,15);
			turno = 1;
		} else {
			SetConsoleTextAttribute(h,12);
			printf("\t\t\t\t\t\t\t\t   INIMIGO ATACA PRIMEIRO\n");
			SetConsoleTextAttribute(h,15);
			turno = 2;
		}
		printf("\n\n\t\t\t\t\t\t\t   ");
		optn = 0;
		system("pause");
		fflush(stdin);
		batalha();
	}
}


void gerarmapa() {
	
	for(lin = 0; lin <=200; lin++) {
    		for (col = 0; col <= 200; col++) {
  				if ((col >= 0 && col <=29) || (col >= 170 && col <= 200) || (lin >= 0 && lin <=9) || (lin >= 190 && lin <= 200)) {
  		
					mapa[lin][col] = '#';
		
				} else {
					mapa[lin][col] = '.';
				}
			}
 	 	}

 	build();
 	
 	//preços da loja e itens disponíveis
 	lojai[0] = 1;
 	lojai[1] = 1;
	lojai[2] = 1;
	
	i2 = (rand() % 100);
	for(i = 30;i<=100;i= i+10){
		if(i2 >= i) {
		lojai[0]++;
		}	
	}
	
	i2 = (rand() % 100);
	for(i = 40;i<=100;i= i+10){
		if(i2 >= i) {
		lojai[1]++;	
		}	
	}
	
	i2 = (rand() % 100);
	for(i = 80;i<=100;i= i+10){
		if(i2 >= i) {
		lojai[2]++;	
		}	
	}
	
 	preco[0] = round(250 + ((andar - 1) * 1.2 * 40));   //bomba
 	preco[1] = round(120 + ((andar - 1) * 1.2 * 25));   //poção
 	preco[2] = round(1000 + ((andar - 1) * 1.2 * 50));  //chave
 	 	
 	posicionar = 0;		//estruturas
	while (posicionar <= 200) {
 		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		rando = (rand() % 2) + 1;
		rando2 = (rand() % 3) + 1;
		
		for(lin = randoslin; lin <= randoslin + rando; lin++) {
    		for(col = randoscol; col <= randoscol + rando2; col++) {
    			if (mapa[lin][col] == '.') {
    				mapa[lin][col] = '#';
    				
				}
			}
		}
		posicionar++;
		if (assistir == 1) {
				x = lin;
				y = col;
				printmapa();
			}
		
	}posicionar = 1;		//saida
 	while (posicionar <= 5) {
 		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		
		if (mapa[randoslin][randoscol] == '.') {
			
			mapa[randoslin][randoscol] = '=';
			mapa[randoslin+1][randoscol] = '=';
			mapa[randoslin][randoscol+1] = '=';
			mapa[randoslin+1][randoscol+1] = '=';
			
			if (assistir == 1) {
				x = randoslin;
				y = randoscol;
				printmapa();
			}
			
			posicionar++;
		}
	
	}
	
 	
 	posicionar = 1;		//chave
 	while (posicionar <= 3) {
 		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		
		if (mapa[randoslin][randoscol] == '.') {
			mapa[randoslin][randoscol] = ',';
			posicionar++;
			
			if (assistir == 1) {
				x = randoslin;
				y = randoscol;
				printmapa();
			}
			
		}
	
	}
	
	posicionar = 1;		//bombas
 	while (posicionar <= 4) {
 		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		
		if (mapa[randoslin][randoscol] == '.') {
			mapa[randoslin][randoscol] = 'Q';
			posicionar++;
			
			if (assistir == 1) {
				x = randoslin;
				y = randoscol;
				printmapa();
			}
			
		}
	
	}
	
	posicionar = 1;		//poções
 	while (posicionar <= 9) {
 		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		
		if (mapa[randoslin][randoscol] == '.') {
			mapa[randoslin][randoscol] = 'p';
			posicionar++;
			
			if (assistir == 1) {
				x = randoslin;
				y = randoscol;
				printmapa();
			}
			
		}
	
	}
	
	posicionar = 1;		//baus
	rando = (rand() % 4) + 2;
 	while (posicionar <= rando) {
 		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		
		if (mapa[randoslin][randoscol] == '.') {
			mapa[randoslin][randoscol] = 'B';
			posicionar++;
			
			if (assistir == 1) {
				x = randoslin;
				y = randoscol;
				printmapa();
			}
			
		}
	
	}
 	
 	posicionar = 1;		//moedas
 	while (posicionar <= 30) {
 		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		
		if (mapa[randoslin][randoscol] == '.') {
			mapa[randoslin][randoscol] = 'o';
			posicionar++;
			
			if (assistir == 1) {
				x = randoslin;
				y = randoscol;
				printmapa();
			}
			
		}
	
	}
	
	posicionar = 1;		//moedas grandes
 	while (posicionar <= 12) {
 		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		
		if (mapa[randoslin][randoscol] == '.') {
			mapa[randoslin][randoscol] = 'O';
			posicionar++;
			
			if (assistir == 1) {
				x = randoslin;
				y = randoscol;
				printmapa();
			}
			
		}
	
	}
	
	posicionar = 1;		//moedas gigantes
 	while (posicionar <= 5) {
 		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		
		if (mapa[randoslin][randoscol] == '.') {
			mapa[randoslin][randoscol] = '0';
			posicionar++;
			
			if (assistir == 1) {
				x = randoslin;
				y = randoscol;
				printmapa();
			}
			
		}
	
	}
	
	posicionar = itcont;	//itens
	while (itcont <= posicionar + 20) {
		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		if (mapa[randoslin][randoscol] == '.') {
			x = randoslin;
			y = randoscol;
			rando = (rand() % 2);
			
			item[itcont].poslin = randoslin;
			item[itcont].poscol = randoscol;
			
			if(rando == 0){
				rando = (rand() % 4);
				item[itcont].equip1[0] = rando;
				rando = (rand() % 4);
				item[itcont].equip1[1] = rando;
				
				item[itcont].equip2[0] = -1;
				item[itcont].equip2[1] = -1;
				
			} else {  //rando == 1
				rando = (rand() % 4);
				item[itcont].equip2[0] = rando;
				rando = (rand() % 4);
				item[itcont].equip2[1] = rando;
				
				item[itcont].equip1[0] = -1;
				item[itcont].equip1[1] = -1;
			}
			mapa[x][y] = 'I';
			itcont++;
			
			if (assistir == 1) {
				x = randoslin;
				y = randoscol;
				printmapa();
			}
			
		}
	}
	
	rando = (rand() % 20) + 30;
	inimcont = rando; 
	inimcontt = inimcont;
	posicionar = 1;		//inimigos
	while (posicionar <= inimcont) {
		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		if (mapa[randoslin][randoscol] == '.') {
			
			inim[posicionar].poslin = randoslin;
			inim[posicionar].poscol = randoscol;
			rando = (rand() % 3) + 17;
			inim[posicionar].vida = rando;
			
			rando = (rand() % 3);
			if (rando == 0 || rando == 1) {
				rando = (rand() % 3);
				inim[posicionar].lvl = round((lvl + rando) * 1.16);
			} else if (rando == 2) {
				rando = (rand() % 2);
				inim[posicionar].lvl = floor((lvl - rando) * 1.05);
			}
			
			if (inim[posicionar].lvl <= 0) {
				inim[posicionar].lvl = 1;
			}
			
			inim[posicionar].vida = round(inim[posicionar].vida + (inim[posicionar].lvl * 3.7));
			inim[posicionar].vidamax = inim[posicionar].vida;
			rando = (rand() % 4);
			inim[posicionar].a[0] = rando;
			rando = (rand() % 4);
			inim[posicionar].a[1] = rando;
			rando = (rand() % 4);
			inim[posicionar].a[2] = rando;
			rando = (rand() % 4);
			inim[posicionar].a[3] = rando;
			
			if(inim[posicionar].a[0] == 0 && inim[posicionar].a[1] == 0 && inim[posicionar].a[2] == 0 && inim[posicionar].a[3] == 0) {
				inim[posicionar].a[0] = 1;
			}
			
			inim[posicionar].ataque = 5 + (inim[posicionar].lvl * 1.42);
			mapa[randoslin][randoscol] = 'M';
			posicionar++;
			
			if (assistir == 1) {
				x = randoslin;
				y = randoscol;
				printmapa();
			}
			
		}
	}
	
	posicionar = 0;		//jogador
	while (posicionar == 0) {
		randoslin = (rand() % 180) + 10;
		randoscol = (rand() % 140) + 30;
		if (mapa[randoslin][randoscol] == '.') {
			x = randoslin;
			y = randoscol;
			mapa[x][y] = '@';
			posicionar = 1;
		}
	}
	
}

void moverinim() {
	
	if (wait == 0) {
		wait = 1;
	for (i = 0; i <= inimcontt; i++) {
		
		if(inim[i].poslin >= x-12 && inim[i].poslin <= x+12 && inim[i].poscol >= y-32 && inim[i].poscol <= y+32){
			
			if (inim[i].vida > 0) {
			
			rando = (rand() % 4);
			
			if (rando == 0 && (mapa[inim[i].poslin][inim[i].poscol-1] == '.')) {		   //A
				mapa[inim[i].poslin][inim[i].poscol] = '.';
				inim[i].poscol--;
				mapa[inim[i].poslin][inim[i].poscol] = 'M';
			} else if (rando == 1 && (mapa[inim[i].poslin][inim[i].poscol+1] == '.')) {    //D
				mapa[inim[i].poslin][inim[i].poscol] = '.';
				inim[i].poscol++;
				mapa[inim[i].poslin][inim[i].poscol] = 'M';
			} else if (rando == 2 && (mapa[inim[i].poslin-1][inim[i].poscol] == '.')) {    //W
				mapa[inim[i].poslin][inim[i].poscol] = '.';
				inim[i].poslin--;
				mapa[inim[i].poslin][inim[i].poscol] = 'M';
			} else if (rando == 3 && (mapa[inim[i].poslin+1][inim[i].poscol] == '.')) {    //S
				mapa[inim[i].poslin][inim[i].poscol] = '.';
				inim[i].poslin++;
				mapa[inim[i].poslin][inim[i].poscol] = 'M';
			}
			checkpos();
			
			}
			
		}
		
	}
		
	} else {
		wait = 0;
	}
	
}

void printmapa() {

system("cls");

if (randoo > 0) {
	printf("\n\t\t\t\t\t\t\t\t\t    ANDAR: %d\n", andar);
	SetConsoleTextAttribute(h,14);
	printf("\t\t\t\t\t\t\t    %s\n", name);
	SetConsoleTextAttribute(h,6);
	printf("\t\t\t\t\t\t\t\t\t      +%d\n", randoo);
	SetConsoleTextAttribute(h,15);
} else {
	printf("\n\t\t\t\t\t\t\t\t\t    ANDAR: %d\n", andar);
	SetConsoleTextAttribute(h,14);
	printf("\t\t\t\t\t\t\t    %s\n\n", name);
	SetConsoleTextAttribute(h,15);
}

	if (chave > 0) {
		printf("\t\t\t\t\t\t\t    VIDA: %.0f/%.0f  OURO: %d  NIVEL: %d  XP: %.0f/%.0f\n", vida, vidamax, ouro, lvl, xp, lxp);
		printf("\t\t\t\t\t\t\t\t\t   CHAVES: %d\n",chave);
	} else {
		printf("\t\t\t\t\t\t\t    VIDA: %.0f/%.0f  OURO: %d  NIVEL: %d  XP: %.0f/%.0f\n\n", vida, vidamax, ouro, lvl, xp, lxp);
	}

    for(i = x-10; i <= x+10; i++){
    	printf("\t\t\t\t\t\t");
        for(i2 = y-30 ; i2 <= y+30; i2++){
        	switch(mapa[i][i2]) {
        		
        	case 77:	//M
        		SetConsoleTextAttribute(h,4);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 81:	//Q
        		SetConsoleTextAttribute(h,8);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 64:	//@
        		SetConsoleTextAttribute(h,14);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 73:	//I
        		SetConsoleTextAttribute(h,14);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 112:	//p
        		SetConsoleTextAttribute(h,11);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 111:	//o
        		SetConsoleTextAttribute(h,6);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 79:	//O
        		SetConsoleTextAttribute(h,6);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 48:	//0
        		SetConsoleTextAttribute(h,6);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 66:	//B
        		SetConsoleTextAttribute(h,6);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 44:	//.
        		SetConsoleTextAttribute(h,8);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 46:	//,
        		SetConsoleTextAttribute(h,8);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 43:	//+
        		SetConsoleTextAttribute(h,10);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 91:	//]
        		SetConsoleTextAttribute(h,14);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
        	case 93:	//[
        		SetConsoleTextAttribute(h,14);
        		printf("%c", mapa[i][i2]);
        		SetConsoleTextAttribute(h,15);
        	break;
        	
			default:
				printf("%c", mapa[i][i2]);
			}
        }
        printf("\n");
    }
    printf("\n");
    
}
    
    
int main(){
	
	time_t t;
	srand((unsigned) time(&t));
	setlocale(LC_ALL, "Portuguese");
	SetConsoleTextAttribute(h,15);
	
	if(itcont == 0){
		
		keybd_event (VK_MENU, 0x36, 0, 0);
		keybd_event (VK_RETURN, 0x1C, 0, 0);
		keybd_event (VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
		keybd_event (VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
		
		//system("mode 650");
	}
	
	itcont = 1;
	
	if (strcmp(name, "rfy5qy53qyft43ygvba") == 0) {
		i = 0;
	while (i == 0) {
		
		if(a[0] == 1) {
			dura[0] = durat[0];
		} else if(a[0] == 2) {
			dura[0] = durat[1];
		} else if(a[0] == 3) {
			dura[0] = durat[2];
		} else {
			dura[0] = 1;
		}
	
		if(a[1] == 1) {
			dura[1] = durat[3];
		} else if(a[1] == 2) {
			dura[1] = durat[4];
		} else if(a[1] == 3) {
			dura[1] = durat[5];
		} else {
			dura[1] = 1;
		}
		
		if(a[2] == 1) {
			dura[2] = durat[6];
		} else if(a[2] == 2) {
			dura[2] = durat[7];
		} else if(a[2] == 3) {
			dura[2] = durat[8];
		} else {
			dura[2] = 1;
		}
		
		if(a[3] == 1) {
			dura[3] = durat[9];
		} else if(a[3] == 2) {
			dura[3] = durat[10];
		} else if(a[3] == 3) {
			dura[3] = durat[11];
		} else {
			dura[3] = 1;
		}
		
		vidamax = 30 + (3.4 * (lvl-1));
		ataque = 10 + (1.6 * (lvl-1));
		vida = vidamax;
		printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\tROGUEMON\n\n");
	    printf("\t\t\t\t\t\t\t\tQual seu nome aventureiro(a)?\n");
	    printf("\t\t\t\t\t\t\t\t->");
    	scanf("%s", name);
    	printf("\n\t\t\t\t\t\t\t\tTem certeza?");
    	printf("\n\t\t\t\t\t\t\t\t1.SIM  2.MUDAR");
    	switch(toupper(getch())) {
    		
    		case 49:
    			i = 1;
    		break;
    		
    		case 50:
    			system("cls");
    			strcpy(name, "rfy5qy53qyft43ygvba");
    			main();
    		break;
    		
    		default:
    			printf("\t\t\t\t\t\t!!! Opção Inválida !!!\n");
    	}
    	intro();
    	system("cls");
	}
	}
	
	printf("\n\n\n\n\t\t\t\t\t\t\t\t\tCARREGANDO JOGO...\n");
	//Beep(600, 700);	//faz um beep, n sei como usar direito e preguiça
	Sleep(500);
	gerarmapa();

	while(1) {
		game();
	}

	return 0;
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





