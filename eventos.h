
void fogueira() {
	
	
	printf("\t\t      _______                 \n");
	printf("\t\t     /      /\\                \n");
	printf("\t\t    /      /  \\               \n");
	printf("\t\t  _/______/----\\_     (       \n");
	printf("\t\t  ''     ''          ).       \n");
	printf("\t\t                  o (:') o    \n");
	printf("\t\t     ______      o ~/~~\\~ o   \n");
	printf("\t\t    (@))__))      o  o  o     \n");
	printf("\t\t                              \n");
	
}

void descanso() {
	
	pag=0;
	opcao = 0;
	ml = Dfim;
	while(opcao < 1 || opcao > 3){
		
		pag=0;
		tabela();
		fogueira();
		printf("\t\t!!!   ÁREA DE DESCANSO   !!!\n\n");
		printf("\t\t1.CURAR %.0f DE VIDA (30%%)\n", round(vidamax * 0.3));
		printf("\t\t2.VIDA MÁXIMA +4\n");
		printf("\t\t3.APRIMORAR CARTA\n");
		printf("\n\t->");
		fflush(stdin);
		scanf("%d", &opcao);
		
	}
	
	switch(opcao) {
			
		case 1:
			tabela();
			fogueira();
			printf("\t\tCURADO %.0f DE VIDA!\n", round(vidamax * 0.3));
			vida = vida + (vidamax * 0.3);
			
			if(vida > vidamax){
				vida = vidamax;
			}
			
			printf("\n\t   ");
			system("pause");
			
		break;
		
		case 2:
			tabela();
			fogueira();
			vidamax = vidamax + 4;
			printf("\t\tVIDA MÁXIMA AGORA É: %.0f\n", vidamax);
			vida = vida + 4;
			
			printf("\n\t   ");
			system("pause");
			
		break;
		
		case 3:
			
			while(1) {
				desc:
				tabela();
				fogueira();
				
				j2 = qCartas;
				printf("\t\tEscolha uma carta para melhorar\n");
				printf("\t\tNão é possível melhorar uma carta já melhorada!\n");
				printf("\t\tUse (<) e (>) para passar as páginas!\n\n");
				printf("\t\t     < (PÁGINA: %d/%0.f) > \n", (pag+1), ceil(j2/5));
				printf("\t\t0.CANCELAR  1.ESCOLHER CARTA\n");
				
				for(i=(pag*5);i<((pag*5)+5);i++){
					if(i < Dfim){
						printcarta(deck[i]);
					}
				}
				
				fflush(stdin);
				c = getch();
				
				switch(c) {
					
					case 48:
						descanso();
					break;
					
					case 49:
						//deixar vazar
					break;
					
					case 44:
						if(pag > 0){
							pag--;
							goto desc;
						} else {
							goto desc;
						}
					break;
					
					case 46:
						if(pag < (ceil(ml/5)-1)){
							pag++;
							goto desc;
						} else {
							goto desc;
						}
					break;
					
					default:
						goto desc;
					
				}
				
				z=0;	
				while(z<1 || z > Dfim){
					printf("\n\tINFORME O NÚMERO DA CARTA OU 0 PARA CANCELAR:\n");
					printf("\t->");
					scanf("%d", &z);
					if(deck[z] % 2 == 0 || z > Dfim || deck[z] == 57 || deck[z] == 58 || deck[z] == 75 || deck[z] == 76){ 	//FILTRO PARA MALDIÇÕES!!!!!!
						printf("\t!!! Não é possível melhorar essa carta !!!\n");
						z=0;
					} else if(z <= 0) {
						descanso();
					}
					
				}
				tabela();
				fogueira();
				SetConsoleTextAttribute(h,14);
				printf("\n\t\tNORMAL:");
				SetConsoleTextAttribute(h,15);
				printcarta(deck[z-1]);
				SetConsoleTextAttribute(h,14);
				printf("\n\t\tMELHORIA:");
				SetConsoleTextAttribute(h,15);
				printcarta(deck[z-1]+1);
				
				printf("\n\n\t0.CANCELAR  1.ADICIONAR\n");
				printf("\t->");
				scanf("%d", &opcao);
				
				if(opcao != 1) {
					descanso();
				} else if (opcao == 1){
					z = deck[z-1]+1;
					add(z);
					remove(z-1);
					tabela();
					fogueira();
					printf("\n\n\t\tMELHORIA CONCLUÍDA!\n");
					printcarta(z);
					printf("\n\t   ");
					system("pause");
					game();
				}
				
			}
			
			printf("\n\t   ");
			system("pause");
			
		break;
	}
	
	game();
}

