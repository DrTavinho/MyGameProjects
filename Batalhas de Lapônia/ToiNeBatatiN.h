


bool movechars(int direct, char typed, char expect){
	
	
	if(A[direct] == expect){
	A[direct] = typed;
	
	return true ;
} else {
	
	return false;
}
	
	
}



void createchars(){
	int tempnewy;
	for(tempi = 1; tempi < 10;tempi++){
	players[tempi].time = 1; //time
	players[tempi].hp = 10; //vida 
	players[tempi].A = 0;
	players[tempi].tipo = 1; //tipo, 1, 2, 3 (#), 4 (@)
	players[tempi].dano = 4; //dano
	players[tempi].skill = 0; //skill
	system("cls");
	printMAP();
	std::cout << "\n" << nome2 ;
	printf(", digite o X e o Y da %d peca (exemplo: A 1). \nSua area disponivel e de x = A ~ D;  e y = 1 ~ 10(0)\n", tempi);
	scanf("%s %d",&tempx,&tempy);
	if(tempy == 0){
		tempnewy = 10;
	} else{
	tempnewy = tempy;}
	tempfinx();
	if(tempy < 0 or tempy > 9 or A[finx+tempnewy] != ' ' or finx + tempnewy > 50 or finx + tempnewy <= 10 ){
		printf("Posicao invalida!\n");
		//printf("%d %d %d %d %d",tempx < 1,tempx > mapax - 1,tempy < 1, tempy > mapay/2-1,mapa[tempx][tempy] != ' ');
		tempi = tempi-1;
		Sleep(1500);
	}
	else{
		if(tempi <5){
			
			players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);
		
		players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'X';
		players[tempi].tipo = 1 ;
		players[tempi].typedesc = 'X';	
	
	}else if(tempi< 9){
		
			players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);
		
			players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'Y';
		players[tempi].tipo = 2 ;
		players[tempi].typedesc = 'Y';
		
		
	}else if(tempi < 10){
		if( player1skill == 1){
			players[tempi].dano = 6;
		
		}else if(player1skill == 2){
			players[tempi].hp = 20;
		}
		
		players[tempi].skill = player1skill;
			players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);
		
	players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'S';
		players[tempi].tipo = 3 ;
		players[tempi].typedesc = 'S';
	}

	}
	
}

for(tempi = 10; tempi < 19;tempi++){
	players[tempi].time = 2; //time
	players[tempi].hp = 10; //vida
	players[tempi].A = 0;
	players[tempi].tipo = 1; //tipo, 1, 2, 3 (#), 4 (@)
	players[tempi].dano = 4; //dano
	players[tempi].skill = 0; //skill
	system("cls");
	printMAP();
	std::cout << "\n" << nome2 ;
	printf(", digite o X e o Y da %d peca (exemplo: E 1). \nSua area disponivel e de x = E ~ H e y = 1 ~ 10 (0)\n",tempi-9 );
	scanf("%s %d",&tempx,&tempy);
	if(tempy == 0){
		tempnewy = 10;
	} else{
	tempnewy = tempy;}
	tempfinx();
	
	if(tempy < 0 or tempy > 9 or A[finx+tempnewy] != ' ' or finx + tempnewy > 90 or finx + tempnewy <= 50 ){
		printf("Posicao invalida!\n");
		//printf("%d %d %d %d %d",tempx < 1,tempx > mapax - 1,tempy < mapay/2, tempy > mapay-1,mapa[tempx][tempy] != ' ');
		tempi = tempi-1;
		Sleep(1500);
	}
	else{
	if(tempi <14){
		players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);	
		players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'X';
		players[tempi].tipo = 1 ;
		players[tempi].typedesc = 'X';
		
	}else if(tempi< 18){
		
			players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);
		
			players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'Y';
		players[tempi].tipo = 2 ;
		players[tempi].typedesc = 'Y';
		
	}else if(tempi < 19){
	if( player2skill == 1){
			players[tempi].dano = 6;
		
		}else if(player2skill == 2){
			players[tempi].hp = 20;
		}
		players[tempi].skill = player2skill ;
		
			players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);
		
	players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'S';
		players[tempi].tipo = 3 ;
		players[tempi].typedesc = 'S';
	}
}
} 
}

