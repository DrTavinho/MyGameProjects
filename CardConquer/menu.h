


void menu() {
	
	system("cls");
	
	SetConsoleTextAttribute(h,15);
	printf("\n\n\t    -- Card Conquer --\n");
	SetConsoleTextAttribute(h,8);
	printf("\t     Um jogo por: DrT\n");
	SetConsoleTextAttribute(h,15);
	
	printf("\t     1.Jogar\n");
	printf("\t     2.Ver Cartas\n");
	printf("\t     3.Estat�sticas\n");
	printf("\t     4.Como Jogar\n");
	printf("\t     5.Sair\n\n");
	printf("\t     ->");
	
	fflush(stdin);
	scanf("%d", &opcao);
	
	switch(opcao) {
		
		case 1:

			vida=80; vidamax=80; vul=1; fraq=1; Dfraq=0; Dvul=0; turno=0; escalados=-1; kills=0; killsc=0;
			mana=0; manamax=5; maomax=5; ouro=99; escudo=0; nivel=14; zona=0;
			cont=0; qGasta=0; inimigos=0; qInim=0; forca=0; veneno=0, vitorias=0, derrotas=0;
			//Dfim=0; DStopo=0; Ctopo=0; Mtopo=0; Gtopo=0;
			autoreparos=0; manap=0; laminf=0; bonusestoque=0; rastro=0; envenenar=0; barricada=0; milcorte=0;
			erro = false; duelo = false; boss = false;
		
			game();
		break;
		
		case 2:
			pag = 0;
			displaycartas();
		break;
		
		case 3:
			system("cls");
			
			printf("\n\n\t    -- Card Conquer --\n");
			SetConsoleTextAttribute(h,8);
			printf("\t     Um jogo por: DrT\n");
			SetConsoleTextAttribute(h,15);
			
			fpointer = fopen("stats.txt", "r");
			while (!feof (fpointer)) {
    			fscanf (fpointer, "%d %d %d %d %d %d", &vitorias2, &derrotas2, &kills2, &ourot2, &killsc2, &escalados2);  
		
			}
			fclose(fpointer);
			printf("\n\t- VIT�RIAS............%d\n", vitorias2);
			printf("\t- DERROTAS............%d\n", derrotas2);
			printf("\t- MONSTROS MORTOS.....%d\n", kills2);
			printf("\t- OURO COLETADO.......%d\n", ourot2);
			printf("\t- CHEFES MORTOS.......%d\n", killsc2);
			printf("\t- AND�RES ESCALADOS...%d\n", escalados2);
			
			SetConsoleTextAttribute(h,8);
			printf("      Estat�sticas s� s�o salvas ao \n");
			printf("        morrer ou matar o 3� Chefe\n");
			SetConsoleTextAttribute(h,15);
			
			printf("\n\t   ");
			system("pause");
			menu();
		break;
		
		case 4:
			pag=0;
			tutorial();
		break;
		
		case 5:
			printf("\n\t     Obrigado por Jogar!\n");
			exit(0);
		break;
		
		default:
			menu();
		
	}
}

