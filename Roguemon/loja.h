

void mercante() {
	
	while(loja == 1) {
	mercanteim();
	SetConsoleTextAttribute(h,14);
	printf("\t\t\t\t\t\t/===========================================================\\ \n");
	printf("\t\t\t\t\t\t|                Seja muito bem-vindo a loja,               |\n");
	printf("\t\t\t\t\t\t|                     aventureiro(a)...                     |\n");
	printf("\t\t\t\t\t\t\\===========================================================/\n");
	SetConsoleTextAttribute(h,15);
    printf("\n");
	printf("\t\t\t\t\t\t\t  Bombas: %d  Poções: %d/%d  INIMIGOS: %d\n", bomba, pocao, pocaom, inimcont);
	
	printf("\n\t\t\t\t\t\tO QUE DESEJA FAZER?\n");
	printf("\n\t\t\t\t\t\t1.COMPRAR  2.APRIMORAR  3.FORJAR  4.REPARAR  0.SAIR\n");
	
		fflush(stdin);
		switch(toupper(getch())) {
		
			case 48:
				loja = 0;
			break;
		
			case 49:
				comprar();
			break;
		
			case 50:
				aprimorar();
			break;
		
			case 51:
			
			break;
		
			case 52:
				reparar();
			break;
		
			case 70: 	//F
				keybd_event (VK_MENU, 0x36, 0, 0);
				keybd_event (VK_RETURN, 0x1C, 0, 0);
				keybd_event (VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
				keybd_event (VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
			break;
		
			default:
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t!!! Opção Inválida !!!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(200);
		}
	}
	game();
}


void mercanteim(){
	
	if(loja == 1){
	
	system("cls");

if (randoo > 0) {
	printf("\n\t\t\t\t\t\t\t\t\t    ANDAR: %d\n", andar);
	printf("\t\t\t\t\t\t\t    %s\n", name);
	printf("\t\t\t\t\t\t\t\t\t      +%d\n", randoo);
} else {
	printf("\n\t\t\t\t\t\t\t\t\t    ANDAR: %d\n", andar);
	printf("\t\t\t\t\t\t\t    %s\n\n", name);
}

if (chave > 0) {
		printf("\t\t\t\t\t\t\t    VIDA: %.0f/%.0f  OURO: %d  NIVEL: %d  XP: %.0f/%.0f\n", vida, vidamax, ouro, lvl, xp, lxp);
		printf("\t\t\t\t\t\t\t\t\t   CHAVES: %d\n",chave);
	} else {
		printf("\t\t\t\t\t\t\t    VIDA: %.0f/%.0f  OURO: %d  NIVEL: %d  XP: %.0f/%.0f\n\n", vida, vidamax, ouro, lvl, xp, lxp);
	}
	SetConsoleTextAttribute(h,14);
	printf("\t\t\t\t\t\t         /--      ______|__________________        __        \n");
	printf("\t\t\t\t\t\t     ======       \\-----|_________________/        ||        \n");
	printf("\t\t\t\t\t\t    /      \\            ´___________              =  =       \n");
	printf("\t\t\t\t\t\t   |  BOOM  |          _/           \\_           /----\\      \n");
	printf("\t\t\t\t\t\t    \\      /          / ________      \\          \\    /      \n");
	printf("\t\t\t\t\t\t_____======__________| /        \\      \\__________====_______\n");
	printf("\t\t\t\t\t\t                    / |          |     |       ___           \n");
	printf("\t\t\t\t\t\t                   / /        *  \\    |       /   \\          \n");
	printf("\t\t\t\t\t\t                   | |   *        ||  |       \\ __/          \n");
	printf("\t\t\t\t\t\t             _     | |            / \\ _\\       |_            \n");
	printf("\t\t\t\t\t\t        ___//     /   \\__________/   |    _  ( |_)  )        \n");
	printf("\t\t\t\t\t\t      /`/'-`.     |                   |    \\__\\_/_./         \n");
	printf("\t\t\t\t\t\t     ( (    `)   |                    \\            _.---._   \n");
	printf("\t\t\t\t\t\t                 |                    |          /        \\  \n");
	printf("\t\t\t\t\t\t                /                     |         | .-   .-  | \n");
	printf("\t\t\t\t\t\t               |                       \\        \\   )   )  | \n");
	printf("\t\t\t\t\t\t               |                       |         )_  ^`  _/  \n");
	SetConsoleTextAttribute(h,15);

}
}


void comprar() {
	
	if(loja == 1){
	
	mercanteim();
	SetConsoleTextAttribute(h,14);
	printf("\t\t\t\t\t\t/===========================================================\\ \n");
	printf("\t\t\t\t\t\t|        Gaste seu ouro com minhas mercadorias logo..       |\n");
	printf("\t\t\t\t\t\t|     Não vai demorar muito até você não conseguir mais...  |\n");
	printf("\t\t\t\t\t\t\\===========================================================/\n");
	SetConsoleTextAttribute(h,15);
    printf("\n");
	printf("\t\t\t\t\t\t\t  Bombas: %d  Poções: %d/%d  INIMIGOS: %d\n", bomba, pocao, pocaom, inimcont);
	
	printf("\n\t\t\t\t\t\tO QUE DESEJA COMPRAR?\n");
	printf("\t\t\t\t\t\t\t1.BOMBAS (%d) $%.0f\n", lojai[0], preco[0]);
	printf("\t\t\t\t\t\t\t2.POÇÕES (%d) $%.0f\n", lojai[1], preco[1]);
	printf("\t\t\t\t\t\t\t3.CHAVES (%d) $%.0f\n", lojai[2], preco[2]);
	printf("\t\t\t\t\t\t\t0.VOLTAR\n");
	
	fflush(stdin);
	switch(toupper(getch())) {
		
		case 48:
			mercante();
		break;
		
		case 49:
			if(lojai[0] > 0 && ouro >= preco[0]) {
				ouro = ouro - preco[0];
				lojai[0]--;
				bomba++;
				preco[0] = ceil(preco[0] * 1.1);
				SetConsoleTextAttribute(h,10);
				printf("\t\t\t\t\t\t\tVOCÊ COMPROU: BOMBA\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			} else if(lojai[0] > 0 && ouro < preco[0]) {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tVOCÊ NÃO TEM OURO SUFICIENTE!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			}  else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tESSA MERCADORIA ACABOU!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			}
		break;
		
		case 50:
			if(lojai[1] > 0 && pocao < pocaom && ouro >= preco[1]) {
				ouro = ouro - preco[1];
				lojai[1]--;
				pocao++;
				preco[1] = ceil(preco[1] * 1.1);
				SetConsoleTextAttribute(h,10);
				printf("\t\t\t\t\t\t\tVOCÊ COMPROU: POÇÃO\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			} else if(lojai[1] > 0 && pocao >= pocaom && ouro >= preco[1]){
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tVOCÊ ATINGIU O MÁXIMO DESSE ITEM NO INVENTÁRIO!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			} else if(lojai[1] > 0 && ouro < preco[1]) {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tVOCÊ NÃO TEM OURO SUFICIENTE!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			}  else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tESSA MERCADORIA ACABOU!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			}
		break;
		
		case 51:
			if(lojai[2] > 0 && ouro >= preco[2]) {
				ouro = ouro - preco[2];
				lojai[2]--;
				chave++;
				preco[2] = ceil(preco[2] * 1.1);
				SetConsoleTextAttribute(h,10);
				printf("\t\t\t\t\t\t\tVOCÊ COMPROU: CHAVE\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			} else if(lojai[2] > 0 && ouro < preco[2]) {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tVOCÊ NÃO TEM OURO SUFICIENTE!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			} else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tESSA MERCADORIA ACABOU!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			}
		break;
		
		case 70: 	//F
			keybd_event (VK_MENU, 0x36, 0, 0);
			keybd_event (VK_RETURN, 0x1C, 0, 0);
			keybd_event (VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
			keybd_event (VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
		break;
		
		default:
			SetConsoleTextAttribute(h,4);
			printf("\t\t\t\t\t\t!!! Opção Inválida !!!\n");
			SetConsoleTextAttribute(h,15);
			Sleep(200);
		
	}
	comprar();
}
}


void reparar() {
	
	if(loja == 1){
	
	
	mercanteim();
	SetConsoleTextAttribute(h,14);
	printf("\t\t\t\t\t\t/===========================================================\\ \n");
	printf("\t\t\t\t\t\t|           Quando as armas de um guerreiro quebram...       |\n");
	printf("\t\t\t\t\t\t|           Seu espírito quebra junto (e o crânio!)...       |\n");
	printf("\t\t\t\t\t\t\\===========================================================/\n");
	SetConsoleTextAttribute(h,15);
    printf("\n");
	printf("\t\t\t\t\t\t\t  Bombas: %d  Poções: %d/%d  INIMIGOS: %d\n", bomba, pocao, pocaom, inimcont);
	
	printf("\n\t\t\t\t\t\tQUAL ATAQUE/PODER DESEJA REPARAR?\n");
	
	if(a[0] == 1) {
		repa[0] = 1000;
		repad[0] = durat[0];
		printf("\t\t\t\t\t\t1.SOCAR%c %d/%d $%d\n", upg[0], dura[0], durat[0], repa[0]);
	} else if(a[0] == 2) {
		repa[0] = 1200;
		repad[0] = durat[1];
		printf("\t\t\t\t\t\t1.CHUTAR%c %d/%d $%d\n", upg[0], dura[0], durat[1], repa[0]);
	} else if(a[0] == 3) {
		repad[0] = durat[2];
		repa[0] = 1400;
		printf("\t\t\t\t\t\t1.CABEÇADA%c %d/%d $%d\n", upg[0], dura[0], durat[2], repa[0]);
	} else {
		repa[0] = 9999999;
		printf("\t\t\t\t\t\t1.---\n");
	}
	
	
	if(a[1] == 1) {
		repad[1] = durat[3];
		repa[1] = 850;
		printf("\t\t\t\t\t\t2.APUNHALAR%c %d/%d $%d\n", upg[1], dura[1], durat[3], repa[1]);
	} else if(a[1] == 2) {
		repad[1] = durat[4];
		repa[1] = 1300;
		printf("\t\t\t\t\t\t2.FATIAR%c %d/%d $%d\n", upg[1], dura[1], durat[4], repa[1]);
	} else if(a[1] == 3) {
		repad[1] = durat[5];
		repa[1] = 1200;
		printf("\t\t\t\t\t\t2.MARTELAR%c %d/%d $%d\n", upg[1], dura[1], durat[5], repa[1]);
	} else {
		repa[1] = 9999999;
		printf("\t\t\t\t\t\t2.---\n");
	}
	
	
	if(a[2] == 1) {
		repad[2] = durat[6];
		repa[2] = 1100;
		printf("\t\t\t\t\t\t3.PROTEÇÃO DIVINA%c %d/%d $%d\n", upg[2], dura[2], durat[6], repa[2]);
	} else if(a[2] == 2) {
		repad[2] = durat[7];
		repa[2] = 1500;
		printf("\t\t\t\t\t\t3.CURAR FERIDAS%c %d/%d $%d\n", upg[2], dura[2], durat[7], repa[2]);
	} else if(a[2] == 3) {
		repad[2] = durat[8];
		repa[2] = 900;
		printf("\t\t\t\t\t\t3.MILAGRE%c %d/%d $%d\n", upg[2], dura[2], durat[8], repa[2]);
	} else {
		repa[2] = 9999999;
		printf("\t\t\t\t\t\t3.---\n");
	}
	
	
	if(a[3] == 1) {
		repad[3] = durat[9];
		repa[3] = 1250;
		printf("\t\t\t\t\t\t4.VAMPIRISMO%c %d/%d $%d\n", upg[3], dura[3], durat[9], repa[3]);
	} else if(a[3] == 2) {
		repad[3] = durat[10];
		repa[3] = 1000;
		printf("\t\t\t\t\t\t4.ENVENENAR%c %d/%d $%d\n", upg[3], dura[3], durat[10], repa[3]);
	} else if(a[3] == 3) {
		repad[3] = durat[11];
		repa[3] = 800;
		printf("\t\t\t\t\t\t4.ENFURECER%c %d/%d $%d\n", upg[3], dura[3], durat[11], repa[3]);
	} else {
		repa[3] = 9999999;
		printf("\t\t\t\t\t\t4.---\n");
	}
	printf("\t\t\t\t\t\t0.VOLTAR\n");
	
	fflush(stdin);
	switch(toupper(getch())) {
		
		case 48:
			mercante();
		break;
		
		case 49:
			if(a[0] > 0) {
				if(dura[0] < repad[0]) {
					if(ouro >= repa[0]) {
						ouro = ouro - repa[0];
						dura[0] = repad[0];
						
						SetConsoleTextAttribute(h,10);
						printf("\t\t\t\t\t\t\tITEM REPARADO!!\n");
						SetConsoleTextAttribute(h,15);
						Sleep(1000);				
							
					} else {
						SetConsoleTextAttribute(h,4);
						printf("\t\t\t\t\t\t\tVOCÊ NÃO TEM OURO SUFICIENTE!\n");
						SetConsoleTextAttribute(h,15);
						Sleep(1000);
					}
				} else {
					SetConsoleTextAttribute(h,4);
					printf("\t\t\t\t\t\t\tSEU ITEM ESTÁ INTACTO!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1000);
				}
			} else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tSEU ITEM NÃO TEM HABILIDADE TIPO FÍSICO!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			}
		break;
		
		case 50:
			if(a[1] > 0) {
				if(dura[1] < repad[1]) {
					if(ouro >= repa[1]) {
						ouro = ouro - repa[1];
						dura[1] = repad[1];
							
						SetConsoleTextAttribute(h,10);
						printf("\t\t\t\t\t\t\tITEM REPARADO!!\n");
						SetConsoleTextAttribute(h,15);
						Sleep(1000);
										
					} else {
						SetConsoleTextAttribute(h,4);
						printf("\t\t\t\t\t\t\tVOCÊ NÃO TEM OURO SUFICIENTE!\n");
						SetConsoleTextAttribute(h,15);
						Sleep(1000);
					}
				} else {
					SetConsoleTextAttribute(h,4);
					printf("\t\t\t\t\t\t\tSEU ITEM ESTÁ INTACTO!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1000);
				}
			} else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tSEU ITEM NÃO TEM HABILIDADE TIPO ARMA!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			}
		break;
		
		case 51:
			if(a[2] > 0) {
				if(dura[2] < repad[2]) {
					if(ouro >= repa[2]) {
						ouro = ouro - repa[2];
						dura[2] = repad[2];
							
						SetConsoleTextAttribute(h,10);
						printf("\t\t\t\t\t\t\tITEM REPARADO!!\n");
						SetConsoleTextAttribute(h,15);
						Sleep(1000);
									
					} else {
						SetConsoleTextAttribute(h,4);
						printf("\t\t\t\t\t\t\tVOCÊ NÃO TEM OURO SUFICIENTE!\n");
						SetConsoleTextAttribute(h,15);
						Sleep(1000);
					}
				} else {
					SetConsoleTextAttribute(h,4);
					printf("\t\t\t\t\t\t\tSEU ITEM ESTÁ INTACTO!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1000);
				}
			} else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tSEU ITEM NÃO TEM HABILIDADE TIPO DIVINO!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			}
		break;
		
		case 52:
			if(a[3] > 0) {
				if(dura[3] < repad[3]) {
					if(ouro >= repa[3]) {
						ouro = ouro - repa[3];
						dura[3] = repad[3];
							
						SetConsoleTextAttribute(h,10);
						printf("\t\t\t\t\t\t\tITEM REPARADO!!\n");
						SetConsoleTextAttribute(h,15);
						Sleep(1000);		
							
					} else {
						SetConsoleTextAttribute(h,4);
						printf("\t\t\t\t\t\t\tVOCÊ NÃO TEM OURO SUFICIENTE!\n");
						SetConsoleTextAttribute(h,15);
						Sleep(1000);
					}
				} else {
					SetConsoleTextAttribute(h,4);
					printf("\t\t\t\t\t\t\tSEU ITEM ESTÁ INTACTO!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1000);
				}
			} else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tSEU ITEM NÃO TEM HABILIDADE TIPO TREVAS!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			}
		break;
		
		case 70: 	//F
			keybd_event (VK_MENU, 0x36, 0, 0);
			keybd_event (VK_RETURN, 0x1C, 0, 0);
			keybd_event (VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
			keybd_event (VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
		break;
		
		default:
			SetConsoleTextAttribute(h,4);
			printf("\t\t\t\t\t\t!!! Opção Inválida !!!\n");
			SetConsoleTextAttribute(h,15);
			Sleep(200);
		}
	reparar();
}
}



void aprimorar() {
	
	if(loja == 1){
	
	mercanteim();
	SetConsoleTextAttribute(h,14);
	printf("\t\t\t\t\t\t/===========================================================\\ \n");
	printf("\t\t\t\t\t\t|                    Quanto melhor a arma...                |\n");
	printf("\t\t\t\t\t\t|               Melhor será o sangue derramado...           |\n");
	printf("\t\t\t\t\t\t\\===========================================================/\n");
	SetConsoleTextAttribute(h,15);
    printf("\n");
	printf("\t\t\t\t\t\t\t  Bombas: %d  Poções: %d/%d  INIMIGOS: %d\n", bomba, pocao, pocaom, inimcont);
	
	printf("\n\t\t\t\t\t\tQUAL ITEM DESEJA MELHORAR?\n");
	if(upg[0] == ' ') {
		if(a[0] == 1) {
			repa[0] = 3000;
			printf("\t\t\t\t\t\t1.SOCAR%c %d/%d $%d\n", upg[0], dura[0], durat[0], repa[0]);
		} else if(a[0] == 2) {
			repa[0] = 3600;
			printf("\t\t\t\t\t\t1.CHUTAR%c %d/%d $%d\n", upg[0], dura[0], durat[1], repa[0]);
		} else if(a[0] == 3) {
			repa[0] = 4200;
			printf("\t\t\t\t\t\t1.CABEÇADA%c %d/%d $%d\n", upg[0], dura[0], durat[2], repa[0]);
		} else {
			repa[0] = 9999999;
			printf("\t\t\t\t\t\t1.---\n");
		}	
	} else {
		printf("\t\t\t\t\t\t1.ITEM JÁ NO NÍVEL MÁXIMO\n");
	}
	
	if(upg[1] == ' ') {
		if(a[1] == 1) {
			repa[1] = 2550;
			printf("\t\t\t\t\t\t2.APUNHALAR%c %d/%d $%d\n", upg[1], dura[1], durat[3], repa[1]);
		} else if(a[1] == 2) {
			repa[1] = 3900;
			printf("\t\t\t\t\t\t2.FATIAR%c %d/%d $%d\n", upg[1], dura[1], durat[4], repa[1]);
		} else if(a[1] == 3) {
			repa[1] = 3600;
			printf("\t\t\t\t\t\t2.MARTELAR%c %d/%d $%d\n", upg[1], dura[1], durat[5], repa[1]);
		} else {
			repa[1] = 9999999;
			printf("\t\t\t\t\t\t2.---\n");
		}	
			
	} else {
		printf("\t\t\t\t\t\t2.ITEM JÁ NO NÍVEL MÁXIMO\n");
	}
	
	if(upg[2] == ' ') {
		if(a[2] == 1) {
			repa[2] = 3300;
			printf("\t\t\t\t\t\t3.PROTEÇÃO DIVINA%c %d/%d $%d\n", upg[2], dura[2], durat[6], repa[2]);
		} else if(a[2] == 2) {
			repa[2] = 4500;
			printf("\t\t\t\t\t\t3.CURAR FERIDAS%c %d/%d $%d\n", upg[2], dura[2], durat[7], repa[2]);
		} else if(a[2] == 3) {
			repa[2] = 2700;
			printf("\t\t\t\t\t\t3.MILAGRE%c %d/%d $%d\n", upg[2], dura[2], durat[8], repa[2]);
		} else {
			repa[2] = 9999999;
			printf("\t\t\t\t\t\t3.---\n");
		}
				
	} else {
		printf("\t\t\t\t\t\t3.ITEM JÁ NO NÍVEL MÁXIMO\n");
	}
	
	if(upg[3] == ' ') {
		if(a[3] == 1) {
			repa[3] = 3750;
			printf("\t\t\t\t\t\t4.VAMPIRISMO%c %d/%d $%d\n", upg[3], dura[3], durat[9], repa[3]);
		} else if(a[3] == 2) {
			repa[3] = 3000;
			printf("\t\t\t\t\t\t4.ENVENENAR%c %d/%d $%d\n", upg[3], dura[3], durat[10], repa[3]);
		} else if(a[3] == 3) {
			repa[3] = 2400;
			printf("\t\t\t\t\t\t4.ENFURECER%c %d/%d $%d\n", upg[3], dura[3], durat[11], repa[3]);
		} else {
			repa[3] = 9999999;
			printf("\t\t\t\t\t\t4.---\n");
		}	
	} else {
		printf("\t\t\t\t\t\t4.ITEM JÁ NO NÍVEL MÁXIMO\n");
	}
		printf("\t\t\t\t\t\t0.VOLTAR\n");
	
	i = -1;
	fflush(stdin);
	switch(toupper(getch())) {
		
		case 48:
			mercante();
		break;
		
		case 49:
			i = 0;
		break;
		
		case 50:
			i = 1;
		break;
		
		case 51:
			i = 2;
		break;
		
		case 52:
			i = 3;
		break;
		
		case 70: 	//F
			keybd_event (VK_MENU, 0x36, 0, 0);
			keybd_event (VK_RETURN, 0x1C, 0, 0);
			keybd_event (VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
			keybd_event (VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
		break;
		
		default:
			SetConsoleTextAttribute(h,4);
			printf("\t\t\t\t\t\t!!! Opção Inválida !!!\n");
			SetConsoleTextAttribute(h,15);
			Sleep(200);
	
	}
	
	if(i >= 0) {
			if(a[i] > 0) {
				if(upg[i] == ' ') {
					if(ouro >= repa[i]) {
						ouro = ouro - repa[i];
						upg[i] = '+';
						
						SetConsoleTextAttribute(h,10);
						printf("\t\t\t\t\t\t\tITEM APRIMORADO!!\n");
						SetConsoleTextAttribute(h,15);
						Sleep(1000);
							
					} else {
						SetConsoleTextAttribute(h,4);
						printf("\t\t\t\t\t\t\tVOCÊ NÃO TEM OURO SUFICIENTE!\n");
						SetConsoleTextAttribute(h,15);
						Sleep(1000);
					}
				} else {
					SetConsoleTextAttribute(h,4);
					printf("\t\t\t\t\t\t\tSEU ITEM JÁ ESTÁ APRIMORADO!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1000);
				}
			} else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\tSEU ITEM NÃO TEM HABILIDADE TIPO TREVAS!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1000);
			}	
		}
	
	aprimorar();
}
}









  /*

	printf("\t\t\t\t\t\t\t\t\t\t\t         /--      ______|__________________        __        \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t     ======       \-----|_________________/        ||        \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t    /      \            ´___________              =  =       \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t   |  BOOM  |          _/           \_           /----\      \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t    \      /          / ________      \          \    /      \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t_____======__________| /        \      \__________====_______\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t                    / |          |     |       ___           \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t                   / /        *  \    |       /   \          \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t                   | |   *        ||  |       \ __/          \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t             _     | |            / \ _\       |_            \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t        ___//     /   \__________/   |    _  ( |_)  )        \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t      /`/'-`.     |                   |    \__\_/_./         \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t     ( (    `)   |                    \            _.---._   \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t                 |                    |          /        \  \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t                /                     |         | .-   .-  | \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t               |                       \        \   )   )  | \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t               |                       |         )_  ^`  _/  \n");


*/
