void askname(void) {
	//printf("\nDigite o nome do primeiro jogador: ");
	//std::cin >> nome1; 
	//printf("\nDigite o nome do segundo jogador: ");
	//std::cin >> nome2;	
	memset(nick1, 0, sizeof(nick1));
    memset(nick2, 0, sizeof(nick2));
    nomes = fopen("nickname.txt", "r");
    fgets(nick1, 50, nomes);
    while(fgets(nick2, 50, nomes) != NULL ){}
    fclose(nomes);
    
    nick1[strlen(nick1)-1]='\0';
    
    nome1.assign(nick1);    
    nome2.assign(nick2);
	
}


void move(){
	system("cls");
	printMAP();
	if(turno == 1){
		std::cout <<"\t\t "<< nome1 ;
	}else{
		std::cout <<"\t\t "<< nome2;
	}
	printf(" Digite o numero do guerreiro que voce quer andar com.\n");
	for(tempi = 9 * (turno - 1) + 1 ;  tempi <= 9 * turno; tempi++){
		if(players[tempi].hp > 0){
			if(tempi%2 == 0){
		printf("<Guerreiro %d - (tipo %d)> - Posicao (%c %d) - Vida %d/10\n", tempi - 9 *(turno-1),players[tempi].tipo,players[tempi].X,players[tempi].Y,players[tempi].hp); // com \n
		} else{
		printf("<Guerreiro %d - (tipo %d)> - Posicao (%c %d) - Vida %d/10||", tempi - 9 *(turno-1),players[tempi].tipo,players[tempi].X,players[tempi].Y,players[tempi].hp); // sem \n
		}}}
	
		fflush(stdin);
		scanf("%d",&pergunta);
		if(turno == 2){
			pergunta = pergunta + 9;
			
		}
		fflush(stdin);

	
		if(players[pergunta].time == turno and players[pergunta].hp > 0 and players[pergunta].stun <= 0 && pergunta >= 1 && pergunta <= (9*turno) ){
		
				printf("\nPara onde voce quer se mover? (W - cima) (A - esquerda) (S - baixo) (D - direita)");
				printf("\n");
				scanf("%s", &a);
				if(direcionais(toupper(a)) == true){
					
					if(movechars(dirresult , players[pergunta].typedesc, ' ')){
						movechars(players[pergunta].A, ' ', players[pergunta].typedesc);
						
						players[pergunta].A = dirresult; 
						getcoord(pergunta);
						movimt--;
						
						 }else{
						 	move();
						 }
						 }else{
						 	move();
						 }
						 
	} else {
		move();
	}
}
	
	



void randomchars(){
	int tempnewy;
	for(tempi = 1; tempi < 10;tempi++){
	players[tempi].time = 1; //time
	players[tempi].hp = 10; //vida 
	players[tempi].A = 0;
	players[tempi].tipo = 1; //tipo, 1, 2, 3 (#), 4 (@)
	players[tempi].dano = 4; //dano
	players[tempi].skill = 0; //skill
	system("cls");
	printMAP();
	std::cout << "\n" << nome2 ;
	printf(", digite o X e o Y da %d peca (exemplo: A 1). \nSua area disponivel e de x = A ~ D;  e y = 1 ~ 10(0)\n", tempi);
	tempx = 'A' + (rand() % 4);
	tempy = (rand() % 10);
	if(tempy == 0){
	tempnewy = 10;}
	else{
	tempnewy = tempy;
	}	
		tempfinx();
	if(tempy < 0 or tempy > 9 or A[finx+tempnewy] != ' ' or finx + tempnewy > 50 or finx + tempnewy < 10 ){
		printf("Posicao invalida!\n");
		//printf("%d %d %d %d %d",tempx < 1,tempx > mapax - 1,tempy < 1, tempy > mapay/2-1,mapa[tempx][tempy] != ' ');
		tempi = tempi-1;
	
	}
	else{
		if(tempi <5){
			
			players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);
		
		players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'X';
		players[tempi].tipo = 1 ;
		players[tempi].typedesc = 'X';	
	
	}else if(tempi< 9){
		
			players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);
		
			players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'Y';
		players[tempi].tipo = 2 ;
		players[tempi].typedesc = 'Y';
		
		
	}else if(tempi < 10){
		if( player1skill == 1){
			players[tempi].dano = 6;
		
		}else if(player1skill == 2){
			players[tempi].hp = 20;
		}
		
		players[tempi].skill = player1skill;
		
			players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);
		
	players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'S';
		players[tempi].tipo = 3 ;
		players[tempi].typedesc = 'S';
	}

	}
}

