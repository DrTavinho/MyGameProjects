

void batalha() {
	
	if(duelo == false){
		duelo = true;
		turno = 1;
		geraren();	
	}
	
	while(duelo = true) {
		
		if (turno == 1 && vida > 0) {
			effec2();
			effec();
			player();
			checkvit();
			fflush(stdin);
			
		} else if (turno == 2 && (inim[0].vida > 0 || inim[1].vida > 0 || inim[2].vida > 0 || inim[3].vida > 0 || inim[4].vida > 0)) {
			
			effec2();
			
			for(ataque=0;ataque<5;ataque++){
				inim[ataque].escudo = 0;
			}
			
			for(ataque=0;ataque<5;ataque++){
				effec();
				AI();
				checkvit();
			}
			
		} else {
			
			if(turno == 1 || turno == 0){
				turno = 2;
			} else {
				turno = 1;
			}
			
		}
		
		if(turno == 1 || turno == 0){
			turno = 2;
		} else {
			turno = 1;
		}
	}
	
	game();
}

void player() {
	
	mana = manamax;
	mana = mana + manap;
	manap = 0;
	
	if(barricada == 0){
		escudo = 0;
	}
	
	comprarmao();
	pplayer();
	
}

void pplayer() {
	while(turno == 1){
	voltap:
		tabela();
		campo();
		printmao();

		SetConsoleTextAttribute(h,14);
		printf("\n\tESCOLHA UMA CARTA PARA JOGAR");
		SetConsoleTextAttribute(h,8);
		printf("  Aperte 0 para Encerrar Turno\n");
		SetConsoleTextAttribute(h,15);
		printf("\t->");
		fflush(stdin);
		scanf("%d", &cj);
		
		if(cj<0){
			printf("\n\tID Inexistente\n");
			Sleep(1200);
			goto voltap;
		} else if(cj>Mtopo){
			printf("\n\tID Inexistente\n");
			Sleep(1200);
			goto voltap;
		}
		
		if(cj == 0) {
			tabela();
			campo();
			printf("\n\t\t!!! TURNO INIMIGO !!!\n");
			Sleep(1500);
			turno = 2;
		} else {
			usarcarta(mao[cj-1]);
		}	
	}
	desmao();
	batalha();
	
}

