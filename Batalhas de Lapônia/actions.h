

int actions(){
	char optionis;
	
	system("cls");
	printMAP();
	if(turno == 1){
	std::cout << "É o turno de " << nome1 <<"."<<std::endl << "O que deseja fazer? - Ações restantes ("<< acoes << ")." << std::endl;
}else{
	std::cout << "É o turno de " << nome2 <<"."<<std::endl << "O que deseja fazer? - Ações restantes ("<< acoes << ")." << std::endl;
}
	printf(" 1. Atirar\n 2. Mover\n 3. Especial\n");
	fflush(stdin);
	scanf("%s", &optionis);
	
	switch(optionis){
		
		case 49:
		shoot();
		break;
		
		case 50:
		move();
		break;
		
		case 51:
			
			if(turno == 1) {
				//Skills(personagens[9].skill,9);
				if(player1skill == 4 && players[9].stun <= 0 && players[9].hp > 0){
				barreira();
				} 
				else if(player1skill == 6 && players[9].stun <= 0 && players[9].hp > 0){
				freeze();
				}
				else if(player1skill == 5 && players[9].stun <= 0 && players[9].hp > 0){
				heal();
				}
				else if(player1skill == 1 && players[9].stun <= 0 && players[9].hp > 0){
				attackboost();
				}
				else if(player1skill == 2 && players[9].stun <= 0 && players[9].hp > 0){
				hpboost();
				}
				else if(player1skill == 3 && players[9].stun <= 0 && players[9].hp > 0){
				dash();
				}	
				else {
					printf("\nSeu personagem especial(S) está morto/congelado");
					acoes++;
				}
			} else if(turno == 2) {
				//Skills(personagens[9].skill,9);
				if(player2skill == 4 && players[18].stun <= 0 && players[18].hp > 0){
				barreira();
				} 
				else if(player2skill == 6 && players[18].stun <= 0 && players[18].hp > 0){
				freeze();
				}
				else if(player2skill == 5 && players[18].stun <= 0 && players[18].hp > 0){
				heal();
				}
				else if(player2skill == 1 && players[18].stun <= 0 && players[18].hp > 0){
				attackboost();
				}
				else if(player2skill == 2 && players[18].stun <= 0 && players[18].hp > 0){
				hpboost();
				}
				else if(player1skill == 3 && players[18].stun <= 0 && players[18].hp > 0){
				dash();
				}
				else {
					printf("\nSeu personagem especial(S) está morto/congelado");
					acoes++;
				}
				}
		
	
			
		break;
		
		case 52:
		
		break;
		
		default:
		actions();	
		
		
	}
	
	
	
}