for(tempi = 10; tempi < 19;tempi++){
	players[tempi].time = 2; //time
	players[tempi].hp = 10; //vida
	players[tempi].A = 0;
	players[tempi].tipo = 1; //tipo, 1, 2, 3 (#), 4 (@)
	players[tempi].dano = 4; //dano
	players[tempi].skill = 0; //skill
	system("cls");
	printMAP();
	std::cout << "\n" << nome2 ;
	printf(", digite o X e o Y da %d peca (exemplo: E 1). \nSua area disponivel e de x = E ~ H e y = 1 ~ 10 (0)\n",tempi-9 );
		tempx = 'E' + (rand() % 4);
	tempy = (rand()%10);
	
	if(tempy == 0){
	tempnewy = 10;}
	else{
	tempnewy = tempy;
	}	
	
	tempfinx();
	
	if(tempy < 0 or tempy > 9 or A[finx+tempnewy] != ' ' or finx + tempnewy > 90 or finx + tempnewy <= 50 ){
		printf("Posicao invalida!\n");
		//printf("%d %d %d %d %d",tempx < 1,tempx > mapax - 1,tempy < mapay/2, tempy > mapay-1,mapa[tempx][tempy] != ' ');
		tempi = tempi-1;

	}
	else{
	if(tempi <14){
		players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);	
		players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'X';
		players[tempi].tipo = 1 ;
		players[tempi].typedesc = 'X';
		
	}else if(tempi< 18){
		
			players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);
		
			players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'Y';
		players[tempi].tipo = 2 ;
		players[tempi].typedesc = 'Y';
		
	}else if(tempi < 19){
		if( player2skill == 1){
			players[tempi].dano = 6;
		
		}else if(player2skill == 2){
			players[tempi].hp = 20;
		}
		
		players[tempi].skill = player2skill;
		
			players[tempi].Y = tempy;
		players[tempi].X = toupper(tempx);
		
	players[tempi].A = finx + tempnewy;
		A[players[tempi].A] = 'S';
		players[tempi].tipo = 3 ;
		players[tempi].typedesc = 'S';
	}
}
} 
}