void tutorial() {
	
	system("cls");
	
	printf("\n\n\t    -- Card Conquer --\n");
	SetConsoleTextAttribute(h,8);
	printf("\t     Um jogo por: DrT\n");
	SetConsoleTextAttribute(h,15);
	printf("\t   Aperte 0 para voltar\n");
	printf("    Use (<) e (>) para passar as p�ginas!\n\n");
	printf("\t     < (P�GINA: %d/8) > \n\n", (pag+1));
		
	switch(pag) {
			
		case 0:
			printf("\t- INTRODU��O:\n");
			printf("\t     -Card Conquer � um rogue-like deck-builder\n");
			printf("\t     -Avan�e pelos n�veis e colete cartas\n");
			printf("\t     -Ao final de cada zona, est� um Chef�o\n");
			printf("\t     -Vencer o Chefe te passa para a pr�xima zona\n");
			printf("\t     -Tente ficar forte o suficiente para vencer os 3 Chef�es principais\n");
			printf("\t     -Use Ctrl+Scroll para aumentar ou diminuir o zoom!\n");
			
		break;
			
		case 1:
			printf("\t- COMO JOGAR:\n");
			printf("\t     -Voc� come�a sempre com 10 cartas padr�o\n");
			printf("\t     -Use cartas digitando o n�mero correspondente � carta em sua m�o\n");
			printf("\t     -Cartas custam Mana [@] para serem usadas. Voc� tem um m�ximo padr�o de 5\n");
			printf("\t     -Evite dano usando cartas de Escudo e cause dano usando cartas de Dano\n");
			printf("\t     -Os inimigos sempre ir�o mostrar suas inten��es acima do nome\n");
		break;	
			
		case 2:
			printf("\t- INTEN��ES INIMIGAS:\n");
			printf("\t     -ATX = Ira atacar causando X de dano\n");
			printf("\t     -ESX = Ira ganhar X de escudo\n");
			printf("\t     -FRX = Ira te aflingir com X de fraqueza\n");
			printf("\t     -VUX = Ira te alingir com X de vulnerabilidade\n");
			printf("\t     -VEX = Ira te infectar com X de veneno\n");
			printf("\t     -FOX = Ira receber X de for�a\n");
			printf("\t     -MALX = Ira te amaldi�oar com X maldi��es\n");
			printf("\t     -CURAX = Ira curar X de vida\n");
			printf("\t     -ATORDOADO = N�o far� nada\n");
		break;	
			
		case 3:
			printf("\t- EFEITOS DE ESTADO:\n");
			printf("\t     -Todos os efeitos exceto For�a diminuem 1 ponto por turno\n");
			printf("\t     -FOR�A X: Aumenta seu dano em X pontos\n");
			printf("\t     -VULNERA X: Sofre 50%% a mais de dano por X turnos\n");
			printf("\t     -FRAQUEZA X: Causa 25%% menos dano por X turnos\n");
			printf("\t     -VENENO X: Sofre X de dano\n");
		break;	
			
		case 4:
			printf("\t- TIPOS DE CARTA:\n");
			printf("\t     -Gastar: carta s� pode ser usada uma vez por combate\n");
			printf("\t     -Comprar: compra cartas da pilha de compras\n");
			printf("\t     -Descartar: voc� ser� obrigado a descartar uma carta\n");
			printf("\t     -Maldi��o: cartas ruins que afetam negativamente suas jogadas\n");
			printf("\t     -Por�m varias cartas possuem mec�nicas pr�prias!!\n");
		break;
		
		case 5:
			printf("\t- MAPA:\n");
			printf("\t     -Voc� ter� que passar por todos os pontos no mapa e chegar no chefe [C]\n");
			printf("\t     - C = Chefe\n");
			printf("\t     - B = Ba�\n");
			printf("\t     - M = Batalha contra monstros\n");
			printf("\t     - I = Cartas B�nus\n");
			printf("\t     - L = Loja\n");
		break;
		
		case 6:
			printf("\t- HABILIDADES:\n");
			printf("\t     -Cartas de habilidade s� precisam ser jogadas uma vez por combate\n");
			printf("\t     -Habilidades fazem coisas de forma passiva\n");
			printf("\t     -A carta continua presente no deck, por�m n�o faz mais nada durante o combate\n");
		break;
		
		case 7:
			printf("\t- DICAS:\n");
			printf("\t     -Ter muitas cartas N�O significa ter um bom deck!\n");
			printf("\t     -Tente combinar cartas e criar combos e sinergias entre as cartas\n");
			printf("\t     -Evite cartas que n�o precisa!\n");
			printf("\t     -A loja tem um servi�o de remo��o de cartas muito �til!\n");
			printf("\t     -Lembre-se de aumentar seu escudo e evitar dano!\n");
		break;	
	}
		
	fflush(stdin);
	c = getch();
		
	switch(c) {
		
		case 48:
			menu();
		break;
	
		case 44:
			if(pag > 0){
				pag--;
				tutorial();
			} else {
				tutorial();
			}
		break;
					
		case 46:
			if((pag+1) == 8){
				tutorial();
			} else if(pag < 8){
				pag++;
				tutorial();
			} else {
				tutorial();
			}
		break;
					
		default:
			tutorial();
	
	}
	
}

void fimdejogo() {
	
	system("cls");
	
	printf("\n\n\t    -- Card Conquer --\n");
	SetConsoleTextAttribute(h,8);
	printf("\t     Um jogo por: DrT\n");
	SetConsoleTextAttribute(h,15);
	
	if(vitorias == 1){
		SetConsoleTextAttribute(h,14);
		printf("\t     !!! VIT�RIA !!!\n");
	} else {
		SetConsoleTextAttribute(h,12);
		printf("\t     !!! DERROTA !!!\n");
	}
	SetConsoleTextAttribute(h,15);
	
	printf("\t   ZONA: %d | N�VEL: %d\n\n", zona, nivel+1);
	printf("\t- MONSTROS MORTOS.....%d\n", kills);
	printf("\t- OURO COLETADO.......%d\n", ourot);
	printf("\t- CHEFES MORTOS.......%d\n", killsc);
	printf("\t- ANDARES ESCALADOS...%d\n", escalados);

	if(vitorias == 1){
		SetConsoleTextAttribute(h,14);
		printf("\t- PIN�CULO DESTRU�DO..OK\n");
		SetConsoleTextAttribute(h,15);
	}
	
	Sleep(1200);
	printf("\n\t   ");
	system("pause");
	
	pag = 0;
	displaydeck();
	
	
}

void displaydeck() {
	
	j2 = qCartas;
	system("cls");
	
	printf("\n\n\n\t\t       Seu Deck Final:\n");
	printf("\t    Use (<) e (>) para passar as p�ginas!\n\n");
	printf("\t\t     < (P�GINA: %d/%0.f) > \n", (pag+1), ceil(j2/5));
	printf("\t\t         0.CONTINUAR\n");
			
	for(i=(pag*5);i<((pag*5)+5);i++){
		if(i < Dfim){
			printcarta(deck[i]);
		}
	}
				
	fflush(stdin);
	c = getch();
				
	switch(c) {
					
		case 48:
			//deixar vazar
		break;
					
		case 44:
			if(pag > 0){
				pag--;
				displaydeck();
			} else {
				displaydeck();
			}
		break;
					
		case 46:
			if(pag < (ceil(j2/5))-1){
				pag++;
				displaydeck();
			} else {
				displaydeck();
			}
		break;
					
		default:
			displaydeck();
					
	}
	
	
	
	
	
}