void geraren() {
	
/*
	
	DIFICUL 1 = 0-piolho; 1-parasita; 2-larva
	DIFICUL 2 = 3-orbe; 4-slime(P); 5-corvo; 14-cogumelo
	DIFICUL 3 = 6-escravo; 7-besta; 8-cultista; 12-slime(M); 15-místico
	DIFICUL 4 = 9-centurião; 10-cavaleiro; 11-sentinela; 13-slime(G)
	DIFICUL B = 997-escolhido; 998-maldiçao; 999-pinaculo
	
	*/
		
	if(boss == false) {
		
		if(zona == 1) {
			
			if(nivel < 3){
				rando = (rand() % 4);	
			} else {
				rando = (rand() % 6) + 4;
			}
			
		} else if(zona == 2) {
			
			if(nivel < 2){
				rando = (rand() % 4) + 10;	
			} else {
				rando = (rand() % 6) + 14;
			}
			
		} else if(zona == 3) {
				
			if(nivel < 2){
				rando = (rand() % 4) + 10;
			} else {
				rando = (rand() % 20);
			}
			
		} else {
			rando = (rand() % 20);	
		}
		
		//rando = 11;
		
		switch(rando) {
			
			case 0:
				gerarinim(8); //cultista
				ouro2 = (rand() % 10) + 17;
			break;
			
			case 1:
				gerarinim(7); //besta
				ouro2 = (rand() % 10) + 20;
			break;
			
			case 2:
				gerarinim(0); //piolho
				gerarinim(1); //parasita
				ouro2 = (rand() % 10) + 15;
			break;
			
			case 3:
				gerarinim(4); //slime(P)
				gerarinim(12);//slime(M)
				ouro2 = (rand() % 10) + 15;
			break;
			
			case 4:
				gerarinim(0); //piolho
				gerarinim(1); //parasita
				gerarinim(0); //piolho
				ouro2 = (rand() % 10) + 15;
			break;
			
			case 5:
				gerarinim(6); //escravo
				ouro2 = (rand() % 10) + 15;
			break;
			
			case 6:
				gerarinim(13); //slime(G)
				ouro2 = (rand() % 10) + 15;
			break;
			
			case 7:
				gerarinim(4); //slime(P)
				gerarinim(4); //slime(P)
				gerarinim(4); //slime(P)
				ouro2 = (rand() % 10) + 15;
			break;
			
			case 8:
				gerarinim(7); //besta
				gerarinim(12);//slime(M)
				gerarinim(0); //piolho
				ouro2 = (rand() % 10) + 25;
			break;
			
			case 9:
				gerarinim(14);//cogumelo
				gerarinim(14);//cogumelo
				ouro2 = (rand() % 10) + 20;
			break;
			
//-----------------------------------------------------------		
			
			case 10:
				gerarinim(3); //orbe
				ouro2 = (rand() % 10) + 20;
			break;
			
			case 11:
				gerarinim(9); //centurião
				ouro2 = (rand() % 10) + 20;
			break;
			
			case 12:
				gerarinim(5); //corvo
				gerarinim(5); //corvo
				gerarinim(5); //corvo
				ouro2 = (rand() % 10) + 18;
			break;
			
			case 13:
				gerarinim(8); //cultista
				gerarinim(8); //cultista
				ouro2 = (rand() % 10) + 18;
			break;
			
			case 14:
				gerarinim(10);//cavaleiro
				gerarinim(15);//místico
				ouro2 = (rand() % 10) + 25;
			break;
			
			case 15:
				gerarinim(5); //corvo
				gerarinim(9); //centurião
				ouro2 = (rand() % 10) + 20;
			break;
			
			case 16:
				gerarinim(8); //cultista
				gerarinim(9); //centurião
				ouro2 = (rand() % 10) + 22;
			break;
			
			case 17:
				gerarinim(14);//cogumelo
				gerarinim(9); //centurião
				ouro2 = (rand() % 10) + 22;
			break;
			
			case 18:
				gerarinim(6); //escravo
				gerarinim(6); //escravo
				ouro2 = (rand() % 10) + 18;
			break;
			
			case 19:
				gerarinim(2); //larva
				gerarinim(11);//sentinela
				ouro2 = (rand() % 10) + 17;
			break;
			
			default:
				geraren();
			
		
		}
		
	} else { //BOSSES
		
		if(zona == 1){
			gerarinim(16);	//automato
			gerarinim(997); //ESCOLHIDO
			gerarinim(16);	//automato
			ouro2 = (rand() % 10) + 90;
		} else if(zona == 2){
			gerarinim(998); //MALDIÇÃO
			ouro2 = (rand() % 10) + 95;
		} else if(zona == 3){
			gerarinim(999); //PINÁCULO
			ouro2 = (rand() % 10) + 105;
		} else {
			
			rando = (rand() % 3);
			
			if(rando == 0) {
				gerarinim(16);	//automato
				gerarinim(997); //ESCOLHIDO
				gerarinim(16);	//automato
				ouro2 = (rand() % 10) + 115;
			} else if(rando == 1) {
				gerarinim(998); //MALDIÇÃO
				ouro2 = (rand() % 10) + 115;
			} else if(rando == 2) {
				gerarinim(999); //PINÁCULO
				ouro2 = (rand() % 10) + 115;
			}
			
			
		}
	}
}