void shoot(){
	int temporario;
	int SS;
	char EoD;
	int seila;
	
	system("cls");
	printMAP();
	if(turno == 1){
		std::cout <<"\t\t "<< nome1 ;
	}else{
		std::cout <<"\t\t " << nome2;
	}
	printf(" Digite o numero do guerreiro que voce quer atirar com.\n");
	for(tempi = 9 * (turno - 1) + 1 ;  tempi <= 9 * turno; tempi++){
		if(players[tempi].hp > 0){
			if(tempi%2 == 0){
		printf("<Guerreiro %d - (tipo %d)> - Posicao (%c %d) - Vida %d/10", tempi - 9 *(turno-1),players[tempi].tipo,players[tempi].X,players[tempi].Y,players[tempi].hp);// com \n
		
			if (players[tempi].stun > 0) {
		printf("(Congelado)");}
		printf("\n");
		} 
		else{
		printf("<Guerreiro %d - (tipo %d)> - Posicao (%c %d) - Vida %d/10", tempi - 9 *(turno-1),players[tempi].tipo,players[tempi].X,players[tempi].Y,players[tempi].hp); // sem \n
	
		if (players[tempi].stun > 0) {
		printf("(Congelado)");}
		printf("||");
		}}}
		fflush(stdin);
		scanf("%d",&pergunta);
		if(turno == 2){
			pergunta = pergunta + 9;
			
		}
		fflush(stdin);
		if(players[pergunta].time == turno and players[pergunta].hp > 0 and players[pergunta].stun <= 0){
			
			
		
				if(players[pergunta].tipo == 1 || players[pergunta].tipo == 3 ){
					temporario = players[pergunta].A;
					if(players[pergunta].time == 1 ){
						SS = +10;
					}else{ 
					SS = -10;
					}
					while(temporario > 10 && temporario < 91){
						
					if(movechars(temporario + SS, 'o', ' ' )){
						temporario = temporario + SS;
						system("cls");
						printMAP();
						Sleep(200);
					}else{
						temporario = temporario + SS;
						for(SS = 1; SS < 26; SS++){
						if(players[SS].A == temporario){
							players[SS].hp  = players[SS].hp - players[pergunta].dano;
							if(players[SS].hp <= 0){
							A[players[SS].A] = 'O';
							system("cls");
							printMAP();
							Sleep(1000);
							}else{
								Sleep(300);
							}
						}			
					}
					break;		
					}
					}
					cleanmapa();
								
				
					
				}else if(players[pergunta].tipo == 2){
					printf("Atirar para a esquerda ou direita? (E = Esquerda), (D = Direita)");
					fflush(stdin);
					scanf("%s", &EoD );
					temporario = players[pergunta].A;
					if(players[pergunta].time == 1 ){
						SS = +10;
					}else{ 
					SS = -10;
					}
					
					seila = toupper(EoD);
					switch(seila){
						case 69:
							
							SS = SS - 1;
							EoD = 'o'    ;
							
							while(temporario > 10 && temporario < 91){
								if(wall(temporario, 0)){
						break;
						}else{
					if(movechars(temporario + SS, 'o', ' ' )){
						temporario = temporario + SS;
						system("cls");
						printMAP();
						Sleep(200);
					}else{
						temporario = temporario + SS;
						for(SS = 1; SS <26; SS++){
						if(players[SS].A == temporario){
							players[SS].hp  = players[SS].hp - players[pergunta].dano;
							
							if(players[SS].hp <= 0){
							A[players[SS].A] = 'O';
							system("cls");
							printMAP();
							Sleep(1000);
							}else{
								Sleep(200);
							}
						}
					}
					break;
				}
			 
			}}
							cleanmapa();
						
							
						break;
						
						case 68:
						SS = SS + 1;
						
						
						while(temporario > 10 && temporario < 91){
						if(wall(temporario, 1)){
						break;
						}else{
					if(movechars(temporario + SS, 'o' , ' ' )){
						temporario = temporario + SS;
						system("cls");
						printMAP();
						Sleep(200);
					}else{
						temporario = temporario + SS;
						for(SS = 1; SS <26; SS++){
						if(players[SS].A == temporario){
							players[SS].hp  = players[SS].hp - players[pergunta].dano;
							if(players[SS].hp <= 0){
							A[players[SS].A] = 'O';
							system("cls");
							printMAP();
							Sleep(100);
							
							}else{
								Sleep(200);
							}
						}
					}
					break;
				}
			 
			}
		}
						cleanmapa();
						
						
						break;
						
						default:
						shoot();
						
					}
					
				}
	
	
	
	
	
	
}else{shoot();
}



}


bool checkmortos(){
	int play1 = 0;
	int play2 = 0;
	
	for(tempi = 1; tempi < 10; tempi++){
		if(players[tempi].hp <= 0){
		play2++;
	}}
	for(tempi = 10; tempi < 19; tempi++){
		if(players[tempi].hp <= 0 ){
			play1++;
		}
	}
	if(play2  >= 9 ){
		winner = 1;
		return true;
	}else if(play1 >= 9){
		winner = 2;
		return true;
	}else{
		return false;
	}
	
	
}


void printwinner(){
	system("cls");
	printMAP();
	if(winner == 1){
		printf("\n\n\n\n\t\t");
		std::cout << nome1 << " é o vencedor!" <<std::endl;
	}else if(winner == 2){
			printf("\n\n\n\n\t\t");
		std::cout << nome1 << " é o vencedor!" <<std::endl;
	}
}

