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

using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

float m = 18; //dinheiro inicial = 18
float f=1, xf=1, b=0, xb=1, t=0, xt=1, mg=0, xmg=1, cd=0, xcd=1, cr=0, xcr=1, pc=0, xpc=1, sl=0, xsl=1; // EX: f = quantas fazendas, xf = multilicador de produção
float xan = 1, qa = 0, ma; //multiplicador dos anjos, quantidade de anjos, anjos momentâneos
float ft, bt, tt, mgt, cdt, crt, pct, slt, xc=1; // total de construções e mult-escavações
float cf=10, cb=125, ct=600, cmg=1800, ccd=5600, ccr=38000, cpc=450000, csl=7300000; //custo base das construções
float prod, tprod = m, proxa = 50000, escv = 20000, achado, desc=1, qesc = 0; // Produção, produção total, proximo anjo, custo escavação, dinheiro escavado, desconto, quant escavaçoes
float xpf=1, xpb=1, xpt=1, xpmg=1, xpcd=1, xpcr=1, xppc=1, xpsl=1, displayan, multisl=1; // marcos de progressão
int optn = 0, rando, count=0, snk=1, randoslin, randoscol, score = 0, maxscore = 0;

int counter();
void comida();
void grow();

int dirc = 1, dirc2 = 1, lastdirc = 1, crescer = 3, lin, col, lastx, lasty, wait = 0;
    	
int x=10,y=30;		//mapa[lin][col]

char mapa[20][60];

//FILE *file;

void screen() {
	
	count++;
	
	if(count >= 3 || snk == 1){
	
	xan = 1 + (qa * 0.01);
	
	ft = f * (xf * xpf * 2);
	bt = b * (xb * xpb * 6);
	tt = t * (xt * xpt * 20);
	mgt = mg * (xmg * xpmg * 65);
	cdt = cd * (xcd * xpcd * 200);
	crt = cr * (xcr * xpcr * 650);
	pct = pc * (xpc * xppc * 2000);
	slt = sl * (xsl * xpsl * 8500);
	
	prod = (ft + bt + tt + mgt + cdt + crt + pct + slt) * xan * xc * multisl;
	m = m + prod;
	tprod = tprod + prod;
	displayan = proxa - tprod;
	
		if(count == 3){
			count = 0;
		}
	}
	
	//count = count + 1;
	
	if (tprod >= proxa) {
    	ma = ma + 1;
    	proxa = ((qa+ma) * (qa+ma+1)) * 85000;
    	
    	// matematica antiga dos anjos: proxa = proxa + (((qa+ma)+1) * 40000) * 2.15;
    	
	}
	
	system("cls");
	printf("\n");
	SetConsoleTextAttribute(h,11);
	printf("                                  CLICKER v0.8.8\n");
	SetConsoleTextAttribute(h,15);
	printf("*************************************************************************************\n");
	printf("                             Dinheiro:");
	SetConsoleTextAttribute(h,10);
	printf(" $%.2f \n", m);
	SetConsoleTextAttribute(h,15);
	printf("                             Produção:");
	SetConsoleTextAttribute(h,2);
	printf(" $%.2f \n", prod);
	SetConsoleTextAttribute(h,15);
	printf("*************************************************************************************\n");
	SetConsoleTextAttribute(h,14);
	printf("                                 Anjos Ativos: %.0f \n", qa);
	SetConsoleTextAttribute(h,15);
	printf("                    Fazendas:........%.0f  |  Ferreiros:.........%.0f\n", f, b);
	printf("                    Tabernas:........%.0f  |  Torres de Mago:....%.0f\n", t, mg);
	printf("                    Catedrais:.......%.0f  |  Castelos Reais:....%.0f\n", cd, cr);
	printf("                    Portais do Céu:..%.0f  |  Salões Lendários:..%.0f\n", pc, sl);
	printf("\n");
	printf("                            Produção Total:   $%.2f\n", tprod);
	if (displayan <= 0) {
		printf("                            Próximo anjo em:  $0 (Anjos a receber: %.0f)\n", ma);
	} else {
		printf("                            Próximo anjo em:  $%.2f\n", displayan);
	}
	printf("\n");
	printf("-------------------------------------------------------------------------------------\n");
	printf("\n");
}


void printmapa() {
	printf("                     W=CIMA | A=ESQUERDA | S=BAIXO | D=DIREITA\n");
    int i, i2;
    for(i = 0 ; i < 21 ; i++){
        printf("           ");
        for(i2 = 0 ; i2 < 61; i2++){
            printf("%c", mapa[i][i2]);
        }
        printf("\n");
    }
     
}




void tabela() {
	
	printf("         1.Fazenda........(");
	SetConsoleTextAttribute(h,2);
	printf("$%.2f",cf);
	SetConsoleTextAttribute(h,15);
	printf(")  |  2.Ferreiro........(");
	SetConsoleTextAttribute(h,2);
	printf("$%.2f",cb);
	SetConsoleTextAttribute(h,15);
	printf(")\n");
	printf("         3.Taberna........(");
	SetConsoleTextAttribute(h,2);
	printf("$%.2f",ct);
	SetConsoleTextAttribute(h,15);
	printf(")  |  4.Torre do Mago...(");
	SetConsoleTextAttribute(h,2);
	printf("$%.2f",cmg);
	SetConsoleTextAttribute(h,15);
	printf(")\n");
	printf("         5.Catedral.......(");
	SetConsoleTextAttribute(h,2);
	printf("$%.2f",ccd);
	SetConsoleTextAttribute(h,15);
	printf(")  |  6.Castelo Real....(");
	SetConsoleTextAttribute(h,2);
	printf("$%.2f",ccr);
	SetConsoleTextAttribute(h,15);
	printf(")\n");
	printf("         7.Portal do Céu..(");
	SetConsoleTextAttribute(h,2);
	printf("$%.2f",cpc);
	SetConsoleTextAttribute(h,15);
	printf(")  |  8.Salão Lendário..(");
	SetConsoleTextAttribute(h,2);
	printf("$%.2f",csl);
	SetConsoleTextAttribute(h,15);
	printf(")\n");
	printf("                                   9.VOLTAR\n");
	printf("\n");
	
}

