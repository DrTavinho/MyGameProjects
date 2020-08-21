



void Selecao1(){
	system("cls");
	printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf ("X     O      o      |Selecão |    o              X\n");
	printf ("X                   |   De   |             o     X\n");
	printf ("X   o     O         | Magias |      O            X\n");
	printf ("X            o      X--------X                O  X\n");
	printf ("X                                                X\n");
	printf ("X     1->AtaqueBoost          4->Barreira        X\n");
	printf ("X  O  2->HP Boost      o      5->Cura       O    X\n");
	printf ("X     3->Dash                 6->Freeze     o    X\n");
	printf ("X                           o          O         X\n");
	printf ("X         O                                      X\n");
	std::cout << "X     " <<nome1 << " escolha sua magia...";
	for(j = 0; nome1.length() + j < 22; j++){
		printf(" ");
	};
	printf("X\n");
	printf ("X  O             O                          o    X\n");
	printf ("X        o                o          O           X\n");
	printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf ("->");
		scanf("%s", &opcao4);
	
		switch(opcao4){
			
			case 49:
			player1skill = 1;
			break;
			
			case 50:
			player1skill =  2;
			break;
			
			case 51:
			player1skill =  3;
			break;
				
			case 52:
			player1skill =  4;
			break;
			
			case 53:
			player1skill =  5;
			break;
			
			case 54:
			player1skill =  6;
			break;
				
			default:
			printf("Magia não registrada!");
			delay(15);
			Selecao1();
			
		}
	}
	
void Selecao2(){
	
	system("cls");
	printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf ("X O         o       |Selecão |               O   X\n");
	printf ("X                   |   De   |     O             X\n");
	printf ("X    o          O   | Magias |            o      X\n");
	printf ("X      O            X--------X     o             X\n");
	printf ("X             o                             O    X\n");
	printf ("X     1->AtaqueBoost    o     4->Barreira        X\n");
	printf ("X     2->HP Boost             5->Cura            X\n");
	printf ("X     3->Dash         O       6->Freeze     o    X\n");
	printf ("X                                                X\n");
	printf ("X    o          O             o                  X\n");
	std::cout << "X     " <<nome2 << " escolha sua magia...";
	for(j = 0; nome2.length() + j < 22; j++){
		printf(" ");
	};
	printf("X\n");
	printf ("X           o         O         o             O  X\n");
	printf ("X      O                            o            X\n");
	printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf ("->");
	scanf("%s", &opcao5);
	
		switch(opcao5){
			
			case 49:
			player2skill = 1;
			break;
			
			case 50:
			player2skill =  2;
			break;
			
			case 51:
			player2skill =  3;
			break;
				
			case 52:
			player2skill =  4;
			break;
			
			case 53:
			player2skill =  5;
			break;
			
			case 54:
			player2skill =  6;
			break;
				
			default:
			printf("Magia não registrada!");
			Selecao2();
	
	}
	
}

void sctutorial(){ // switch case do tutorial
	scanf (" %s", &opcao2);
			switch (opcao2){ //SC tutorial OPCAO2                              // INICIO DO SWITCH CASE TUTORIAL
			
			case 49: //Lista de habilidades OPCAO2
				ListaHab(); // printf das lista de habilidade
			break;
			
			case 50: //Jogabilidade OPCAO2
				Jogabilidade(); // printf da jogabilidade do game
				break;	
			case 51://como jogar tutorial OPCAO2
			ComoJogar(); // printf menu de como jogar
    		break;
    		
    		case 52: //Voltar ao menu principal OPCAO2
    			manter = false;
    			system("cls");
    			TesteMenu ();
    		break;
    		
			default:
			system("cls");
			printf("Opção Invalida.\n\n");
			                                                                  // FIM DO SWITCH CASE TUTORIAL
		};
}

