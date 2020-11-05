


int AIshow(int opcao, int a) {
	
	switch(opcao) {
		
		case 1:
			printf("AT%.0f            ", round((3 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 2:
			printf("AT%.0f            ", round((4 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 3:
			printf("AT%.0f            ", round((5 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 4:
			printf("AT%.0f            ", round((7 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 5:
			printf("AT%.0f            ", round((9 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 6:
			printf("AT%.0f           ", round((11 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 7:
			printf("AT%.0f           ", round((13 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 8:
			printf("AT%.0f           ", round((16 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 9:
			printf("AT%.0f           ", round((19 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 10:
			printf("AT%.0f           ", round((23 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 11:
			printf("AT%.0f           ", round((26 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 12:
			printf("AT%.0f           ", round((29 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 13:
			printf("FO1            ");
		break;
		
		case 14:
			printf("FO2            ");
		break;
		
		case 15:
			printf("AT%.0f  FR1      ", round((6 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 16:
			printf("AT%.0f  FR1      ", round((7 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 17:
			printf("AT%.0f  VU1      ", round((9 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 18:
			printf("AT%.0f  VU1      ", round((11 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 19:
			printf("FR2            ");
		break;
		
		case 20:
			printf("VU2            ");
		break;
		
		case 21:
			printf("VU2  FR2       ");
		break;
		
		case 22:
			printf("MAL1           ");
		break;
		
		case 23:
			printf("MAL2           ");
		break;
		
		case 24:
			printf("ES5            ");
		break;
		
		case 25:
			printf("ES7            ");
		break;
		
		case 26:
			printf("ES9            ");
		break;
		
		case 27:
			printf("ES12           ");
		break;
		
		case 28:
			printf("ES5  FR3       ");
		break;
		
		case 29:
			printf("ES7  VU3       ");
		break;
		
		case 30:
			printf("ES9            ");
		break;
		
		case 31:
			printf("AT%.0f  ES12      ", round((6 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 32:
			printf("AT%.0f  ES16      ", round((5 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 33:
			printf("MAL1           ");
		break;
		
		case 34:
			printf("MAL2           ");
		break;
		
		case 35:
			printf("MAL1           ");
		break;
		
		case 36:
			printf("ATORDOADO      ");
		break;
		
		case 37:
			printf("AT%.0f  ES12       ", round((7 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 38:
			printf("FO2  ES6       ");
		break;
		
		case 39:
			printf("FR2            ");
		break;
		
		case 40:
			printf("AT%.0f  MAL1      ", round((7 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 41:
			printf("AT%.0f  MAL2     ", round((11 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 42:
			printf("AT%.0fx2         ", round((11 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 43:
			printf("ES25           ");
		break;
		
		case 44:
			printf("AT%.0f  ES15     ", round((10 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 45:
			printf("AT%.0f  FR5      ", round((10 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 46:
			printf("AT%.0fx2          ", round((5 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 47:
			printf("MAL1           ");
		break;
		
		case 48:
			printf("AT%.0f  VU2      ", round((11 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 49:
			printf("FO2  FR3       ");
		break;
		
		case 50:
			printf("AT%.0fx3          ", round((6 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 51:
			printf("CURA14-TODOS    ");
		break;
		
		case 52:
			printf("FO2-TODOS       ");
		break;
		
		case 53:
			printf("AT%.0f  FR2      ", round((6 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 54:
			printf("AT%.0fx5          ", round((1 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 55:
			printf("AT%.0fx2          ", round((7 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 56:
			printf("FO3  ES9       ");
		break;
		
		case 57:
			printf("AT%.0f           ", round((40 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 58:
			printf("AT%.0f  VU2  FR2 ", round((12 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 59:
			printf("ES20           ");
		break;
		
		case 60:
			printf("AT%.0fx2         ", round((10 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 61:
			printf("AT%.0f           ", round(((inim[0].vida/12 + 1) * 2 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 62:
			printf("AT%.0fx6  MAL3   ", round((3 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 63:
			printf("FO2  ES12      ");
		break;
		
		case 64:
			printf("AT%.0f  MAL1      ", round((8 + inim[a].forca) * (inim[a].fraq * vul)) );
		break;
		
		case 65:
			printf("ES12->(2)        ");
		break;
		
		
	}
	
	
}

int AIturno(int opcao) {
	
	switch(opcao) {
		
		case 1:
			dano(3);
		break;
		
		case 2:
			dano(4);
		break;
		
		case 3:
			dano(5);
		break;
		
		case 4:
			dano(7);
		break;
		
		case 5:
			dano(9);
		break;
		
		case 6:
			dano(11);
		break;
		
		case 7:
			dano(13);
		break;
		
		case 8:
			dano(16);
		break;
		
		case 9:
			dano(19);
		break;
		
		case 10:
			dano(23);
		break;
		
		case 11:
			dano(26);
		break;
		
		case 12:
			dano(29);
		break;
		
		case 13:
			inim[ataque].forca = inim[ataque].forca + 1;
			printf("\tRECEBEU 1 DE ");
			SetConsoleTextAttribute(h,12);
			printf("FORÇA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 14:
			inim[ataque].forca = inim[ataque].forca + 2;
			printf("\tRECEBEU 2 DE ");
			SetConsoleTextAttribute(h,12);
			printf("FORÇA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 15:
			dano(6);
			Dfraq++;
			fraq = 0.75;
			printf("\tAFLINJIDO COM 1 DE ");
			SetConsoleTextAttribute(h,11);
			printf("FRAQUEZA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 16:
			dano(7);
			Dfraq++;
			fraq = 0.75;
			printf("\tAFLINJIDO COM 1 DE ");
			SetConsoleTextAttribute(h,11);
			printf("FRAQUEZA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 17:
			dano(9);
			Dvul++;
			vul = 1.5;
			printf("\tAFLINJIDO COM 1 DE ");
			SetConsoleTextAttribute(h,13);
			printf("VULNERABILIDADE");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 18:
			dano(11);
			Dvul++;
			vul = 1.5;
			printf("\tAFLINJIDO COM 1 DE ");
			SetConsoleTextAttribute(h,13);
			printf("VULNERABILIDADE");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 19:
			Dfraq = Dfraq + 2;
			fraq = 0.75;
			printf("\tAFLINJIDO COM 2 DE ");
			SetConsoleTextAttribute(h,11);
			printf("FRAQUEZA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 20:
			Dvul = Dvul + 2;
			vul = 1.5;
			printf("\tAFLINJIDO COM 2 DE ");
			SetConsoleTextAttribute(h,13);
			printf("VULNERABILIDADE");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 21:
			Dvul = Dvul + 2;
			vul = 1.5;
			Dfraq = Dfraq + 2;
			fraq = 0.75;
			printf("\tAFLINJIDO COM 2 DE ");
			SetConsoleTextAttribute(h,13);
			printf("VULNERABILIDADE");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
			printf("\tAFLINJIDO COM 2 DE ");
			SetConsoleTextAttribute(h,11);
			printf("FRAQUEZA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 22:
			embalea(58);
			printf("\tAMALDIÇOADO COM 1 ATORDOADO POR (%d)%s\n", (ataque+1),inim[ataque].nome);
			printf("\t- Atordoado: [Injogável | Gasta se não jogada]\n");
		break;
		
		case 23:
			embalea(58);
			embalea(58);
			printf("\tAMALDIÇOADO COM 2 ATORDOADO POR (%d)%s\n", (ataque+1),inim[ataque].nome);
			printf("\t- Atordoado: [Injogável | Gasta se não jogada]\n");
		break;
		
		case 24:
			inim[ataque].escudo = inim[ataque].escudo + 5;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 5 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
		break;
		
		case 25:
			inim[ataque].escudo = inim[ataque].escudo + 7;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 7 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
		break;
		
		case 26:
			inim[ataque].escudo = inim[ataque].escudo + 9;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 9 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
		break;
		
		case 27:
			inim[ataque].escudo = inim[ataque].escudo + 12;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 12 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
		break;
		
		case 28:
			inim[ataque].escudo = inim[ataque].escudo + 5;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 5 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);		
			Dfraq = Dfraq + 3;
			fraq = 0.75;
			printf("\tAFLINJIDO COM 3 DE ");
			SetConsoleTextAttribute(h,11);
			printf("FRAQUEZA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 29:
			inim[ataque].escudo = inim[ataque].escudo + 7;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 7 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
			Dvul = Dvul + 3;
			vul = 1.5;
			printf("\tAFLINJIDO COM 3 DE ");
			SetConsoleTextAttribute(h,13);
			printf("VULNERABILIDADE");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 30:
			inim[ataque].escudo = inim[ataque].escudo + 9;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 9 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
			dano(10);
		break;
		
		case 31:
			inim[ataque].escudo = inim[ataque].escudo + 12;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 12 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
			dano(7);
		break;
		
		case 32:
			inim[ataque].escudo = inim[ataque].escudo + 16;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 16 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
			dano(6);
		break;
		
		case 33:
			embalea(57);
			printf("\tAMALDIÇOADO COM 1 FERIDA POR (%d)%s\n", (ataque+1),inim[ataque].nome);
			printf("\t- Ferida: [Injogável]\n");
		break;
		
		case 34:
			embalea(57);
			embalea(57);
			printf("\tAMALDIÇOADO COM 2 FERIDA POR (%d)%s\n", (ataque+1),inim[ataque].nome);
			printf("\t- Ferida: [Injogável]\n");
		break;
		
		case 35:
			embalea(75);
			printf("\tAMALDIÇOADO COM 1 GOSMENTO POR (%d)%s\n", (ataque+1),inim[ataque].nome);
			printf("\t- Gosmento: [Gaste a carta | Custo: @ ]\n");
		break;
		
		case 36:
			printf("\tATORDOADO ->(%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 37:
			inim[ataque].escudo = inim[ataque].escudo + 12;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 12 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
			dano(7);
		break;
		
		case 38:
			inim[ataque].forca = inim[ataque].forca + 2;
			printf("\tRECEBEU 2 DE FORÇA -> (%d)%s\n", (ataque+1),inim[ataque].nome);
			inim[ataque].escudo = inim[ataque].escudo + 6;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 6 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
		break;
		
		case 39:
			Dfraq = Dfraq + 2;
			fraq = 0.75;
			printf("\tAFLINJIDO COM 2 DE ");
			SetConsoleTextAttribute(h,11);
			printf("FRAQUEZA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 40:
			embalea(75);
			printf("\tAMALDIÇOADO COM 1 GOSMENTO POR (%d)%s\n", (ataque+1),inim[ataque].nome);
			printf("\t- Gosmento: [Gaste a carta | Custo: @ ]\n");
			dano(7);
		break;
		
		case 41:
			embalea(75);
			embalea(75);
			printf("\tAMALDIÇOADO COM 2 GOSMENTO POR (%d)%s\n", (ataque+1),inim[ataque].nome);
			printf("\t- Gosmento: [Gaste a carta | Custo: @ ]\n");
			dano(11);
		break;
		
		case 42:
			dano(11);
			dano(11);
		break;
		
		case 43:
			inim[ataque].escudo = inim[ataque].escudo + 25;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 25 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
		break;
		
		case 44:
			inim[ataque].escudo = inim[ataque].escudo + 15;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 15 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
			dano(10);
		break;
		
		case 45:
			dano(10);
			Dfraq = Dfraq + 5;
			fraq = 0.75;
			printf("\tAFLINJIDO COM 5 DE ");
			SetConsoleTextAttribute(h,11);
			printf("FRAQUEZA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 46:
			dano(5);
			dano(5);
		break;
		
		case 47:
			embalea(76);
			printf("\tAMALDIÇOADO COM 1 QUEIMADURA POR: (%d)%s\n", (ataque+1),inim[ataque].nome);
			printf("\t[Receba 2 de Dano ao final do turno | Gasta se não jogada | Injogável]\n");
		break;
		
		case 48:
			dano(11);
			Dvul = Dvul + 2;
			vul = 1.5;
			printf("\tAFLINJIDO COM 2 DE ");
			SetConsoleTextAttribute(h,13);
			printf("VULNERABILIDADE");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 49:
			inim[ataque].forca = inim[ataque].forca + 2;
			printf("\tRECEBEU 2 DE ");
			SetConsoleTextAttribute(h,12);
			printf("FORÇA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
			Dfraq = Dfraq + 3;
			fraq = 0.75;
			printf("\tAFLINJIDO COM 3 DE ");
			SetConsoleTextAttribute(h,11);
			printf("FRAQUEZA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 50:
			dano(6);
			dano(6);
			dano(6);
		break;
		
		case 51:
			
			printf("\tMÁGIA DE CURA [14] CONJURADA POR (%d)%s\n", (ataque+1),inim[ataque].nome);
			Sleep(2000);
			
			for(b=0;b<5;b++){
				
				if(inim[b].tipo > 0){
					inim[b].vida = inim[b].vida + 14;
					
					if(inim[b].vida > inim[b].vidamax){
						inim[b].vida = inim[b].vidamax;
					}	
					
					tabela();
					campo();
					printf("\tCURADO ");
					SetConsoleTextAttribute(h,10);
					printf("14 PONTOS DE VIDA");
					SetConsoleTextAttribute(h,15);
					printf(" -> (%d)%s\n", (b+1),inim[b].nome);
					Sleep(1200);
				}
				
			}
			
		break;
		
		case 52:
			printf("\tMÁGIA DE FORÇA [2] CONJURADA POR (%d)%s\n", (ataque+1),inim[ataque].nome);
			Sleep(2000);
			
			for(b=0;b<5;b++){
				
				if(inim[b].tipo > 0){
					inim[b].forca = inim[b].forca + 2;
					
					tabela();
					campo();
					printf("\tRECEBEU 2 DE ");
					SetConsoleTextAttribute(h,12);
					printf("FORÇA");
					SetConsoleTextAttribute(h,15);
					printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
					Sleep(1200);
				}
				
			}
		break;
		
		case 53:
			dano(6);
			Dfraq = Dfraq + 2;
			fraq = 0.75;
			printf("\tAFLINJIDO COM 2 DE ");
			SetConsoleTextAttribute(h,11);
			printf("FRAQUEZA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 54:
			dano(1);
			dano(1);
			dano(1);
			dano(1);
			dano(1);
		break;
		
		case 55:
			dano(7);
			dano(7);
		break;
		
		case 56:
			printf("\tRECEBEU 3 DE ");
			SetConsoleTextAttribute(h,12);
			printf("FORÇA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
			inim[ataque].escudo = inim[ataque].escudo + 9;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 9 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
		break;
		
		case 57:
			dano(40);
		break;
		
		case 58:
			dano(12);
			Dfraq = Dfraq + 2;
			fraq = 0.75;
			printf("\tAFLINJIDO COM 2 DE ");
			SetConsoleTextAttribute(h,11);
			printf("FRAQUEZA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
			Dvul = Dvul + 2;
			vul = 1.5;
			printf("\tAFLINJIDO COM 2 DE ");
			SetConsoleTextAttribute(h,13);
			printf("VULNERABILIDADE");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
		break;
		
		case 59:
			inim[ataque].escudo = inim[ataque].escudo + 20;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 20 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
		break;
		
		case 60:
			dano(10);
			dano(10);
		break;
		
		case 61:
			dano(round(inim[ataque].vida/12 + 1) * 2);
		break;
		
		case 62:
			dano(3);
			dano(3);
			dano(3);
			dano(3);
			dano(3);
			dano(3);
			embalea(76);
			embalea(76);
			embalea(76);
			printf("\tAMALDIÇOADO COM 3 QUEIMADURA POR: (%d)%s\n", (ataque+1),inim[ataque].nome);
			printf("\t[Receba 2 de Dano ao final do turno | Gasta se não jogada | Injogável]\n");
		break;
		
		case 63:
			printf("\tRECEBEU 2 DE ");
			SetConsoleTextAttribute(h,12);
			printf("FORÇA");
			SetConsoleTextAttribute(h,15);
			printf(" -> (%d)%s\n", (ataque+1),inim[ataque].nome);
			inim[ataque].escudo = inim[ataque].escudo + 12;
			printf("\tRECEBEU");
			SetConsoleTextAttribute(h,14);
			printf(" 12 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO -> (%d)%s\n", (ataque+1),inim[ataque].nome);	
		break;
		
		case 64:
			dano(8);
			embalea(76);
			printf("\tAMALDIÇOADO COM 1 QUEIMADURA POR: (%d)%s\n", (ataque+1),inim[ataque].nome);
			printf("\t[Receba 2 de Dano ao final do turno | Gasta se não jogada | Injogável]\n");
		break;
		
		case 65:
			inim[1].escudo = inim[1].escudo + 12;
			printf("\tDEU");
			SetConsoleTextAttribute(h,14);
			printf(" 12 ");
			SetConsoleTextAttribute(h,15);
			printf("DE ESCUDO PARA -> (2)%s\n", inim[1].nome);
		break;
		
	}
	
	
}