void bauim() {
	
	printf("\t\t       _______________      \n");
	printf("\t\t      /             _ \\     \n");
	printf("\t\t      |_-    ___ -   -|     \n");
	printf("\t\t      |======\\O/======|     \n");
	printf("\t\t      |-  _    -    _-|     \n");
	printf("\t\t      |_______________|     \n");
	printf("\t\t                            \n");
	
}

void bau() {
	
	tabela();
	bauim();
	printf("\t\t!!! VOCÊ ENCONTRA UM BÁU !!!\n");
	printf("\t\t          Abrir...?         \n");
	
	rando = (rand() % 10);
	
	printf("\n\t   ");
	system("pause");
	
	if(rando >= 0 && rando < 4){
		
		tabela();
		bauim();
		rando = (rand() % 40) + 40;
		i = round((2 * zona * rando)* 0.75);
		ouro = ouro + i;
		SetConsoleTextAttribute(h,14);
		printf("\t\t\t  OURO: +%d\n", i); 
		SetConsoleTextAttribute(h,15);
		printf("\n\t   ");
		system("pause");
		
	} else if(rando >= 4 && rando < 7){
		
		tabela();
		bauim();
		rando = (rand() % 20) + 25;
		i = round((2 * zona * rando)* 0.75);
		ouro = ouro + i;
		SetConsoleTextAttribute(h,14);
		printf("\t\t\t  OURO: +%d\n", i); 
		SetConsoleTextAttribute(h,15);
		
		printf("\t\t       CARTAS BÔNUS (2)\n");
		printf("\n\t   ");
		system("pause");
		tabela();
		bauim();
		escolhacarta(2);
		
	} else if(rando >= 7 && rando <= 9){
		
		tabela();
		bauim();
		rando = (rand() % 25) + 35;
		i = round((2 * zona * rando)* 0.75);
		ouro = ouro + i;
		SetConsoleTextAttribute(h,14);
		printf("\t\t\t  OURO: +%d\n", i); 
		SetConsoleTextAttribute(h,15);
		
		printf("\t\t       CARTAS BÔNUS (1)\n");
		printf("\n\t   ");
		system("pause");
		tabela();
		bauim();
		escolhacarta(1);
		
	}
	
	game();
}

int charToInt(char c){

return c - '0';
}



void mercante() {
	
	printf("\t\t       <--|========>        \n");
	printf("\t\t          ________          \n");
	printf("\t\t    /~   /_______ \\     ^   \n");
	printf("\t\t  /==\\  //       \\ \\   /-\\  \n");
	printf("\t\t__\\==/__|| *   * | |___\\=/__\n");
	printf("\t\t        |\\_______/\\_\\       \n");
	printf("\t\t   _/  /           \\  L_//  \n");
	printf("\t\t  //\\  |           |  /     \n");
	printf("\t\t       |           \\        \n");
	printf("\t\t      /             \\       \n");
	printf("\t\t=============================\n");
	
	rando = (rand() % 25);
	
	if(rando == 3) {
		printf("\t\t     Se lembra de mim...?    \n");
	} else if(rando == 4) {
		printf("\t\tMinha loja.. outro universo..\n");
	} else if(rando == 12) {
		printf("\t\tVisões de milagres em excesso\n");
	} else if(rando == 13) {
		printf("\t\tSerá que já nos vimos antes??\n");
	} else if(rando == 20) {
		printf("\t\t     Derrote o PINÁCULO!!    \n");
	} else {
		printf("\t\tBem-vindo a loja, aventureiro\n");
	}	
	printf("\n");
	
}


void loja() {
	
	preco[6] = 75;
	
	for(i=0;i<5;i++) {
		rando = (rand() % ids);
		while(rando % 2 == 0 || rando == 1 || rando == 3 || rando == 53 || rando == 57 || rando == 58 || rando == 75 || rando == 76) {	
			rando = (rand() % ids);
		}
		
		item[i] = rando;
		
		rando = (rand() % 10) - zona;
		if(rando <= 0){
			item[i] = item[i] + 1;
		}
		
		
		if(i < 4) {
			rando = (rand() % 27) + 68;
			preco[i] = rando;
		} else {
			rando = (rand() % 13) + 22;
			preco[i] = rando;
		}
		
	}
	
	venda();
	
}