void trocanome(){
	scanf (" %s", &opcao3);                                                //INICIO SWITCH CASE TROCA DE NICK
			switch (opcao3){ //OPCAO3
				
			case 49: //OPCAO3
			
		rename("nickname.txt", "nomeexcluir.txt");
		remove("nomeexcluir.txt");
		nomes = fopen("nickname.txt", "w");
		system("cls");
		
    printf ("XXXXXXXXXXXXXXXXXXXXXXXXxxXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf ("X        o           |Mudança|              O    X\n");
    printf ("X               O    |  de   |    O              X\n");
    printf ("X  O      o          | Nomes |              o    X\n");
    printf ("X             O      X-------X        o          X\n");
    printf ("X                             o               O  X\n");
    printf ("X      ->Nomes atuais:                           X\n");
    std::cout << "X        Player1: " << nome1;
	for(i = 0; nome1.length() + i < 31; i++){
		printf(" ");
	};
	printf("X\n");
	
    std::cout << "X        Player2: " << nome2;
	
	for(i = 0; nome2.length() + i < 31; i++){
		printf(" ");
	};
	printf("X\n");
    printf ("X    o                        o             O    X\n");
    printf ("X      ->Digite o novo nome do jogador 1         X\n");
    printf ("X   O                                            X\n");
    printf ("X                         o           O          X\n");
    printf ("X       o       O                           o    X\n");
    printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf ("->");
    fflush(stdin);
	std::getline(std::cin, nome1);
	fprintf(nomes, "%s\n", nome1.c_str());
    system("cls");
    printf ("XXXXXXXXXXXXXXXXXXXXXXXXxxXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf ("X    O      o        |Mudança|  O   o            X\n");
    printf ("X        o           |  de   |               o   X\n");
    printf ("X              O     | Nomes |                   X\n");
    printf ("X  O       o         X-------X    o       O      X\n");
    printf ("X                                                X\n");
    printf ("X      ->Nomes atuais:                           X\n");
    std::cout << "X        Player1: " << nome1;
	for(i = 0; nome1.length() + i < 31; i++){
		printf(" ");
	};
	printf("X\n");
    std::cout << "X        Player2: " << nome2;
	
	for(i = 0; nome2.length() + i < 31; i++){
		printf(" ");
	};
	printf("X\n");
    printf ("X                        o                 O     X\n");
    printf ("X  O   ->Digite o novo nome do jogador 2         X\n");
    printf ("X                                                X\n");
    printf ("X               o       O                  O     X\n");
    printf ("X   O                          o                 X\n");
    printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf ("->");
    std::getline(std::cin, nome2);
	fprintf(nomes, "%s", nome2.c_str());
	fclose(nomes);
	system("cls");
    printf ("XXXXXXXXXXXXXXXXXXXXXXXXxxXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf ("X                    |Mudança|                o  X\n");
    printf ("X     o     O        |  de   |     o             X\n");
    printf ("X                    | Nomes |              O    X\n");
    printf ("X        O       o   X-------X                   X\n");
    printf ("X   o                             O           o  X\n");
    printf ("X      ->Nomes atuais:                           X\n");
    std::cout << "X        Player1: " << nome1;
	for(i = 0; nome1.length() + i < 31; i++){
		printf(" ");
	};
	printf("X\n");
	
    std::cout << "X        Player2: " << nome2;
	
	for(i = 0; nome2.length() + i < 31; i++){
		printf(" ");
	};
	printf("X\n");
    printf ("X  O                                  o          X\n");
    printf ("X     1->Deseja trocar de nome?                  X\n");
    printf ("X  o                                O       O    X\n");
    printf ("X     2->Retornar ao Menu Principal              X\n");
    printf ("X                                           o    X\n");
    printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf ("->");
	break;
	 
		
    		case 50: //Voltar ao menu principal
    			manter = false;
    			system("cls");
    			TesteMenu ();
    		break;
    	
			default:
			system("cls");
			printf("Opção Invalida.\n\n");                                  //FIM DO SWITCH CASE TROCA DE NICK
			trocanome();
				}
}

void TesteMenu () {

	
	MenuPrincipal(); //printf do menu principal
	scanf (" %s", &opcao);

	switch (opcao){
		
		case 49: //Criação de jogo OPCAO1                                       // INICIO SWITCH CASE MENU PRINCIPAL
		system("cls");
		printf ("Novo jogo sendo criado...");
		delay(1);
		Selecao1();
		 Selecao2();
		//system("pause");
		//TesteMenu();
		break;
		
		case 50: //Tutorial OPCAO1
		manter = true;
			while (manter){
			MenuTutorial(); // printf menu do tutorial
			sctutorial(); // switch case tutorial
			}

    break;		
    	case 51://mudança de nome OPCAO1
    manter = true;

	
    while(manter){
    	
    memset(nick1, 0, sizeof(nick1));
    memset(nick2, 0, sizeof(nick2));
    nomes = fopen("nickname.txt", "r");
	fgets(nick1, 50, nomes);
	while(fgets(nick2, 50, nomes) != NULL ){}
	fclose(nomes);
	
	nick1[strlen(nick1)-1]='\0';
	
	nome1.assign(nick1);	
	nome2.assign(nick2);
		
	system("cls");
    printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf ("X          o         |Mudança|    o              X\n");
    printf ("X     O         O    |  de   |          O     o  X\n");
    printf ("X                    | Nomes |                   X\n");
    printf ("X      o             X-------X    O       o      X\n");
    printf ("X            O                                O  X\n");
    printf ("X      ->Nomes atuais:                   O       X\n");
    std::cout << "X        Player1: " << nome1;
	for(i = 0; nome1.length() + i < 31; i++){
		printf(" ");
	};
	printf("X\n");
	
    std::cout << "X        Player2: " << nome2;
	for(i = 0; nome2.length() + i < 31; i++){
		printf(" ");
	};
	printf("X\n");
    printf ("X           O        o             O             X\n");
    printf ("X     1->Deseja trocar de nome?            o     X\n");
    printf ("X  o                                  o          X\n");
    printf ("X     2->Retornar ao Menu Principal           O  X\n");
    printf ("X              o                                 X\n");
    printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf ("->");
			trocanome(); //switch case de cima e logica da troca
			
				}
    		break;
    		
    		
		case 52://sair do jogo OPCAO1
			
		system("cls");
		printf("\n                           Finalizando jogo...\n\n");
		lapagod ();
		exit(0);
		break;
	
		default:
		system("cls");
		printf("Opção Invalida.\n\n");                                      // FIM DO SWITCH CASE DO MENU PRINCIPAL
		TesteMenu	 ();	
}
}