void option() {    

if (optn > 0) {
	if (optn == 1){
		goto comprar;
	}
	if (optn == 2){
		goto sacrificar;
	}
	if (optn == 3){
		goto escavar;
	}
	if (optn == 4) {
		goto snake;
	}
	
} else {

    switch(getch()){    
    
    case 49:
	comprar:
    optn = 1;
	while(!kbhit() && optn == 1){     //COMPRAR
    
	screen();
	tabela();
	Sleep(1000);
	
        }
	
	switch(getch()){
        	case 49:
        		if (m > cf && optn == 1){
        			f = f + 1; // +1 fazenda
        			m = m - cf; // pagamento
        			cf = (cf * 1.155) * desc; // escalador do preço
        			screen();
        			tabela();
        			printf("                                 ++FAZENDA++\n");
        			printf("\n");
        			
        			if (f == 5) {
        				xpf = xpf + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", f);
        				Sleep(800);
					} 
					if (f == 25) {
        				xpf = xpf + 0.6;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+60%% PRODUÇÃO) !!!!\n", f);
        				Sleep(800);
					} 
					if (f == 75) {
        				xpf = xpf + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", f);
        				Sleep(800);
					} 
					if (f == 150) {
        				xpf = xpf + 1.5;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+150%% PRODUÇÃO) !!!!\n", f);
        				Sleep(800);
					} 
					if (f == 200) {
        				xpf = xpf + 2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+200%% PRODUÇÃO) !!!!\n", f);
        				Sleep(800);
					}
					if (f == 300) {
        				xpf = xpf + 1.5;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+150%% PRODUÇÃO) !!!!\n", f);
        				Sleep(800);
					} 
					if (f == 400) {
        				xpf = xpf + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", f);
        				Sleep(800);
					} 
					if (f == 500) {
        				xpf = xpf + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", f);
        				Sleep(800);
					} 
					if (f == 1000) {
        				xpf = xpf + 3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+300%% PRODUÇÃO) !!!!\n", f);
        				Sleep(800);
					} 
					
					Sleep(200);
        			option();
        			
				} else if (optn == 1){
					screen();
					tabela();
					SetConsoleTextAttribute(h,4);
					printf("                         !!! NÃO HÁ DINHEIRO SUFICIENTE !!!\n");
					SetConsoleTextAttribute(h,15);
					printf("\n");
					Sleep(200);
					option();
				
				}
        	break;
        	
        	case 50:
        		if (m > cb && optn == 1){
        			b = b + 1;
        			m = m - cb;
        			cb = (cb * 1.155) * desc;
        			screen();
        			tabela();
        			printf("                                 ++FERREIRO++\n");
        			printf("\n");
        			
        			if (b == 5) {
        				xpb = xpb + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", b);
        				Sleep(800);
					}
					if (b == 25) {
        				xpb = xpb + 0.6;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+60%% PRODUÇÃO) !!!!\n", b);
        				Sleep(800);
					}
					if (b == 75) {
        				xpb = xpb + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", b);
        				Sleep(800);
					}
					if (b == 150) {
        				xpb = xpb + 1.5;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+150%% PRODUÇÃO) !!!!\n", b);
        				Sleep(800);
					}
					if (b == 200) {
        				xpb = xpb + 2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+200%% PRODUÇÃO) !!!!\n", b);
        				Sleep(800);
					}
					if (b == 300) {
        				xpb = xpb + 1.5;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+150%% PRODUÇÃO) !!!!\n", b);
        				Sleep(800);
					}
					if (b == 400) {
        				xpb = xpb + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", b);
        				Sleep(800);
					}
					if (b == 500) {
        				xpb = xpb + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", b);
        				Sleep(800);
					}
					if (b == 1000) {
        				xpb = xpb + 3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+300%% PRODUÇÃO) !!!!\n", b);
        				Sleep(800);
					}
        			
        			Sleep(200);
        			option();
				} else if (optn == 1) {
					screen();
					tabela();
					SetConsoleTextAttribute(h,4);
					printf("                         !!! NÃO HÁ DINHEIRO SUFICIENTE !!!\n");
					SetConsoleTextAttribute(h,15);
					printf("\n");
					Sleep(200);
					option();
				
				}
        		
        	break;
        	
        	case 51:
        		if (m > ct && optn == 1){
        			t = t + 1;
        			m = m - ct;
        			ct = (ct * 1.155) * desc;
        			screen();
        			tabela();
        			printf("                                  ++TABERNA++\n");
        			printf("\n");
        			
        			if (t == 5) {
        				xpt = xpt + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", t);
        				Sleep(800);
					} 
					if (t == 25) {
        				xpt = xpt + 0.6;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+60%% PRODUÇÃO) !!!!\n", t);
        				Sleep(800);
					} 
					if (t == 75) {
        				xpt = xpt + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", t);
        				Sleep(800);
					} 
					if (t == 150) {
        				xpt = xpt + 1.5;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+150%% PRODUÇÃO) !!!!\n", t);
        				Sleep(800);
					} 
					if (t == 200) {
        				xpt = xpt + 2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+200%% PRODUÇÃO) !!!!\n", t);
        				Sleep(800);
					}
					if (t == 300) {
        				xpt = xpt + 1.5;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+150%% PRODUÇÃO) !!!!\n", t);
        				Sleep(800);
					} 
					if (t == 400) {
        				xpt = xpt + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", t);
        				Sleep(800);
					} 
					if (t == 500) {
        				xpt = xpt + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", t);
        				Sleep(800);
					} 
					if (t == 1000) {
        				xpt = xpt + 3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+300%% PRODUÇÃO) !!!!\n", t);
        				Sleep(800);
					} 
        			
        			Sleep(200);
        			option();
				} else if (optn == 1) {
					screen();
					tabela();
					SetConsoleTextAttribute(h,4);
					printf("                         !!! NÃO HÁ DINHEIRO SUFICIENTE !!!\n");
					SetConsoleTextAttribute(h,15);
					printf("\n");
					Sleep(200);
					option();
				
				}
        		
        	break;
        	
        	case 52:
        		if (m > cmg && optn == 1){
        			mg = mg + 1;
        			m = m - cmg;
        			cmg = (cmg * 1.155) * desc;
        			screen();
        			tabela();
        			printf("                               ++TORRE DO MAGO++\n");
        			printf("\n");
        			
        			if (mg == 5) {
        				xpmg = xpmg + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", mg);
        				Sleep(800);
					} 
					if (mg == 25) {
        				xpmg = xpmg + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", mg);
        				Sleep(800);
					} 
					if (mg == 75) {
        				xpmg = xpmg + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", mg);
        				Sleep(800);
					} 
					if (mg == 150) {
        				xpmg = xpmg + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", mg);
        				Sleep(800);
					} 
					if (mg == 200) {
        				xpmg = xpmg + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", mg);
        				Sleep(800);
					}
					if (mg == 300) {
        				xpmg = xpmg + 0.9;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+90%% PRODUÇÃO) !!!!\n", mg);
        				Sleep(800);
					} 
					if (mg == 400) {
        				xpmg = xpmg + 0.9;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+90%% PRODUÇÃO) !!!!\n", mg);
        				Sleep(800);
					} 
					if (mg == 500) {
        				xpmg = xpmg + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", mg);
        				Sleep(800);     
					} 
					if (mg == 1000) {
        				xpmg = xpmg + 3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+300%% PRODUÇÃO) !!!!\n", mg);
        				Sleep(800);
					} 
					
        			Sleep(200);
        			option();
				} else if (optn == 1) {
					screen();
					tabela();
					SetConsoleTextAttribute(h,4);
					printf("                         !!! NÃO HÁ DINHEIRO SUFICIENTE !!!\n");
					SetConsoleTextAttribute(h,15);
					printf("\n");
					Sleep(200);
					option();
				
				}
			case 53:
        		if (m > ccd && optn == 1){
        			cd = cd + 1;
        			m = m - ccd;
        			ccd = (ccd * 1.165) * desc;
        			screen();
        			tabela();
        			printf("                                 ++CATEDRAL++\n");
        			printf("\n");
        			
        			if (cd == 5) {
        				xpcd = xpcd + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", cd);
        				Sleep(800);
					} 
					if (cd == 25) {
        				xpcd = xpcd + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", cd);
        				Sleep(800);
					} 
					if (cd == 75) {
        				xpcd = xpcd + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", cd);
        				Sleep(800);
					} 
					if (cd == 150) {
        				xpcd = xpcd + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", cd);
        				Sleep(800);
					} 
					if (cd == 200) {
        				xpcd = xpcd + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", cd);
        				Sleep(800);
					}
					if (cd == 300) {
        				xpcd = xpcd + 0.9;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+90%% PRODUÇÃO) !!!!\n", cd);
        				Sleep(800);
					} 
					if (cd == 400) {
        				xpcd = xpcd + 0.9;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+90%% PRODUÇÃO) !!!!\n", cd);
        				Sleep(800);
					} 
					if (cd == 500) {
        				xpcd = xpcd + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", cd);
        				Sleep(800);
					} 
					if (cd == 1000) {
        				xpcd = xpcd + 3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+300%% PRODUÇÃO) !!!!\n", cd);
        				Sleep(800);
					} 
        			
        			Sleep(200);
        			option();
				} else if (optn == 1) {
					screen();
					tabela();
					SetConsoleTextAttribute(h,4);
					printf("                         !!! NÃO HÁ DINHEIRO SUFICIENTE !!!\n");
					SetConsoleTextAttribute(h,15);
					printf("\n");
					Sleep(200);
					option();
				
				}
        	break;
        	
        	case 54:
        		if (m > ccr && optn == 1){
        			cr = cr + 1;
        			m = m - ccr;
        			ccr = (ccr * 1.165) * desc;
        			screen();
        			tabela();
        			printf("                                ++CASTELO REAL++\n");
        			printf("\n");
        			
        			if (cr == 5) {
        				xpcr = xpcr + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", cr);
        				Sleep(800);
					} 
					if (cr == 25) {
        				xpcr = xpcr + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", cr);
        				Sleep(800);
					} 
					if (cr == 75) {
        				xpcr = xpcr + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", cr);
        				Sleep(800);
					} 
					if (cr == 150) {
        				xpcr = xpcr + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", cr);
        				Sleep(800);
					} 
					if (cr == 200) {
        				xpcr = xpcr + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+30%% PRODUÇÃO) !!!!\n", cr);
        				Sleep(800);
					}
					if (cr == 300) {
        				xpcr = xpcr + 0.9;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+90%% PRODUÇÃO) !!!!\n", cr);
        				Sleep(800);
					} 
					if (cr == 400) {
        				xpcr = xpcr + 0.9;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+90%% PRODUÇÃO) !!!!\n", cr);
        				Sleep(800);
					} 
					if (cr == 500) {
        				xpcr = xpcr + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+120%% PRODUÇÃO) !!!!\n", cr);
        				Sleep(800);
					} 
					if (cr == 1000) {
        				xpcr = xpcr + 3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+300%% PRODUÇÃO) !!!!\n", cr);
        				Sleep(800);
					} 
        			
        			Sleep(200);
        			option();
				} else if (optn == 1) {
					screen();
					tabela();
					SetConsoleTextAttribute(h,4);
					printf("                         !!! NÃO HÁ DINHEIRO SUFICIENTE !!!\n");
					SetConsoleTextAttribute(h,15);
					printf("\n");
					Sleep(200);
					option();
				
				}
        	break;
        	
        	case 55:
        		if (m > cpc && optn == 1){
        			pc = pc + 1;
        			m = m - cpc;
        			cpc = (cpc * 1.175) * desc;
        			screen();
        			tabela();
        			printf("                               ++PORTAL DO CÉU++\n");
        			printf("\n");
        			
        			if (pc == 5) {
        				xppc = xppc + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+100%% PRODUÇÃO) !!!!\n", pc);
        				Sleep(800);
					} 
					if (pc == 25) {
        				xppc = xppc + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+100%% PRODUÇÃO) !!!!\n", pc);
        				Sleep(800);
					} 
					if (pc == 75) {
        				xppc = xppc + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+100%% PRODUÇÃO) !!!!\n", pc);
        				Sleep(800);
					} 
					if (pc == 150) {
        				xppc = xppc + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+100%% PRODUÇÃO) !!!!\n", pc);
        				Sleep(800);
					} 
					if (pc == 200) {
        				xppc = xppc + 0.3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+100%% PRODUÇÃO) !!!!\n", pc);
        				Sleep(800);
					}
					if (pc == 300) {
        				xppc = xppc + 0.9;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+200%% PRODUÇÃO) !!!!\n", pc);
        				Sleep(800);
					} 
					if (pc == 400) {
        				xppc = xppc + 0.9;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+200%% PRODUÇÃO) !!!!\n", pc);
        				Sleep(800);
					} 
					if (pc == 500) {
        				xppc = xppc + 1.2;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+350%% PRODUÇÃO) !!!!\n", pc);
        				Sleep(800);
					} 
					if (pc == 1000) {
        				xppc = xppc + 3;
        				printf("                 !!!! MARCO ATINGIDO (%.0f) (+500%% PRODUÇÃO) !!!!\n", pc);
        				Sleep(800);
					} 
        			
        			Sleep(200);
        			option();
				} else if (optn == 1) {
					screen();
					tabela();
					SetConsoleTextAttribute(h,4);
					printf("                         !!! NÃO HÁ DINHEIRO SUFICIENTE !!!\n");
					SetConsoleTextAttribute(h,15);
					printf("\n");
					Sleep(200);
					option();
				
				}
        		
        	break;
        	
        	case 56:
        		if (m > csl && optn == 1){
        			sl = sl + 1;
        			m = m - csl;
        			csl = (csl * 1.185) * desc;
        			screen();
        			tabela();
        			printf("                               ++SALÃO LENDÁRIO++\n");
        			printf("\n");
        			
        			if (sl == 5) {
        				xpsl = xpsl + 0.75;
        				multisl = multisl + 0.01;
        				printf("            !!!! MARCO ATINGIDO (%.0f) (+75%% PRODUÇÃO) (+1%% GERAL) !!!!\n", sl);
        				Sleep(800);
					} 
					if (sl == 25) {
        				xpsl = xpsl + 0.75;
        				multisl = multisl + 0.01;
        				printf("            !!!! MARCO ATINGIDO (%.0f) (+75%% PRODUÇÃO) (+1%% GERAL) !!!!\n", sl);
        				Sleep(800);
					} 
					if (sl == 75) {
        				xpsl = xpsl + 0.75;
        				multisl = multisl + 0.01;
        				printf("            !!!! MARCO ATINGIDO (%.0f) (+75%% PRODUÇÃO) (+1%% GERAL) !!!!\n", sl);
        				Sleep(800);
					} 
					if (sl == 150) {
        				xpsl = xpsl + 0.75;
        				multisl = multisl + 0.01;
        				printf("            !!!! MARCO ATINGIDO (%.0f) (+75%% PRODUÇÃO) (+1%% GERAL) !!!!\n", sl);
        				Sleep(800);
					} 
					if (sl == 200) {
        				xpsl = xpsl + 0.75;
        				multisl = multisl + 0.01;
        				printf("            !!!! MARCO ATINGIDO (%.0f) (+75%% PRODUÇÃO) (+1%% GERAL) !!!!\n", sl);
        				Sleep(800);
					}
					if (sl == 300) {
        				xpsl = xpsl + 1.5;
        				multisl = multisl + 0.02;
        				printf("            !!!! MARCO ATINGIDO (%.0f) (+150%% PRODUÇÃO) (+2%% GERAL) !!!!\n", sl);
        				Sleep(800);
					} 
					if (sl == 400) {
        				xpsl = xpsl + 1.5;
        				multisl = multisl + 0.02;
        				printf("            !!!! MARCO ATINGIDO (%.0f) (+150%% PRODUÇÃO) (+2%% GERAL) !!!!\n", sl);
        				Sleep(800);
					} 
					if (sl == 500) {
        				xpsl = xpsl + 2;
        				multisl = multisl + 0.02;
        				printf("            !!!! MARCO ATINGIDO (%.0f) (+200%% PRODUÇÃO) (+2%% GERAL) !!!!\n", sl);
        				Sleep(800);
					} 
					if (sl == 1000) {
        				xpsl = xpsl + 3;
        				multisl = multisl + 0.02;
        				printf("            !!!! MARCO ATINGIDO (%.0f) (+300%% PRODUÇÃO) (+2%% GERAL) !!!!\n", sl);
        				Sleep(800);
					} 
        			
        			Sleep(200);
        			option();
				} else if (optn == 1) {
					screen();
					tabela();
					SetConsoleTextAttribute(h,4);
					printf("                         !!! NÃO HÁ DINHEIRO SUFICIENTE !!!\n");
					SetConsoleTextAttribute(h,15);
					printf("\n");
					Sleep(200);
					option();
				
				}
        		
        	break;
        	
        	case 57:
        		printf("                                   Voltando...\n");
        		optn = 0;
				fflush(stdin);
				Sleep(100);
				counter();
        		
        		
        	break;
        	
        	default:
        		screen();
        		tabela();
        		SetConsoleTextAttribute(h,4);
        		printf("                                Opção Inválida\n");
        		SetConsoleTextAttribute(h,15);
        		Sleep(200);
        		option();
        	
		}
	break;
    
    case 50:
    sacrificar:
    optn = 2;
	while(!kbhit() && optn == 2){     //SACRIFICAR
    
	screen();
	SetConsoleTextAttribute(h,14);
	printf("                                 Você tem: %.0f Anjos\n", qa);
	SetConsoleTextAttribute(h,15);
	printf("               Deseja reiniciar seu progresso para receber %.0f anjos?\n", ma);
	printf("\n");
	printf("                   Cada anjo aumenta sua produção total em 1%%\n");
	printf("                  Não há perda de anjos ao sacrificar, só ganho!\n");
	printf("                Relíquias adquiridas não são perdidas ao sacrificar!\n");
	printf("\n");
	printf("                              1.SACRIFICAR  2.VOLTAR\n");
	
	Sleep(1000);
	
        }
    switch(getch()){
    
		case 49:
			printf("                     QUE O SACRIFÍCIO COMEÇE!!!!!!!\n");
			Sleep(1300);
			f = 0;
			b = 0;
			t = 0;
			mg = 0;
			cd = 0;
			cr = 0;
			pc = 0;
			sl = 0;
			screen();
			printf("                     CONSTRUÇÕES ANIQUILADAS!!\n");
			Sleep(1300);
			m = 0;
			screen();
			printf("                     DINHEIRO PULVERIZADO!!!!\n");
			Sleep(1500);
			tprod = 0;
			screen();
			printf("                     PRODUÇÃO ESQUECIDA!!!!!\n");
			Sleep(1500);
			screen();
			printf("                     SACRIFÍCIO CONCLUÍDO!!!!!!\n");
			Sleep(2000);
			f = 1;
			m = 18;
			qa = qa + ma;
			ma = 0;
			cf = 10;
			cb = 125;
			ct = 600; 
			cmg = 1800;
			ccd = 5600;
			ccr = 38000;
			cpc = 450000;
			csl = 7300000;
			tprod = 18;
			xpf = 1;
			xpb = 1;
			xpt = 1;
			xpmg = 1;
			xpcd = 1;
			xpcr = 1;
			xppc = 1;
			xpsl = 1;
			optn = 0;
			fflush(stdin);
			counter();
			
		break;
		
		case 50:
			printf("\n");
			printf("                                   Voltando...\n");
			optn = 0;
			fflush(stdin);
			Sleep(100);
			counter();
			
		break;
		
		default:
        		screen();
        		SetConsoleTextAttribute(h,14);
        		printf("                                 Você tem: %.0f Anjos\n", qa);
        		SetConsoleTextAttribute(h,15);
				printf("               Deseja reiniciar seu progresso para receber %.0f anjos?\n", ma);
				printf("\n");
				printf("                   Cada anjo aumenta sua produção total em 1%%\n");
				printf("                  Não há perda de anjos ao sacrificar, só ganho!\n");
				printf("                Relíquias adquiridas não são perdidas ao sacrificar!\n");
				printf("\n");
				printf("                              1.SACRIFICAR  2.VOLTAR\n");
				printf("\n");
				SetConsoleTextAttribute(h,4);
        		printf("                                 Opção Inválida\n");
        		SetConsoleTextAttribute(h,15);
        		Sleep(200);
        		option();
		
    }
        
	 
	break;
	
	 	 
    
    case 51:
    escavar:
    optn = 3;
	while(!kbhit() && optn == 3){     //ESCAVAR
	
    screen();
    printf("                     Deseja escavar para tentar achar relíquias?\n");
    printf("            Relíquias dão boosts permanentes na produção de suas construções\n");
    printf("               Também podem dar descontos ou boost na sua produção total\n");
    printf("                  Ao escavar, também é possível encontrar tesouros!\n");
    printf("                          Você já escavou %.0f vezes\n", qesc);
    printf("                           Deseja escavar? (", escv);
    SetConsoleTextAttribute(h,2);
    printf("$%.2f", escv);
    SetConsoleTextAttribute(h,15);
    printf(")\n");
    printf("\n");
    printf("                                1.ESCAVAR\n");
    printf("                                2.VOLTAR\n");
    printf("                                3.MINHAS RELÍQUIAS\n");
    
	
	Sleep(1000);
	
        }
        
    switch(getch()){
    
		case 49:
			
			if (m > escv){
        			m = m - escv;
        			qesc = qesc + 1;
					rando = (rand() % 1000);
        			
        			if (rando >= 0 && rando <= 150) {
        				//reliquia
        				
        				screen();
        				
        				rando = (rand() % 10);
        					
						if (rando == 0) {
							printf("                     Durante suas escavações, você encontra uma relíquia!!\n");
							SetConsoleTextAttribute(h,14);
							printf("                                  Mística Relíquia Dedo-Verde\n");
							SetConsoleTextAttribute(h,15);
							printf("                                  +5%% PRODUÇÃO DE FAZENDAS\n");
        					xf = xf + 0.05;
        					escv = (escv * 1.30) * desc;
						} else if (rando == 1) {
							printf("                     Durante suas escavações, você encontra uma relíquia!!\n");
							SetConsoleTextAttribute(h,14);
							printf("                                 Antiga Relíquia Ferro-Forte\n");
							SetConsoleTextAttribute(h,15);
							printf("                                 +5%% PRODUÇÃO DE FERREIROS\n");
        					xb = xb + 0.05;
        					escv = (escv * 1.30) * desc;
						} else if (rando == 2) {
							printf("                     Durante suas escavações, você encontra uma relíquia!!\n");
							SetConsoleTextAttribute(h,14);
							printf("                                 Louca Relíquia da Bebedeira\n");
							SetConsoleTextAttribute(h,15);
							printf("                                  +5%% PRODUÇÃO DE TABERNAS\n");
        					xt = xt + 0.05;
        					escv = (escv * 1.30) * desc;
						} else if (rando == 3) {
							printf("                     Durante suas escavações, você encontra uma relíquia!!\n");
							SetConsoleTextAttribute(h,14);
							printf("                                Mágica Relíquia Da Feitiçaria\n");
							SetConsoleTextAttribute(h,15);
							printf("                               +5%% PRODUÇÃO DE TORRES DE MAGO\n");
        					xmg = xmg + 0.05;
        					escv = (escv * 1.30) * desc;
						} else if (rando == 4) {
							printf("                     Durante suas escavações, você encontra uma relíquia!!\n");
							SetConsoleTextAttribute(h,14);
							printf("                               Inabalável Relíquia Do Santo\n");
							SetConsoleTextAttribute(h,15);
							printf("                                +5%% PRODUÇÃO DE CATEDRAIS\n");
        					xcd = xcd + 0.05;
        					escv = (escv * 1.30) * desc;
						} else if (rando == 5) {
							printf("                     Durante suas escavações, você encontra uma relíquia!!\n");
							SetConsoleTextAttribute(h,14);
							printf("                                 Indestrutível Relíquia Real\n");
							SetConsoleTextAttribute(h,15);
							printf("                               +5%% PRODUÇÃO DE CASTELOS REAIS\n");
        					xcr = xcr + 0.05;
        					escv = (escv * 1.30) * desc;
						} else if (rando == 6) {
							printf("                     Durante suas escavações, você encontra uma relíquia!!\n");
							SetConsoleTextAttribute(h,14);
							printf("                                Celestial Relíquia Do Paraíso\n");
							SetConsoleTextAttribute(h,15);
							printf("                               +5%% PRODUÇÃO DE PORTAIS DO CÉU\n");
        					xpc = xpc + 0.05;
        					escv = (escv * 1.30) * desc;
						} else if (rando == 7) {
							printf("                     Durante suas escavações, você encontra uma relíquia!!\n");
							SetConsoleTextAttribute(h,14);
							printf("                               Inesquecível Relíquia Dos Heróis\n");
							SetConsoleTextAttribute(h,15);
							printf("                              +5%% PRODUÇÃO DE SALÕES DAS LENDAS\n");
        					xsl = xsl + 0.05;
        					escv = (escv * 1.30) * desc;
						} else if (rando == 8) {
							printf("                     Durante suas escavações, você encontra uma relíquia!!\n");
							SetConsoleTextAttribute(h,14);
							printf("                                  Farta Relíquia Dos Lucros\n");
							SetConsoleTextAttribute(h,15);
							printf("                                     +1%% PRODUÇÃO GERAL\n");
        					xc = xc + 0.01;
        					escv = (escv * 1.30) * desc;
						} else if (rando == 9) {
							
        					if (desc == 0.9) {
        					
        					rando = (rand() % 100);
        					
        					if (rando >= 0 && rando <= 49) { //pequeno
        						
        						screen();
        						achado = prod * 30;
        						printf("                     Durante suas escavações, você encontra um tesouro!\n");
        						printf("                                 Era um tesouro pequeno..\n");
        						
							} else if (rando >= 50 && rando <= 75) { //medio
								
								screen();
								achado = prod * 60;
								printf("                     Durante suas escavações, você encontra um tesouro!\n");
								printf("                                   Era um tesouro médio.\n");
								
							} else if (rando >= 76 && rando <= 89) { //grande
								
								screen();
								achado = prod * 90;
								printf("                     Durante suas escavações, você encontra um tesouro!\n");
								printf("                                  Era um tesouro ");
								SetConsoleTextAttribute(h,12);
								printf("grande");
								SetConsoleTextAttribute(h,15);
								printf("!\n");
								
							} else { //GIGANTESCO
								
								screen();
								achado = prod * 300;
								printf("                     Durante suas escavações, você encontra um tesouro!\n");
								printf("                                    ELE É ");
								SetConsoleTextAttribute(h,4);
								printf("GIGANTESCO");
								SetConsoleTextAttribute(h,15);
								printf("!!!\n");
							}
        					
							m = m + achado;
							tprod = tprod + achado;
							displayan = proxa - achado;
							escv = (escv * 1.30) * desc;
						
							printf("                             Você encontrou ");
							SetConsoleTextAttribute(h,2);
							printf("$%.2f", achado);
							SetConsoleTextAttribute(h,15);
							printf("!\n");
        						
							} else {
								desc = 0.9;
								printf("                     Durante suas escavações, você encontra uma relíquia!!\n");
								SetConsoleTextAttribute(h,14);
								printf("                               Lendária Relíquia do Desconto!!\n");
								SetConsoleTextAttribute(h,15);
								printf("                                  10%% DE DESCONTO EM TUDO\n");
								cf = cf * desc;
								cb = cb * desc;
								ct = ct * desc;
								cmg = cmg * desc;
								ccd = ccd * desc;
								crt = crt * desc;
								cpc = cpc * desc;
								csl = csl * desc;
								escv = (escv * 1.30) - (escv * 0.1);
								
							}
						} else {
							screen();
							printf("                   Infelizmente a equipe de mineração não encontrou nada\n");
							printf("                              Mais sorte da próxima vez...\n");
							if (desc == 1) {
								escv = (escv * 1.11);
							} else {
								escv = (escv * 1.11) - (escv * 0.1);
							}
							
						}
						
						Sleep(5000);
        				
					} else if (rando >=300 && rando <= 480) {
						//tesouro
						
						rando = (rand() % 100);
        					
        					if (rando >= 0 && rando <= 49) { //pequeno
        						
        						screen();
        						achado = prod * 30;
        						printf("                     Durante suas escavações, você encontra um tesouro!\n");
        						printf("                                 Era um tesouro pequeno..\n");
        						
							} else if (rando >= 50 && rando <= 82) { //medio
								
								screen();
								achado = prod * 60;
								printf("                     Durante suas escavações, você encontra um tesouro!\n");
								printf("                                   Era um tesouro médio.\n");
								
							} else if (rando >= 83 && rando <= 94) { //grande
								
								screen();
								achado = prod * 90;
								printf("                     Durante suas escavações, você encontra um tesouro!\n");
								printf("                                  Era um tesouro ");
								SetConsoleTextAttribute(h,12);
								printf("grande");
								SetConsoleTextAttribute(h,15);
								printf("!\n");
								
							} else { //GIGANTESCO
								
								screen();
								achado = prod * 300;
								printf("                     Durante suas escavações, você encontra um tesouro!\n");
								printf("                                    ELE É ");
								SetConsoleTextAttribute(h,4);
								printf("GIGANTESCO");
								SetConsoleTextAttribute(h,15);
								printf("!!!\n");
							}
        					
							m = m + achado;
							tprod = tprod + achado;
							displayan = proxa - achado;
							escv = (escv * 1.30) * desc;
						
							printf("                             Você encontrou ");
							SetConsoleTextAttribute(h,2);
							printf("$%.2f", achado);
							SetConsoleTextAttribute(h,15);
							printf("!\n");
							Sleep(5000);
						
					} else {
						//não ganha nada
						
						screen();
						printf("                   Infelizmente a equipe de mineração não encontrou nada\n");
						printf("                              Mais sorte da próxima vez...\n");
						if (desc == 1) {
								escv = (escv * 1.11);
							} else {
								escv = (escv * 1.11) - (escv * 0.1);
							}
						Sleep(1000);
					}
        			
        			option();
				} else {
					screen();
					SetConsoleTextAttribute(h,4);
					printf("                         !!! NÃO HÁ DINHEIRO SUFICIENTE !!!\n");
					SetConsoleTextAttribute(h,15);
					printf("\n");
					Sleep(500);
					option();
				}
		break;
		
		case 50:
			printf("\n");
			printf("                                   Voltando...\n");
			optn = 0;
			fflush(stdin);
			Sleep(100);
			counter();
			
		break;
		
		case 51:
			while(!kbhit() && optn == 3){     //MINHAS RELIQUIAS
   			screen();
   			printf("  Mística Relíquia Dedo-Verde....(%.0f) +%.0f%%  Antiga Relíquia Ferro-Forte.......(%.0f) +%.0f%%\n", (xf - 1)/0.05, ((xf - 1)/0.05)*5, (xb - 1)/0.05, ((xb - 1)/0.05)*5);
   			printf("  Louca Relíquia da Bebedeira....(%.0f) +%.0f%%  Mágica Relíquia Da Feitiçaria.....(%.0f) +%.0f%%\n", (xt - 1)/0.05, ((xt - 1)/0.05)*5, (xmg - 1)/0.05, ((xmg - 1)/0.05)*5);
   			printf("  Inabalável Relíquia Do Santo...(%.0f) +%.0f%%  Indestrutível Relíquia Real.......(%.0f) +%.0f%%\n", (xcd - 1)/0.05, ((xcd - 1)/0.05)*5, (xcr - 1)/0.05, ((xcr - 1)/0.05)*5);
   			printf("  Celestial Relíquia Do Paraíso..(%.0f) +%.0f%%  Inesquecível Relíquia Dos Heróis..(%.0f) +%.0f%%\n", (xpc - 1)/0.05, ((xpc - 1)/0.05)*5, (xsl - 1)/0.05, ((xsl - 1)/0.05)*5);
   			printf("  Farta Relíquia Dos Lucros......(%.0f) +%.0f%%  ", (xc - 1)/0.01, ((xc - 1)/0.01));
   			
   			if (desc != 1) {
   				
   			printf("Lendária Relíquia do Desconto.....(1) +10%%\n");
   			
			} else {
			
		   	printf("Lendária Relíquia do Desconto.....(0) +0%%\n");
			   	
		    }
			   
   			printf("\n");
   			printf("                        PRESSIONE QUALQUER TECLA PARA SAIR\n");
   			Sleep(1000);
   			
   			}
   			printf("\n");
   			printf("                              Voltando...\n");
   			switch(getch()){
   				
   				default:
   					printf("\n");
   					//limpar buffer kbhit()
   			}
   			
			Sleep(100);
			option();
	
			
		break;
        
    break;
    
    default:
        		screen();
        		printf("                     Deseja escavar para tentar achar relíquias?\n");
    			printf("            Relíquias dão boosts permanentes na produção de suas construções\n");
  				printf("               Também podem dar descontos ou boost na sua produção total\n");
    			printf("                  Ao escavar, também é possível encontrar tesouros!\n");
    			printf("                          Você já escavou %.0f vezes\n", qesc);
    			printf("                           Deseja escavar? (", escv);
    			SetConsoleTextAttribute(h,2);
    			printf("$%.2f", escv);
    			SetConsoleTextAttribute(h,15);
    			printf(")\n");
    			printf("\n");
    			printf("                                1.ESCAVAR\n");
    			printf("                                2.VOLTAR\n");
    			printf("                                3.MINHAS RELÍQUIAS\n");
    			printf("\n");     
    			SetConsoleTextAttribute(h,4);
        		printf("                                Opção Inválida\n");
        		SetConsoleTextAttribute(h,15);
        		Sleep(200);
        		option();
    
	}
	
	 case 52:    // SNAKE
    	snake:
    		
    	optn = 4;
    	snk = 0;
    	score = 0;
    	x = 10;
    	y = 30;
    	dirc = 1;
		dirc2 = 1;
		lastdirc = 1;
		crescer = 3;
    	lastx = x; 
		lasty = y;
		wait = 0;
		
  		for(lin = 0; lin <=20 ; lin++) {

    		for (col = 0; col <= 60; col++) {
    	
  				if (col == 0 || col == 60 || lin == 0 || lin == 20) { 
  		
					mapa[lin][col] = '#';
		
				} else {
					mapa[lin][col] = ' ';
				}
			}		
 	 	}
  	
  		
  	
  	comida();
  	comida();
  	comida();
  	
  	snake2:
  	while(!kbhit() && optn == 4){  //GAME LOOP
    
    screen();
    printf("                         1.SAIR   SCORE: %d   HIGHSCORE: %d\n", score, maxscore);
    
    if(dirc == 1 && mapa[x][y-1] != ' ' && mapa[x][y-1] != '@'){
    	
    	printf("                                 !!! GAME OVER !!!\n");
    	snk = 1;
    	if(score > maxscore){
			maxscore = score;
		}
    	printmapa();
    	printf("                   ");
    	system("pause");
    	optn = 0,
		counter();
    	
	}else if(dirc == 2 && mapa[x][y+1] != ' ' && mapa[x][y+1] != '@'){
	
		printf("                                 !!! GAME OVER !!!\n");
		snk = 1;
		if(score > maxscore){
			maxscore = score;
		}
		printmapa();
		printf("                   ");
		system("pause");
		optn = 0,
		counter();
	
	}else if(dirc == 3 && mapa[x+1][y] != ' ' && mapa[x+1][y] != '@'){
		
		printf("                                 !!! GAME OVER !!!\n");
		snk = 1;
		if(score > maxscore){
			maxscore = score;
		}
		printmapa();
		printf("                   ");
		system("pause");
		optn = 0,
		counter();
		
	}else if(dirc == 4 && mapa[x-1][y] != ' ' && mapa[x-1][y] != '@'){ 
		
		printf("                                 !!! GAME OVER !!!\n");
		snk = 1;
		if(score > maxscore){
			maxscore = score;
		}
		printmapa();
		printf("                   ");
		system("pause");
		optn = 0,
		counter();
		
	}
	
	if(dirc == 1 && mapa[x][y-1] == '@'){
		mapa[x][y-1] = ' ';
    	score = score + 100;
    	crescer++;
    	comida();
    	
	}else if(dirc == 2 && mapa[x][y+1] == '@'){
		mapa[x][y+1] = ' ';
		score = score + 100;
		crescer++;
		comida();
	
	}else if(dirc == 3 && mapa[x+1][y] == '@'){
		mapa[x+1][y] = ' ';
		score = score + 100;
		crescer++;
		comida();
		
	}else if(dirc == 4 && mapa[x-1][y] == '@'){ 
		mapa[x-1][y] = ' ';
		score = score + 100;
		crescer++;
		comida();
	
	}
    
    
    if(dirc == 1){ // LETRA A
    
    if (wait == 0){
    	mapa[x][y] = '-';
    } else if (dirc2 == 4) {
		mapa[x][y] = '\\';
		dirc2 = 1;
	} else if (dirc2 == 3) {
		mapa[x][y] = '/';
		dirc2 = 1;
	}
    	mapa[x][y-1] = '>';
    	grow();
    	y--;
    	
    if (wait == 1) {
    	wait = 0;
	}
    	
	}else if(dirc == 2){ // LETRA D
	
	if (wait == 0) {
		mapa[x][y] = '-';
	} else if (dirc2 == 4) {
		mapa[x][y] = '/';
		dirc2 = 2;
	} else if (dirc2 == 3) {
		mapa[x][y] = '\\';
		dirc2 = 2;
	}
    	mapa[x][y+1] = '<';
    	grow();
    	y++;
    	
    if (wait == 1) {
    	wait = 0;
	}
	
	}else if(dirc == 3){ // LETRA S
	
	if (wait == 0) {
		mapa[x][y] = '|';
	} else if (dirc2 == 1) {
		mapa[x][y] = '/';
		dirc2 = 3;
	} else if (dirc2 == 2) {
		mapa[x][y] = '\\';
		dirc2 = 3;
	}
    	mapa[x+1][y] = 'n';
    	grow();
    	x++;
    	
    if (wait == 1) {
    	wait = 0;
	}
	
	}else{	// LETRA W
	if (wait == 0) {
		mapa[x][y] = '|'; 
	} else if (dirc2 == 1) {
		mapa[x][y] = '\\';
		dirc2 = 4;
	} else if (dirc2 == 2) {
		mapa[x][y] = '/';
		dirc2 = 4;
	}
    	mapa[x-1][y] = 'u';
    	grow();
    	x--;
    	
    if (wait == 1) {
    	wait = 0;
	}
		
	}
	
	printmapa();
	Sleep(200);
	
        }
        
    switch(toupper(getch())) {
    	
    	case 49: //numero 1
    		printf("\n");
			printf("                                   Voltando...\n");
			Sleep(100);
			snk = 1;
			counter();
    	break;
    	
    	case 65: //LETRA A
    	
    	if (dirc == 2 || dirc == 1) {
    		fflush(stdin);
    		goto snake2;
		} else {
			dirc = 1;
			wait = 1;
			goto snake2;
		}
    		
    	break;
    	
    	case 68: //LETRA D
    		if (dirc == 1 || dirc == 2) {
    		fflush(stdin);
    		goto snake2;
		} else {
			dirc = 2;
			wait = 1;
			goto snake2;
		}
    	break;
    	
    	case 83: //LETRA S
    		if (dirc == 4 || dirc == 3) {
    		fflush(stdin);
    		goto snake2;
		} else {
			dirc = 3;
			wait = 1;
			goto snake2;
		}
    	break;
    	
    	case 87: //LETRA W
    		if (dirc == 3 || dirc == 4) {
    		fflush(stdin);
    		goto snake2;
		} else {
			dirc = 4;
			wait = 1;
			goto snake2;
		}
    	break;
    	
    	default:
    		SetConsoleTextAttribute(h,4);
        	printf("                                Opção Inválida\n");
        	SetConsoleTextAttribute(h,15);
        	goto snake2;
    		
	}
    	
    break;
    
    default:
    	SetConsoleTextAttribute(h,4);
        printf("                                Opção Inválida\n");
        SetConsoleTextAttribute(h,15);
        counter();
	
	}
	}
}