void venda() {
	
	pag = 0;
	duelo = false;
	
	tabela();
	mercante();
	
	printf("\tEscolha uma carta para comprar ou 0 para sair.\n");
	
	for(i=0;i<5;i++) {
		
		if(preco[i] == 0){
			
			SetConsoleTextAttribute(h,4);
			printf("\n\t(%d) !!! CARTA VENDIDA !!!\n", (i+1));
			printf("\t    -Você comprou essa carta!\n");
			SetConsoleTextAttribute(h,15);
			
		} else {
			
			printcarta(item[i]);
		
			SetConsoleTextAttribute(h,14);
			if(i < 4) {
				printf("\t    PREÇO: %d\n", preco[i]);
			} else {
				printf("\t    PROMOÇÃO: %d\n", preco[i]);
			}
			SetConsoleTextAttribute(h,15);
			
		}
	}
	
	printf("\n\t(6) Serviço de Remoção de Carta!\n");
	printf("\t    -Remova uma carta do seu deck!\n");
	SetConsoleTextAttribute(h,14);
	printf("\t    PREÇO: %d\n", preco[6]);
	SetConsoleTextAttribute(h,15);
	
	fflush(stdin);
	printf("\n\t->");
	scanf("%d", &opcao);
	
	if(opcao == 0) {
		game();
	} else if(opcao == 6) {
		
		if(ouro >= preco[6]){
			removcarta();
		} else {
			tabela();
			mercante();
			printf("\n\t    !!! VOCÊ NÃO TEM OURO SUFICIENTE !!!\n");
			Sleep(1200);
			venda();
		}
		
		
	} else if(opcao > 0 && opcao < 6 && preco[opcao-1] > 0){
		
		if(ouro >= preco[opcao-1]){
			
			ouro = ouro - preco[opcao-1];
			add(item[opcao-1]);
			preco[opcao-1] = 0;
			
			tabela();
			mercante();
			printf("\n\t!!! CARTA ADICIONADA AO DECK !!!\n");
			
			printcarta(item[opcao-1]);
			
			printf("\n\t   ");
			system("pause");
			venda();
			
		} else {
			tabela();
			mercante();
			printf("\n\t    !!! VOCÊ NÃO TEM OURO SUFICIENTE !!!\n");
			Sleep(1200);
			venda();
		}
		
	} else {
		venda();
	}
}

void removcarta() {
	
	tabela();
	mercante();
		
	j2 = qCartas;
	printf("\t\tEscolha uma carta para remover\n");
	printf("\t    Use (<) e (>) para passar as páginas!\n\n");
	printf("\t\t     < (PÁGINA: %d/%0.f) > \n", (pag+1), ceil(j2/5));
	printf("\t\t0.VOLTAR  1.ESCOLHER CARTA\n");
			
	for(i=(pag*5);i<((pag*5)+5);i++){
		if(i < Dfim){
			printcarta(deck[i]);
		}
	}
				
	fflush(stdin);
	c = getch();
				
	switch(c) {
					
		case 48:
			venda();
		break;
					
		case 49:
			//deixar vazar
		break;
					
		case 44:
			if(pag > 0){
				pag--;
				removcarta();
			} else {
				removcarta();
			}
		break;
					
		case 46:
			if(pag < (ceil(j2/5))-1){
				pag++;
				removcarta();
			} else {
				removcarta();
			}
		break;
					
		default:
			removcarta();
					
	}
				
	z=0;	
	while(z < 1 || z > Dfim){
		printf("\n\tINFORME O NÚMERO DA CARTA OU 0 PARA CANCELAR:\n");
		printf("\t->");
		scanf("%d", &z);
		if(z > Dfim){
			printf("\t!!! Não é possível remover essa carta !!!\n");
			z=0;
		} else if(z <= 0) {
			removcarta();
		}
					
	}
	
	tabela();
	mercante();
	printf("\t\tREMOÇÃO CONCLUÍDA!\n");
	SetConsoleTextAttribute(h,14);
	printf("\n\tCarta Removida:\n");
	SetConsoleTextAttribute(h,15);
	printcarta(deck[z-1]);
	
	remove(deck[z-1]);
		
	ouro = ouro - preco[6];
	preco[6] = preco[6] + 25;
	
	printf("\n\t   ");
	system("pause");
	venda();
	
				
}







