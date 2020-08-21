

int uso = 0;

void barreira() {
	
	int xau;
	int opcao;
	
	
	system("cls");
	printMAP();
	if(turno == 1){
		std::cout <<"\t\t "<< nome1;
	}else{
		std::cout <<"\t\t "<< nome2;
	}
	
	
	
	if(players[9].hp > 0 && players[9].skill == 4 && turno == 1){
			
		xau = players[9].A;
			
			if(xau >= 11 && xau <= 40){
				
				players[20].hp = 0;
				players[21].hp = 0;
				players[22].hp = 0;
				matarb();
			
				if(wall(players[9].A, 0)){
					
					movechars(xau+11, '@', ' ');
					movechars(xau+10, '@', ' ');
					
				players[20].time = 1; //time
				players[20].hp = 2; //vida 
				players[20].A = xau+11;
				players[20].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[20].dano = 0; //dano
				players[20].skill = 0; //skill
				
				players[21].time = 1; //time
				players[21].hp = 2; //vida 
				players[21].A = xau+10;
				players[21].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[21].dano = 0; //dano
				players[21].skill = 0; //skill
					
				}else if(wall(players[9].A, 1)){
					
					movechars(xau+10, '@', ' ');
					movechars(xau+9, '@', ' ');
					
				players[21].time = 1; //time
				players[21].hp = 2; //vida 
				players[21].A = xau+10;
				players[21].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[21].dano = 0; //dano
				players[21].skill = 0; //skill
				
				players[22].time = 1; //time
				players[22].hp = 2; //vida 
				players[22].A = xau+9;
				players[22].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[22].dano = 0; //dano
				players[22].skill = 0; //skill
				
				}else{
					movechars(xau+11, '@', ' ');
					movechars(xau+10, '@', ' ');
					movechars(xau+9, '@', ' ');
					
				players[20].time = 1; //time
				players[20].hp = 2; //vida 
				players[20].A = xau+11;
				players[20].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[20].dano = 0; //dano
				players[20].skill = 0; //skill
				
				players[21].time = 1; //time
				players[21].hp = 2; //vida 
				players[21].A = xau+10;
				players[21].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[21].dano = 0; //dano
				players[21].skill = 0; //skill
				
				players[22].time = 1; //time
				players[22].hp = 2; //vida 
				players[22].A = xau+9;
				players[22].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[22].dano = 0; //dano
				players[22].skill = 0; //skill
				}
			
		}
		
	} else if (players[18].hp > 0 && players[18].skill == 4 && turno == 2) { //jogador de baixo
	
		xau = players[18].A;
		
		if(xau >= 61 && xau <= 90){
			
				players[23].hp = 0;
				players[24].hp = 0;
				players[25].hp = 0;
				matarb();
			
			if(wall(players[18].A, 0)){
				movechars(xau-11, '@', ' ');
				movechars(xau-10, '@', ' ');
				
				players[23].time = 2; //time
				players[23].hp = 2; //vida 
				players[23].A = xau-11;
				players[23].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[23].dano = 0; //dano
				players[23].skill = 0; //skill
				
				players[24].time = 2; //time
				players[24].hp = 2; //vida 
				players[24].A = xau-10;
				players[24].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[24].dano = 0; //dano
				players[24].skill = 0; //skill
				
			}else if(wall(players[18].A, 1)){
				movechars(xau-10, '@', ' ');
				movechars(xau-9, '@', ' ');
				
				players[24].time = 2; //time
				players[24].hp = 2; //vida 
				players[24].A = xau-10;
				players[24].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[24].dano = 0; //dano
				players[24].skill = 0; //skill
				
				players[25].time = 2; //time
				players[25].hp = 2; //vida 
				players[25].A = xau-9;
				players[25].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[25].dano = 0; //dano
				players[25].skill = 0; //skill
				
			}else{
				movechars(xau-11, '@', ' ');
				movechars(xau-10, '@', ' ');
				movechars(xau-9, '@', ' ');
				
				players[23].time = 2; //time
				players[23].hp = 2; //vida 
				players[23].A = xau-11;
				players[23].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[23].dano = 0; //dano
				players[23].skill = 0; //skill
				
				players[24].time = 2; //time
				players[24].hp = 2; //vida 
				players[24].A = xau-10;
				players[24].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[24].dano = 0; //dano
				players[24].skill = 0; //skill
				
				players[25].time = 2; //time
				players[25].hp = 2; //vida 
				players[25].A = xau-9;
				players[25].tipo = 9; //tipo, 1, 2, 3 (#), 4 (@)
				players[25].dano = 0; //dano
				players[25].skill = 0; //skill
				
			}		
			
		}
		
	}
     
}

void matarb() {
	
	int SS;
	
	for(SS = 20; SS < 26; SS++){
		
		if(players[SS].hp <= 0){
			movechars(players[SS].A, ' ', '@');
			
				}
			}	
			
			system("cls");
			printMAP();
			Sleep(1000);
					
		}
		
void dash() {

if (players[9].hp > 0 && players[9].skill == 3 && turno == 1) {
	
	if (uso == 0) {
		uso = 1;
		while(movimt >= 1) {
			printf("Você ainda pode mover mais %d vezes", movimt);
			Sleep(500);
			move();
		}
		
	} else {
		printf("\nVocê já usou essa habilidade nesta rodada. LIMITE (1)\n");
		Sleep(1000);
		actions();
	}
} else if (players[18].hp > 0 && players[18].skill == 3 && turno == 2) {

	if (uso == 0) {
		uso = 1;
		while(movimt >= 1) {
			printf("Você ainda pode mover mais %d vezes", movimt);
			Sleep(500);
			move();
		}
		
	} else {
		printf("\nVocê já usou essa habilidade nesta rodada. LIMITE (1)\n");
		Sleep(1000);
		actions();
	}

}

}
		
		
void inicio() {
fflush(stdin);

printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf ("X     O      o      |  Como  |    o              X\n");
	printf ("X                   | Deseja |             o     X\n");
	printf ("X   o     O         |iniciar?|      O            X\n");
	printf ("X            o      X--------X                O  X\n");
	printf ("X                                                X\n");
	printf ("X     1.Posicionar peças  2.Aleatorizar peças    X\n");
	printf ("X  O                                        O    X\n");
	printf ("X                                           o    X\n");
	printf ("X        o                  o          O         X\n");
	printf ("X         O                                      X\n");
	printf ("X  O             O                          o    X\n");
	printf ("X        o                o          O           X\n");
	printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf ("->");

	scanf("%d", &einicio);
	
	switch(einicio) {
		
		case 1:
			createchars();
		break;
		
		case 2:
			randomchars();
		break;
		
		default:
			system("cls");
			inicio();
			fflush(stdin);
		
	}

}