void comida() {
	
	randoslin = (rand() % 20);
	randoscol = (rand() % 60);
	
		if(mapa[randoslin][randoscol] == ' ') {
	
			mapa[randoslin][randoscol] = '@';
			rando = randoscol = (rand() % 30);
			
			if (rando >=0 && rando <= 4){ //duplicar ~12%
				comida();
			} else {
				
			}
    
		} else {
			comida();
		}
	}


void grow() {

if (crescer != 0) {
		crescer--;
		
	} else if (crescer == 0) {
		
		if (mapa[lastx][lasty] == '-') {	//estava andando na horizontal
			mapa[lastx][lasty] = ' ';
			
			if (mapa[lastx][lasty-1] == '-' || mapa[lastx][lasty-1] == '\\' || mapa[lastx][lasty-1] == '/' || mapa[lastx][lasty-1] == 'u' || mapa[lastx][lasty-1] == 'n' || mapa[lastx][lasty-1] == '<' || mapa[lastx][lasty-1] == '>') {	//olhar para a esquerda
				lasty--;
				lastdirc = 1;
			} else if (mapa[lastx][lasty+1] == '-' || mapa[lastx][lasty+1] == '/' || mapa[lastx][lasty+1] == '\\' || mapa[lastx][lasty+1] == 'u' || mapa[lastx][lasty+1] == 'n' || mapa[lastx][lasty+1] == '>' || mapa[lastx][lasty+1] == '<') {	//olhar para a direita
				lasty++;
				lastdirc = 2;
			}
		} else if (mapa[lastx][lasty] == '|') {	//estava andando na vertical
			mapa[lastx][lasty] = ' ';
			
			if (mapa[lastx-1][lasty] == '|' || mapa[lastx-1][lasty] == '\\' || mapa[lastx-1][lasty] == '/' || mapa[lastx-1][lasty] == 'u' || mapa[lastx-1][lasty] == 'n' || mapa[lastx-1][lasty] == '>' || mapa[lastx-1][lasty] == '<') {	//olhar pra cima
				lastx--;
				lastdirc = 3;
			} else if (mapa[lastx+1][lasty] == '|' || mapa[lastx+1][lasty] == '/' || mapa[lastx+1][lasty] == '\\' || mapa[lastx+1][lasty] == 'u' || mapa[lastx+1][lasty] == 'n' || mapa[lastx+1][lasty] == '>' || mapa[lastx+1][lasty] == '<') {	//olhar pra baixo
				lastx++;
				lastdirc = 4;
			}
			
			
			
		}else if (mapa[lastx][lasty] == '/' && (lastdirc == 1 || lastdirc == 3)) {	//esta virando (vindo de baixo ou da direita)
			mapa[lastx][lasty] = ' ';
			
			if (mapa[lastx+1][lasty] == '|' || mapa[lastx+1][lasty] == '\\' || mapa[lastx+1][lasty] == '/' || mapa[lastx+1][lasty] == 'u' || mapa[lastx+1][lasty] == 'n' || mapa[lastx+1][lasty] == '>' || mapa[lastx+1][lasty] == '<') {	//olhar pra baixo
				lastx++;
				lastdirc = 4;
			} else if (mapa[lastx][lasty+1] == '-' || mapa[lastx][lasty+1] == '/' || mapa[lastx][lasty+1] == '\\' || mapa[lastx][lasty+1] == 'u' || mapa[lastx][lasty+1] == 'n' || mapa[lastx][lasty+1] == '>' || mapa[lastx][lasty+1] == '<') {	//olhar pra direita
				lasty++;
				lastdirc = 2;
			}	
		}else if (mapa[lastx][lasty] == '/' && (lastdirc == 2 || lastdirc == 4)) {	//esta virando (vindo de cima ou da esqurda)
			mapa[lastx][lasty] = ' ';
			
			if (mapa[lastx-1][lasty] == '|' || mapa[lastx-1][lasty] == '\\' || mapa[lastx-1][lasty] == '/' || mapa[lastx-1][lasty] == 'u' || mapa[lastx-1][lasty] == 'n' || mapa[lastx-1][lasty] == '>' || mapa[lastx-1][lasty] == '<') {	//olhar pra cima
				lastx--;
				lastdirc = 3;
			} else if (mapa[lastx][lasty-1] == '-' || mapa[lastx][lasty-1] == '/' || mapa[lastx][lasty-1] == '\\' || mapa[lastx][lasty-1] == 'u' || mapa[lastx][lasty-1] == 'n' || mapa[lastx][lasty-1] == '>' || mapa[lastx][lasty-1] == '<') {	//olhar pra esquerda
				lasty--;
				lastdirc = 1;
			}	
		}else if (mapa[lastx][lasty] == '\\' && (lastdirc == 1 || lastdirc == 4)) {	//esta virando (vindo de cima ou da direita)
			mapa[lastx][lasty] = ' ';
			
			if (mapa[lastx-1][lasty] == '|' || mapa[lastx-1][lasty] == '\\' || mapa[lastx-1][lasty] == '/' || mapa[lastx-1][lasty] == 'u' || mapa[lastx-1][lasty] == 'n' || mapa[lastx-1][lasty] == '>' || mapa[lastx-1][lasty] == '<') {	//olhar pra cima
				lastx--;
				lastdirc = 3;
			} else if (mapa[lastx][lasty+1] == '-' || mapa[lastx][lasty+1] == '/' || mapa[lastx][lasty+1] == '\\' || mapa[lastx][lasty+1] == 'u' || mapa[lastx][lasty+1] == 'n' || mapa[lastx][lasty+1] == '>' || mapa[lastx][lasty+1] == '<') {	//olhar pra direita
				lasty++;
				lastdirc = 2;
			}
		}else if (mapa[lastx][lasty] == '\\' && (lastdirc == 2 || lastdirc == 3)) {	//esta virando (vindo de baixo ou da esqurda)
			mapa[lastx][lasty] = ' ';
			
			if (mapa[lastx+1][lasty] == '|' || mapa[lastx+1][lasty] == '\\' || mapa[lastx+1][lasty] == '/' || mapa[lastx+1][lasty] == 'u' || mapa[lastx+1][lasty] == 'n' || mapa[lastx+1][lasty] == '>' || mapa[lastx+1][lasty] == '<') {	//olhar pra baixo
				lastx++;
				lastdirc = 4;
			} else if (mapa[lastx][lasty-1] == '-' || mapa[lastx][lasty-1] == '/' || mapa[lastx][lasty-1] == '\\' || mapa[lastx][lasty-1] == 'u' || mapa[lastx][lasty-1] == 'n' || mapa[lastx][lasty-1] == '>' || mapa[lastx][lasty-1] == '<') {	//olhar pra esquerda
				lasty--;
				lastdirc = 1;
			}	
		} else if (mapa[lastx][lasty] == 'u' || mapa[lastx][lasty] == 'n' || mapa[lastx][lasty] == '>' || mapa[lastx][lasty] == '<') {
			
			if (lastdirc == 1) {
				mapa[lastx][lasty] = '-';
				
			} else if (lastdirc == 2) {
				mapa[lastx][lasty] = '-';
				
			} else if (lastdirc == 3) {
				mapa[lastx][lasty] = '|';
				
			} else if (lastdirc == 4) {
				mapa[lastx][lasty] = '|';
				
			}
		}
		
	}
}





int counter(){
	optn = 0;
    while(!kbhit() && optn == 0){     //manter no loop enquanto usuário não pressionar nenhuma tecla
    
	screen();
	printf("                  1.Comprar   2.Sacrificar   3.Escavar   4.Snake\n");
	printf("\n");
	printf("                                 Um jogo por: DrT\n");
	printf("\n\n\n");
	SetConsoleTextAttribute(h,8);
	printf("                           Desculpe pela tela piscando.. \n");
	printf("                  Não há muito que eu possa fazer pra mudar isso.\n");
	printf("                        Recomendo não jogar com tela cheia.\n");
	printf("                        Redimencione a tela ao seu conforto.\n");
	printf("                     Use CTRL+Roda do mouse para ajustar o zoom.\n");
	printf("              Deixe um espaço livre para baixo, alguns menus são longos.\n");
	printf("            A linha abaixo representa o quanto de tela você deve enchergar.\n");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n-------------------------------------------------------------------------------------\n");
	SetConsoleTextAttribute(h,15);
	
	Sleep(1000);
	
        }
        
        option();
}




int main(){

	time_t t;
	srand((unsigned) time(&t));

	setlocale(LC_ALL, "Portuguese");

while(1) {
counter();
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