int gerarinim(int i) {
	
	i2=0;
	qInim=0;
	while(inim[i2].vidamax != 0){
		
		qInim = i2 + 1;
		i2++;
		
		if(i2 == 5){
			goto sair;
		}
		
	}
	
	switch(i) { 
	
	/*
	
	DIFICUL 1 = 0-piolho; 1-parasita; 2-larva
	DIFICUL 2 = 3-orbe; 4-slime(P); 5-corvo; 14-cogumelo
	DIFICUL 3 = 6-escravo; 7-besta; 8-cultista; 12-slime(M); 15-místico
	DIFICUL 4 = 9-centurião; 10-cavaleiro; 11-sentinela; 13-slime(G)
	DIFICUL B = 997-escolhido; 998-maldiçao; 999-pinaculo
	
	*/
		
		case 0:
			strcpy(inim[qInim].nome, "Piolho   ");
			inim[qInim].vidamax = 15 + round((zona-1) * 2 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 1;
			inim[qInim].ataq[0] = 2;
			inim[qInim].ataq[1] = 4;
			inim[qInim].ataq[2] = 19;
		break;
		
		case 1:
			strcpy(inim[qInim].nome, "Parasita ");
			inim[qInim].vidamax = 17 + round((zona-1) * 2 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 1;
			inim[qInim].ataq[0] = 2;
			inim[qInim].ataq[1] = 4;
			inim[qInim].ataq[2] = 17;
		break;
		
		case 2:
			strcpy(inim[qInim].nome, "Larva    ");
			inim[qInim].vidamax = 18 + round((zona-1) * 2 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 1;
			inim[qInim].ataq[0] = 3;
			inim[qInim].ataq[1] = 31;
			inim[qInim].ataq[2] = 13;
		break;
		
		case 3:
			strcpy(inim[qInim].nome, "Orbe     ");
			inim[qInim].vidamax = 60 + round((zona-1) * 5 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 3;
			inim[qInim].ataq[0] = 42;
			inim[qInim].ataq[1] = 43;
			inim[qInim].ataq[2] = 44;
			inim[qInim].ataq[3] = 45;
		break;
		
		case 4:
			strcpy(inim[qInim].nome, "Slime(P) ");
			inim[qInim].vidamax = 14 + round((zona-1) * 5 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 2;
			inim[qInim].ataq[0] = 39;
			inim[qInim].ataq[1] = 1;
		break;
		
		case 5:
			strcpy(inim[qInim].nome, "Corvo    ");
			inim[qInim].vidamax = 28 + round((zona-1) * 5 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 2;
			inim[qInim].ataq[0] = 13;
			inim[qInim].ataq[1] = 54;
			inim[qInim].ataq[2] = 6;
		break;
		
		case 6:
			strcpy(inim[qInim].nome, "Escravo  ");
			inim[qInim].vidamax = 41 + round((zona-1) * 6 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 3;
			inim[qInim].ataq[0] = 6;
			inim[qInim].ataq[1] = 15;
		break;
		
		case 7:
			strcpy(inim[qInim].nome, "Besta    ");
			inim[qInim].vidamax = 48 + round((zona-1) * 6 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 3;
			inim[qInim].ataq[0] = 5;
			inim[qInim].ataq[1] = 37;
			inim[qInim].ataq[2] = 38;
		break;
		
		case 8:
			strcpy(inim[qInim].nome, "Cultista ");
			inim[qInim].vidamax = 45 + round((zona-1) * 6 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 3;
			inim[qInim].ataq[0] = 3;
			inim[qInim].ataq[1] = 14;
		break;
		
		case 9:
			strcpy(inim[qInim].nome, "Centurião");
			inim[qInim].vidamax = 97 + round((zona-1) * 7 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 4;
			inim[qInim].ataq[0] = 46;
			inim[qInim].ataq[1] = 9;
			inim[qInim].ataq[2] = 48;
			inim[qInim].ataq[3] = 49;
			inim[qInim].ataq[4] = 47;
		break;
		
		case 10:
			strcpy(inim[qInim].nome, "Cavaleiro");
			inim[qInim].vidamax = 77 + round((zona-1) * 7 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 4;
			inim[qInim].ataq[0] = 7;
			inim[qInim].ataq[1] = 50;
			inim[qInim].ataq[2] = 26;
		break;
		
		case 11:
			strcpy(inim[qInim].nome, "Sentinela");
			inim[qInim].vidamax = 75 + round((zona-1) * 7 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 4;
			inim[qInim].ataq[0] = 14;
			inim[qInim].ataq[1] = 8;
			inim[qInim].ataq[2] = 19;
			inim[qInim].ataq[3] = 32;
		break;
		
		case 12:
			strcpy(inim[qInim].nome, "Slime(M) ");
			inim[qInim].vidamax = 28 + round((zona-1) * 5 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 3;
			inim[qInim].ataq[0] = 40;
			inim[qInim].ataq[1] = 39;
			inim[qInim].ataq[2] = 5;
		break;
		
		case 13:
			strcpy(inim[qInim].nome, "Slime(G) ");
			inim[qInim].vidamax = 69 + round((zona-1) * 5 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 4;
			inim[qInim].ataq[0] = 41;
			inim[qInim].ataq[1] = 19;
			inim[qInim].ataq[2] = 7;
		break;
		
		case 14:
			strcpy(inim[qInim].nome, "Cogumelo ");
			inim[qInim].vidamax = 26 + round((zona-1) * 6 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 2;
			inim[qInim].ataq[0] = 3;
			inim[qInim].ataq[1] = 3;
			inim[qInim].ataq[2] = 14;
		break;
		
		case 15:
			strcpy(inim[qInim].nome, "Místico  ");
			inim[qInim].vidamax = 46 + round((zona-1) * 6 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 3;
			inim[qInim].ataq[0] = 51;
			inim[qInim].ataq[1] = 52;
			inim[qInim].ataq[2] = 53;
		break;
		
		case 16:
			strcpy(inim[qInim].nome, "Autômato ");
			inim[qInim].vidamax = 46 + round((zona-1) * 6 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 3;
			inim[qInim].ataq[0] = 4;
			inim[qInim].ataq[1] = 65;
		break;
		
		case 997:
			strcpy(inim[qInim].nome, "ESCOLHIDO");
			inim[qInim].vidamax = 200 + round((zona-1) * 10 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 999;
			inim[qInim].ataq[0] = 55;
			inim[qInim].ataq[1] = 56;
			inim[qInim].ataq[2] = 55;
			inim[qInim].ataq[3] = 56;
			inim[qInim].ataq[4] = 57;
			inim[qInim].ataq[5] = 36;
		break;
		
		case 998:
			strcpy(inim[qInim].nome, "MALDIÇÃO ");
			inim[qInim].vidamax = 250 + round((zona-1) * 10 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 999;
			inim[qInim].ataq[0] = 8;
			inim[qInim].ataq[1] = 58;
			inim[qInim].ataq[2] = 8;
			inim[qInim].ataq[3] = 59;
			inim[qInim].ataq[4] = 14;
			inim[qInim].ataq[5] = 60;
			inim[qInim].ataq[6] = 21;
		break;
		
		case 999:
			strcpy(inim[qInim].nome, "PINÁCULO ");
			inim[qInim].vidamax = 300 + round((zona-1) * 10 * 0.7);
			inim[qInim].vida = inim[qInim].vidamax;
			inim[qInim].tipo = 999;
			inim[qInim].apo = 8;
			inim[qInim].ataq[0] = 64;
			inim[qInim].ataq[1] = 46;
			inim[qInim].ataq[2] = 64;
			inim[qInim].ataq[3] = 63;
			inim[qInim].ataq[4] = 46;
			inim[qInim].ataq[5] = 64;
			inim[qInim].ataq[6] = 62;
			inim[qInim].ataq[7] = 0;
			inim[qInim].ataq[8] = 36;
			inim[qInim].ataq[9] = 61;
		break;
	}
	
	sair:
	Sleep(1);
}

void checkvit() {
	
	for(i2=0;i2<5;i2++){
		if(inim[i2].vida < 0 && inim[i2].tipo > 0) {
			inim[i2].vida = 0;
			inim[i2].tipo = 0;
			kills++;
		}
	}
	
	if(vida < 1) {
		vida = 0;
	}
	
	for(i2=0;i2<5;i2++){
		if(inim[i2].vida < 1) {
			inim[i2].vida = 0;
			inim[i2].veneno = 0;
			inim[i2].Dfraq = 0;
			inim[i2].Dvul = 0;
			inim[i2].fraq = 1;
			inim[i2].vul = 1;
			inim[i2].forca = 0;
		}
	}
	
	if (vida < 1) {
		tabela();
		campo();
		SetConsoleTextAttribute(h,4);
		printf("\n\t\t\tVOCÊ MORREU\n");
		Sleep(1000);
		printf("\n\t\t\t GAME OVER\n");
		Sleep(1000);
		SetConsoleTextAttribute(h,15);
		printf("\n\t   ");
		system("pause");
		
		if(zona < 4) {
			derrotas++;
		}
		fimdejogo();
		salvar();
		removet();
		menu();
	}
	
	if ((inim[0].vida < 1 && inim[1].vida < 1 && inim[2].vida < 1 && inim[3].vida < 1 && inim[4].vida < 1) && duelo == true) {
		tabela();
		campo();
		SetConsoleTextAttribute(h,14);
		printf("\n\t\t\tVOCÊ VENCEU!\n\n");
		SetConsoleTextAttribute(h,15);
		
		if(zona == 3 && nivel == 14){
			drops();
			Sleep(3000);
			system("cls");
			printf("\n\n\n\t\t\tVocê matou o Pináculo...\n");
			Sleep(7000);
			system("cls");
			printf("\n\n\n\t\t\t Tudo.... Acaba aqui...\n");
			Sleep(5000);
			system("cls");
			printf("\n\n\n\t\t\t    Finalmente.....\n");
			Sleep(5000);
			system("cls");
			printf("\n\n\t    -- Card Conquer --\n");
			Sleep(2000);
			printf("\t     Um jogo por: DrT\n");
			Sleep(2000);
			printf("\t    Obrigado Por Jogar!\n");
			Sleep(5000);
			system("cls");
			Sleep(5000);
		}
		
		if(nivel == 14){
			killsc++;
		}
		
		if(zona == 3 && nivel == 14){
			
			vitorias++;
			fimdejogo();
			//ler informações e armazena-las
			fpointer = fopen("stats.txt", "r");
			while (!feof (fpointer)) {
   			 	fscanf (fpointer, "%d %d %d %d %d %d", &vitorias2, &derrotas2, &kills2, &ourot2, &killsc2, &escalados2);  
			}
			fclose(fpointer);
	
			//atualizar informações com as do arquivo
			vitorias = vitorias + vitorias2;
			derrotas = derrotas + derrotas2;
			kills = kills + kills2;
			ourot = ourot + ourot2;
			killsc = killsc + killsc2;
			escalados = escalados + escalados2;
	
			//mandar informações devolta ao arquivo
			fpointer = fopen("stats.txt", "w");
			fprintf(fpointer, " %d", vitorias);
			fprintf(fpointer, " %d", derrotas);
			fprintf(fpointer, " %d", kills);
			fprintf(fpointer, " %d", ourot);
			fprintf(fpointer, " %d", killsc);
			fprintf(fpointer, " %d", escalados);
			fclose(fpointer);
			
			//reset informações
			vitorias = 0;
			derrotas = 0;
			kills = 0;
			ourot = 0;
			killsc = 0;
			escalados = 0;
			
			naodesista:
			system("cls");
			printf("\n\n\n\t     Deseja continuar sua aventura?\n");
			printf("\t       0.ABANDONAR   1.CONTINUAR\n");
			printf("\t     ->");
			fflush(stdin);
			scanf("%c", &c);
			switch(c) {
				case 48:
					salvar();
					removet();
					menu();
				break;
				
				case 49:
					system("cls");
					Sleep(2000);
					printf("\n\n\n\t    Infectado: Maldição do Pináculo\n");
					Sleep(2000);
					printf("\t    	- Perca 10 pontos de Vida Máxima a cada nova zona\n");
					printf("\t    	- Mínimo possível: 10 Pontos de Vida Máxima\n");
					Sleep(12000);
					
					game();
				break;
				
				default:
					goto naodesista;
			}
			
		}
		
		Sleep(1200);
		turno = 1;
		if(zona == 3 && nivel == 14){
			//nadaaaaaaa
		} else {
			drops();
		}
		//game(); ocorre em drops();
	}
}

void AI() {
	
	if(inim[ataque].vida > 0){
		tabela();
		campo();
		AIturno(inim[ataque].ataq[inim[ataque].apo]);
		inim[ataque].apo++;
		
		if(inim[ataque].ataq[inim[ataque].apo] == 0){
			inim[ataque].apo = 0;
		}
		
		Sleep(2500);
		
	}
	
}

void effec() {
	
	if(turno == 1){
		
		if(veneno > 0){
			tabela();
			campo();
			printmao();
			vida = vida - veneno;
			printf("\tDANO VENENO %d --> VOCÊ\n", veneno);
			veneno--;
			Sleep(1200);
		}
		
	} else {
		
		if(inim[ataque].veneno > 0 && inim[ataque].tipo > 0 && inim[ataque].vida > 0){
			tabela();
			campo();
			printmao();
			inim[ataque].vida = inim[ataque].vida - inim[ataque].veneno;
			printf("\tDANO VENENO %d --> (%d)%s\n", inim[ataque].veneno, (ataque+1), inim[ataque].nome);
			inim[ataque].veneno--;
			Sleep(1200);
		}
		
	}
	
}

void effec2() {
	
	if(turno == 2){
			
		if(Dfraq > 0) {
			fraq = 0.75;
			Dfraq--;
			if(Dfraq == 0){
				fraq = 1;
			}
		}
			
		if(Dvul > 0) {
			vul = 1.5;
			Dvul--;
			if(Dvul == 0){
				vul = 1;
			}
		}
		
	} else {
		
		for(i3=0;i3<5;i3++) {
			
			if(inim[i3].Dfraq > 0 && inim[i3].tipo > 0 && inim[i3].vida > 0) {
				inim[i3].fraq = 0.75;
				inim[i3].Dfraq--;
				if(inim[i3].Dfraq == 0){
					inim[i3].fraq = 1;
				}
			}
				
			if(inim[i3].Dvul > 0 && inim[i3].tipo > 0 && inim[i3].vida > 0) {
				inim[i3].vul = 1.5;
				inim[i3].Dvul--;
				if(inim[i3].Dvul == 0){
					inim[i3].vul = 1;
				}
			}
			
		}
		
	}
}

int dano(float dn) {
	
	if(turno == 1){
		tabela();
		campo();
		printmao();
		escolherinim();
		j2 = inim[opcao].escudo;
		dn = round((dn + forca) * (fraq * inim[opcao].vul));
		
		if(dn<0) {
			dn=0;
		}
	
		inim[opcao].escudo = inim[opcao].escudo - dn;
		dn = dn - j2;
		
		if(inim[opcao].escudo < 0){
			inim[opcao].escudo = 0;
		}
		
		j2 = inim[opcao].vida;
		
		if(dn > 0){
			inim[opcao].vida = inim[opcao].vida - dn;
			j2 = j2 - inim[opcao].vida;
			
			printf("\tDANO:");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",j2);
			SetConsoleTextAttribute(h,15);
			printf("CAUSADO EM %s\n", inim[opcao].nome);
			
			if(envenenar > 0){
				printf("\tENVENENAR +%d -> %s\n", envenenar, inim[opcao].nome);
				inim[opcao].veneno = inim[opcao].veneno + envenenar;
			}
			
		} else {
			printf("\tESCUDO PROTEJEU %s\n", inim[opcao].nome);
		}
		
		for(i2=0;i2<5;i2++){
			if(inim[i2].vida < 0 && inim[i2].tipo > 0) {
				inim[i2].vida = 0;
				inim[i2].tipo = 0;
				kills++;
			}
		}
		
		Sleep(1000);
		checkvit();
		
	} else {
		
		j2 = escudo;
		dn = round((dn + inim[ataque].forca) * (inim[ataque].fraq * vul));
		
		if(dn<0) {
			dn=0;
		}
		
		escudo = escudo - dn;
		dn = dn - j2;
		
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
			printf("->(%d)%s\n", (ataque+1), inim[ataque].nome);
			
		} else {
			printf("\tESCUDO TE PROTEJEU -> (%d)%s\n", (ataque+1), inim[ataque].nome);
		}
		
		if(vida < 1) {
			vida = 0;
		}
		
	}
	
}

int danot(float dn) {
	
	i3 = dn;
	for(opcao=0;opcao<5;opcao++){
		
		if(inim[opcao].tipo > 0){
		
		dn = i3;
		j2 = inim[opcao].escudo;
		dn = round((dn + forca) * (fraq * inim[opcao].vul));
		
		if(dn<0) {
			dn=0;
		}
	
		inim[opcao].escudo = inim[opcao].escudo - dn;
		dn = dn - j2;
		
		if(inim[opcao].escudo < 0){
			inim[opcao].escudo = 0;
		}
		
		j2 = inim[opcao].vida;
		
		if(dn > 0){
			inim[opcao].vida = inim[opcao].vida - dn;
			j2 = j2 - inim[opcao].vida;
			
			printf("\tDANO:");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",j2);
			SetConsoleTextAttribute(h,15);
			printf("CAUSADO EM %s\n", inim[opcao].nome);
			
			if(envenenar > 0){
				printf("\tENVENENAR +%d -> %s\n", envenenar, inim[opcao].nome);
				inim[opcao].veneno = inim[opcao].veneno + envenenar;
			}
			
		} else {
			printf("\tESCUDO PROTEJEU %s\n", inim[opcao].nome);
		}
		
		for(i2=0;i2<5;i2++){
			if(inim[i2].vida < 0 && inim[i2].tipo > 0) {
				inim[i2].vida = 0;
				inim[i2].tipo = 0;
				kills++;
			}
		}
		
		Sleep(800);
		checkvit();
	}
	
	}
	
}

int danor(float dn2, int rep) {
	
	for(i3=0;i3<rep;i3++){
		
		dn = dn2;
		
		if(inim[opcao].tipo > 0){
		
		j2 = inim[opcao].escudo;
		
		if(j2<0) {
			j2=0;
		}
		
		dn = round((dn + forca) * (fraq * inim[opcao].vul));
		
		if(dn<0) {
			dn=0;
		}
	
		inim[opcao].escudo = inim[opcao].escudo - dn;
		dn = dn - j2;
		
		if(inim[opcao].escudo < 0){
			inim[opcao].escudo = 0;
		}
		
		j2 = inim[opcao].vida;
		
		if(dn > 0){
			inim[opcao].vida = inim[opcao].vida - dn;
			j2 = j2 - inim[opcao].vida;
			
			printf("\tDANO:");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",j2);
			SetConsoleTextAttribute(h,15);
			printf("CAUSADO EM %s\n", inim[opcao].nome);
			
			if(envenenar > 0){
				printf("\tENVENENAR +%d -> %s\n", envenenar, inim[opcao].nome);
				inim[opcao].veneno = inim[opcao].veneno + envenenar;
			}
			
		} else {
			printf("\tESCUDO PROTEJEU %s\n", inim[opcao].nome);
		}
		
		for(i2=0;i2<5;i2++){
			if(inim[i2].vida < 0 && inim[i2].tipo > 0) {
				inim[i2].vida = 0;
				inim[i2].tipo = 0;
				kills++;
			}
		}
		
		Sleep(800);
		checkvit();
	}
	
	}
	
}

void campo() {
	
	/*
	printf("\tdescarte(%d): ", DStopo);
	for(a=0;a<DStopo+3;a++){
		
		printf("%d-", descarte[a]);
		
	}
	printf("\n");
	
	printf("\tcompra(%d):   ",Ctopo);
	for(a=0;a<Ctopo+3;a++){
		
		printf("%d-", compra[a]);
		
	}
	printf("\n");
	printf("\tkills: %d\n\n", kills);
	*/
	
	printf("   ");
	for(a=0;a<5;a++){
		
		if(inim[a].vidamax > 0 && ataque == a && turno == 2){
			SetConsoleTextAttribute(h,12);
			AIshow(inim[a].ataq[inim[a].apo], a);
			SetConsoleTextAttribute(h,15);
		} else if(inim[a].vidamax > 0){
			AIshow(inim[a].ataq[inim[a].apo], a);
		}
		
	}
	printf("\n   ");
	
	for(a=0;a<5;a++){
		
		if(inim[a].vidamax > 0 && ataque == a && turno == 2){
			SetConsoleTextAttribute(h,14);
			printf("(%d)%s   ", (a+1), inim[a].nome);
			SetConsoleTextAttribute(h,15);
		} else if(inim[a].vidamax > 0){
			printf("(%d)%s   ", (a+1), inim[a].nome);
		}
	}
	printf("\n   ");
	
	for(a=0;a<5;a++){
		
		if(inim[a].vida > 9){
			printf("Vida: %.0f/%.0f    ", inim[a].vida, inim[a].vidamax);
		} else if(inim[a].vida > 0){
			printf("Vida: %.0f/%.0f     ", inim[a].vida, inim[a].vidamax);
		} else if(inim[a].vidamax > 0 && inim[a].vida == 0){
			SetConsoleTextAttribute(h,4);
			printf("MORTO          ", inim[a].vida);
			SetConsoleTextAttribute(h,15);
		}
		
	}
	printf("\n   ");
	
	for(a=0;a<5;a++){
		
		if(inim[a].vidamax > 0){
			
			SetConsoleTextAttribute(h,2);
			printf("%d ",inim[a].veneno);
			SetConsoleTextAttribute(h,11);
			printf("%d ",inim[a].Dfraq);
			SetConsoleTextAttribute(h,13);
			printf("%d ",inim[a].Dvul);
			SetConsoleTextAttribute(h,12);
			printf("%d        ",inim[a].forca);
			SetConsoleTextAttribute(h,15);
			
		}
		
	}
	printf("\n   ");
	
	for(a=0;a<5;a++){
		
		if(inim[a].escudo > 0 && inim[a].tipo > 0){
			SetConsoleTextAttribute(h,14);
			printf("Escudo: %d     ", inim[a].escudo);
			SetConsoleTextAttribute(h,15);
		} else {
			printf("               ");
		}
		
	}
	printf("\n");
	
	
}

void drops() {
	
	ouro = ouro + ouro2;
	ourot = ourot + ouro2;
	SetConsoleTextAttribute(h,14);
	printf("\t\t\t OURO: +%d\n", ouro2); 
	SetConsoleTextAttribute(h,15);
	
	if(autoreparos > 0){
		vida = vida + autoreparos;
		printf("\t    AUTO REPAROS: Curou");
		SetConsoleTextAttribute(h,10);
		printf(" %d ", autoreparos);
		SetConsoleTextAttribute(h,15);
		printf("de Vida\n");
		autoreparos=0;
	}
		
	Sleep(1200);
	printf("\n\t   ");
	system("pause");
	tabela();
	
	veneno=0;
	fraq=1;
	Dfraq=0;
	vul=1;
	Dvul=0;
	forca=0;
	escudo=0;
	autoreparos=0;
	milcorte=0;
	barricada=0;
	rastro=0;
	manap=0;
	laminf=0;
	bonusestoque=0;
	envenenar=0;
	
	if(zona == 3 && nivel == 14){
		//nadaaaaaaa
	} else {
		escolhacarta(3);
	}
	
}

int escolhacarta(int carta) {
	
	for(i=0;i<10;i++){
		escolha[i] = 0;
	}
	
	printf("\t\t!!! ESCOLHA UMA CARTA PARA RECEBER !!!\n");
	printf("\t\t    Aperte 0 para pular recompensa    \n"); 
	for(i=0;i<carta;i++) {
		
		rando = (rand() % ids);
		while(rando % 2 == 0 || rando == 1 || rando == 3 || rando == 53 || rando == 57 || rando == 58 || rando == 75 || rando == 76) {	
		//cartas maldição devem ser adicionadas a esse filtro (TAMBEM ADICIONAR AO FILTRO DA LOJA E MELHORIA)
			rando = (rand() % ids);
		}
		escolha[i] = rando;
		printcarta(escolha[i]);
	}
	
	fflush(stdin);
	printf("\n\t->");
	scanf("%d", &opcao);
	
	if(opcao == 0) {
		printf("\n\t\tRecompensa pulada...\n");
		printf("\n\t   ");
		system("pause");
		duelo = false;
		game();
		
	} else {
		while(opcao<0 || opcao>carta){
			
			tabela();
		
			printf("\t\t!!! ESCOLHA UMA CARTA PARA RECEBER !!!\n");
			printf("\t\t    Aperte 0 para pular recompensa    \n"); 
			
			for(i=0;i<carta;i++) {
				printcarta(escolha[i]);
			}
			printf("\n\t->");
			scanf("%d", &opcao);
			
			if(opcao == 0) {
				printf("\n\t\tRecompensa pulada...\n");
				printf("\n\t   ");
				system("pause");
				duelo = false;
				game();
			
			}
		}
		
		i=-1;
		add(escolha[opcao-1]);
		tabela();
		printcarta(escolha[opcao-1]);
		printf("\n\t\tCarta adicionada!\n");
		printf("\n\t   ");
		system("pause");
		duelo = false;
	
		game();
	
	}
}

void escolherinim() {
	
	opcao=0;
	checkn=0;
	for(opcao=0;opcao<5;opcao++){
		if(inim[opcao].vida > 0 && inim[opcao].vidamax > 0 && inim[opcao].tipo > 0){
			checkn++;
		}
	}
	
	if(checkn == 1){
		opcao=-1;
		checkn=0;	
		while(checkn == 0) {
			opcao++;
			if(inim[opcao].vida > 0 && inim[opcao].vidamax > 0 && inim[opcao].tipo > 0){
				checkn++;
			}
		}
	}
	
	if(checkn > 1) {
		
		SetConsoleTextAttribute(h,14);
		printf("\n\tDIGITE O ID DO INIMIGO");
		SetConsoleTextAttribute(h,8);
		printf("  Aperte 0 para Voltar\n");
		SetConsoleTextAttribute(h,15);
		printf("\t->");
		scanf("%d", &opcao);
	
		if(opcao == 0){
			pplayer();
		}
		
		while((opcao-1) < 0 || inim[opcao-1].tipo == 0){
			printf("\n\tInimigo morto ou inexistente!\n");
			Sleep(1200);
			tabela();
			campo();
			printmao();
			fflush(stdin);
			SetConsoleTextAttribute(h,14);
			printf("\n\tDIGITE O ID DO INIMIGO:\n");
			SetConsoleTextAttribute(h,15);
			printf("\t->");
			scanf("%d", &opcao);
			if(opcao == 0){
				pplayer();
			}
		}
		
		opcao = opcao - 1;
	
	} else {
		printf("\n");
	}
	
}


