
		void attackboost() {
		
			//attackboost
		if(players[9].hp > 0 && players[9].skill == 1 && turno == 1){
		
		
		printf("a sua tropa especial possui +2 de dano!!");
		system("pause");
		actions ();
		}
			
		else if(players[18].hp > 0 && players[18].skill == 1 && turno == 2){
		
		printf("a sua tropa especial possui +2 de dano!!");
		system("pause");
		actions ();
		}
	}
		void hpboost() {
		
			//hpboost
			
		if(players[9].hp > 0 && players[9].skill == 1 && turno == 1){	
		
		
		//int modificadorhp;
		
		//modificadorhp = 10;
		
		printf("a sua tropa especial possui +10 de hp extra");
		system("pause");
		actions ();
	}
		else if(players[18].hp > 0 && players[18].skill == 1 && turno == 2){
		printf("a sua tropa especial possui +10 de hp extra");
		system("pause");
		actions ();
	}
}
	
	void freeze() {
			//freeze
			
			
			
			int probabilidade;
			int stun;
			int SS;
			int tempnewy;
			int coordenada;
			int tempy;
			
			
				if(players[9].hp > 0 && players[9].skill == 6 && turno == 1){
			
				printf("escolha a coordenada que voce deseja ativar o freeze...\n");
				
				scanf("%s %d",&tempx,&tempy);
				if(tempy == 0){
				tempnewy = 10;
				} else{
				tempnewy = tempy;}
				tempfinx();
				
				
		
				coordenada = finx + tempnewy;
			
				
				printf("Aplicando a probabilidade de 70%...\n");		
				delay(25);
				probabilidade = rand() % 101;
					if( probabilidade <= 30) {
						
						printf("A sua probabilidade foi: %d%%\n", probabilidade);
						delay(25);
						printf("a chance de congelar o inimigo falhou...\n");
						delay(25);
					}
					
						else {
				
									printf("A probabilidade foi: %d%% Sucesso!!\n", probabilidade);
									delay(25);
									for(SS = 1; SS < 19; SS++){
									if(players[SS].A == coordenada){
									players[SS].stun = 2;
									}
									}
								}					
						}
						
				else if(players[18].hp > 0 && players[18].skill == 6 && turno == 2){
						
				printf("escolha a coordenada que voce deseja ativar o freeze...\n");
				
				scanf("%s %d",&tempx,&tempy);
				if(tempy == 0){
				tempnewy = 10;
				} else{
				tempnewy = tempy;
				}
				tempfinx();
				
				
		
				coordenada = finx + tempnewy;
			

				printf("Aplicando a probabilidade de 70%...\n");		
				delay(25);
				probabilidade = rand() % 101;
				
					if( probabilidade <= 30) {
						
						printf("A sua probabilidade foi: %d%%\n", probabilidade);
						delay(25);
						printf("a chance de congelar o inimigo falhou...\n");	
						delay(25);
					}
					
					
						else {
				
									printf("A probabilidade foi: %d%% Sucesso!!\n", probabilidade);
									delay(25);
									for(SS = 1; SS < 19; SS++){
									if(players[SS].A == coordenada){
									players[SS].stun = 2;
									}
									}
								}				
						}
	}
						
						
	bool wall0 (int coordenada){

		if(coordenada == 80 || coordenada == 70 || coordenada == 20 || coordenada == 40 || coordenada == 30){
		return true;
	}
		else{
		return false;
	}
		}
		
		bool wall2(int coordenada){
		if(coordenada == 81){
		return true;
	}
		else{
		return false;
	}
		}
		
			bool wall3(int coordenada){
			if(coordenada == 71 || coordenada == 61 || coordenada == 51 || coordenada == 41 || coordenada == 31 || coordenada == 21){
			return true;
			}
			else{
				return false;
			}			
			}
			
			bool wall4(int coordenada){	
			if(coordenada == 90){
			return true;
			}
			else{
				return false;
			}			
			}
				
				bool wall5(int coordenada){
			if(coordenada == 20){
			return true;
			}
			else{
				return false;
			}			
			}
			
			bool wall6(int coordenada){
			if(coordenada == 11){
			return true;
			}
			else{
				return false;
			}			
			}
			
			bool wall7(int coordenada){
			if(coordenada == 52 || coordenada == 53 || coordenada == 54 || coordenada == 55 || coordenada == 56 || coordenada == 57 || coordenada == 58 || coordenada == 59){
			return true;
			}
			else{
				return false;
			}			
			}

			bool wall8(int coordenada){
			if(coordenada == 42 || coordenada == 43 || coordenada == 44 || coordenada == 45 || coordenada == 46 || coordenada == 47 || coordenada == 48 || coordenada == 49){
			return true;
			}
			else{
				return false;
			}			
			}
			
			bool wall9(int coordenada){
			if(coordenada == 41){
			return true;
			}
			else{
				return false;
			}			
			}
			
			bool wall10(int coordenada){
			if(coordenada == 51){
			return true;
			}
			else{
				return false;
			}			
			}

			bool wall11(int coordenada){
			if(coordenada == 50){
			return true;
			}
			else{
				return false;
			}			
			}
			
			bool wall12(int coordenada){
			if(coordenada == 60){
			return true;
			}
			else{
				return false;
			}			
			}
			
	
		void heal() {
		
			//heal

		int coordenada;
		int hp;
		int areaafetada[8];
		int seila2;
		
		
		seila2 = 1;
	
		if(players[9].hp > 0 && players[9].skill == 5 && turno == 1){
	
		printf("Curando ao redor do personagem especial em area 3x3...\n ");
		delay(20);
		
		coordenada = players[9*turno].A;
				
			areaafetada[0] = coordenada + 1;
			areaafetada[1] = coordenada - 1;
			areaafetada[2] = coordenada + 10;
			areaafetada[3] = coordenada - 10;
			areaafetada[4] = coordenada + 11;
			areaafetada[5] = coordenada - 11;
			areaafetada[6] = coordenada + 9;
			areaafetada[7] = coordenada - 9;
			
			if (wall0 (coordenada) == true) {
				
			for(seila2 = 1 ; seila2 < 19 ; seila2++){
			
				if(players[seila2].A == areaafetada[1]){
				players[seila2].hp = players[seila2].hp + 3;

						}
				if(players[seila2].A == areaafetada[2]){
				players[seila2].hp = players[seila2].hp + 3;
						
						}
					if(players[seila2].A == areaafetada[3]){
				players[seila2].hp = players[seila2].hp + 3;
						
						}
					if(players[seila2].A == areaafetada[6]){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
					if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
					if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;

						}
					}
			/*areaafetada[1] = coordenada - 1;
			areaafetada[2] = coordenada + 10;
			areaafetada[3] = coordenada - 10;
			areaafetada[6] = coordenada + 9;
			areaafetada[5] = coordenada - 11;*/
			//checada e verificada
			}

			
			
			else if(wall2 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
					if(players[seila2].A == areaafetada[0]){
				players[seila2].hp = players[seila2].hp + 3;					
						}
						if(players[seila2].A == areaafetada[3]){
						players[seila2].hp = players[seila2].hp + 3;	
						}
						if(players[seila2].A == areaafetada[7]){
						players[seila2].hp = players[seila2].hp + 3;
						}
						if(players[seila2].A == coordenada){
						players[seila2].hp = players[seila2].hp + 3;

						}
							
			
			/*areaafetada[0] = coordenada + 1;
			areaafetada[3] = coordenada - 10;
			areaafetada[7] = coordenada - 9;
			//checada e verificada*/
			
			}
			}
			
			else if (wall3 (coordenada) == true) {
				
			for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[4]){
					players[seila2].hp = players[seila2].hp + 3;
					}
				if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
						}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}		
			/*areaafetada[0] = coordenada + 1;
			areaafetada[2] = coordenada + 10;
			areaafetada[3] = coordenada - 10;
			areaafetada[4] = coordenada + 11;
			areaafetada[5] = coordenada - 11;*/
		}}
	
			else if (wall4 (coordenada) == true) {

			for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
			}
			areaafetada[3] = coordenada - 10;
			areaafetada[1] = coordenada - 1;
			areaafetada[5] = coordenada - 11;
			//checada e verificada
			}

			else if (wall5 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[6]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
			}
			/*areaafetada[2] = coordenada + 10;
			areaafetada[1] = coordenada - 1;
			areaafetada[6] = coordenada + 9;*/
			}
			
			else if(wall6 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[4]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;	
				}
				/*areaafetada[0] = coordenada + 1;
				areaafetada[2] = coordenada + 10;
				areaafetada[4] = coordenada + 11;*/
			}
		}
		
			else if (wall7 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[4]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[6]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
			}
				/*areaafetada[0] = coordenada + 1;
				areaafetada[1] = coordenada - 1;
				areaafetada[6] = coordenada + 9;
				areaafetada[4] = coordenada + 11;
				areaafetada[2] = coordenada + 10;*/
			}
		
			else if (wall8 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[7]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;	
				}
				/*areaafetada[0] = coordenada + 1;
				areaafetada[1] = coordenada - 1;
				areaafetada[5] = coordenada - 11;
				areaafetada[7] = coordenada - 9;
				areaafetada[3] = coordenada - 10;*/
				
			}
		}
			else if (wall9 (coordenada) == true) {
				
			for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[7]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;	
				}
				/*areaafetada[0] = coordenada + 1;
				areaafetada[7] = coordenada - 9;
				areaafetada[3] = coordenada - 10;*/
				
			}
		}
			
			else if (wall10 (coordenada) == true) {
				
			for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[4]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
				}
				/*areaafetada[0] = coordenada + 1;
				areaafetada[4] = coordenada + 11;
				areaafetada[2] = coordenada + 10;*/
				
			}
		}
			
			else if (wall11 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
				}
				/*areaafetada[1] = coordenada - 1;
				areaafetada[5] = coordenada - 11;
				areaafetada[3] = coordenada - 10;*/
				
			}
		}
			else if (wall12 (coordenada) == true) {
				
			for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[6]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
				}
				/*areaafetada[1] = coordenada - 1;
				areaafetada[2] = coordenada + 10;
				areaafetada[6] = coordenada + 9;*/				
			}

		}	

			else if (!(wall0(coordenada) && wall2(coordenada) && wall3(coordenada) && wall4(coordenada) && wall5(coordenada) && wall6(coordenada) && wall7(coordenada) && wall8(coordenada) && wall9(coordenada) && wall10(coordenada) && wall11(coordenada) && wall12(coordenada))){
			for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[4]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[6]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[7]){
					players[seila2].hp = players[seila2].hp + 3;
				
				}
}
}
}
		else if(players[18].hp > 0 && players[18].skill == 5 && turno == 2){

		printf("Curando ao redor do personagem especial em area 3x3...\n ");
		delay(20);
		
		coordenada = players[9*turno].A;
				
			areaafetada[0] = coordenada + 1;
			areaafetada[1] = coordenada - 1;
			areaafetada[2] = coordenada + 10;
			areaafetada[3] = coordenada - 10;
			areaafetada[4] = coordenada + 11;
			areaafetada[5] = coordenada - 11;
			areaafetada[6] = coordenada + 9;
			areaafetada[7] = coordenada - 9;
			
			if (wall0 (coordenada) == true) {
				
			for(seila2 = 1 ; seila2 < 19 ; seila2++){
			
				if(players[seila2].A == areaafetada[1]){
				players[seila2].hp = players[seila2].hp + 3;

						}
				if(players[seila2].A == areaafetada[2]){
				players[seila2].hp = players[seila2].hp + 3;
						
						}
					if(players[seila2].A == areaafetada[3]){
				players[seila2].hp = players[seila2].hp + 3;
						
						}
					if(players[seila2].A == areaafetada[6]){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
					if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
					if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;

						}
					}
			/*areaafetada[1] = coordenada - 1;
			areaafetada[2] = coordenada + 10;
			areaafetada[3] = coordenada - 10;
			areaafetada[6] = coordenada + 9;
			areaafetada[5] = coordenada - 11;*/
			//checada e verificada
			}

			
			
			else if(wall2 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
					if(players[seila2].A == areaafetada[0]){
				players[seila2].hp = players[seila2].hp + 3;					
						}
						if(players[seila2].A == areaafetada[3]){
						players[seila2].hp = players[seila2].hp + 3;
						
						}
						if(players[seila2].A == areaafetada[7]){
						players[seila2].hp = players[seila2].hp + 3;
						}
						if(players[seila2].A == coordenada){
						players[seila2].hp = players[seila2].hp + 3;
						}
							
			
			/*areaafetada[0] = coordenada + 1;
			areaafetada[3] = coordenada - 10;
			areaafetada[7] = coordenada - 9;*/
			//checada e verificada
			
			}
			}
			
			else if (wall3 (coordenada) == true) {
				
			for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[4]){
					players[seila2].hp = players[seila2].hp + 3;
					}
				if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
						}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}		
			/*areaafetada[0] = coordenada + 1;
			areaafetada[2] = coordenada + 10;
			areaafetada[3] = coordenada - 10;
			areaafetada[4] = coordenada + 11;
			areaafetada[5] = coordenada - 11;*/
		}}
	
			else if (wall4 (coordenada) == true) {

			for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
			}
			/*areaafetada[3] = coordenada - 10;
			areaafetada[1] = coordenada - 1;
			areaafetada[5] = coordenada - 11;*/
			//checada e verificada
			}

			else if (wall5 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[6]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
			}
			/*areaafetada[2] = coordenada + 10;
			areaafetada[1] = coordenada - 1;
			areaafetada[6] = coordenada + 9;*/
			}
			
			else if(wall6 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[4]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
				/*areaafetada[0] = coordenada + 1;
				areaafetada[2] = coordenada + 10;
				areaafetada[4] = coordenada + 11;*/
			}
		}
		
			else if (wall7 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[4]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[6]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
			}
				/*areaafetada[0] = coordenada + 1;
				areaafetada[1] = coordenada - 1;
				areaafetada[6] = coordenada + 9;
				areaafetada[4] = coordenada + 11;
				areaafetada[2] = coordenada + 10;*/
			}
		
			else if (wall8 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[7]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
				/*areaafetada[0] = coordenada + 1;
				areaafetada[1] = coordenada - 1;
				areaafetada[5] = coordenada - 11;
				areaafetada[7] = coordenada - 9;
				areaafetada[3] = coordenada - 10;*/
				
			}
		}
			else if (wall9 (coordenada) == true) {
				
			for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[7]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
				/*areaafetada[0] = coordenada + 1;
				areaafetada[7] = coordenada - 9;
				areaafetada[3] = coordenada - 10;*/
				
			}
		}
			
			else if (wall10 (coordenada) == true) {
				
			for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[4]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
				/*areaafetada[0] = coordenada + 1;
				areaafetada[4] = coordenada + 11;
				areaafetada[2] = coordenada + 10;*/
				
			}
		}
			
			else if (wall11 (coordenada) == true) {
				
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
				/*areaafetada[1] = coordenada - 1;
				areaafetada[5] = coordenada - 11;
				areaafetada[3] = coordenada - 10;*/
				
			}
		}
			else if (wall12 (coordenada) == true) {
				
			for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				
				if(players[seila2].A == areaafetada[6]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
						
						}
				/*areaafetada[1] = coordenada - 1;
				areaafetada[2] = coordenada + 10;
				areaafetada[6] = coordenada + 9;*/				
			}

		}	
		
			else if (!(wall0(coordenada) && wall2(coordenada) && wall3(coordenada) && wall4(coordenada) && wall5(coordenada) && wall6(coordenada) && wall7(coordenada) && wall8(coordenada) && wall9(coordenada) && wall10(coordenada) && wall11(coordenada) && wall12(coordenada))){
				for(seila2 = 1 ; seila2 < 19 ; seila2++){
				if(players[seila2].A == coordenada){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[0]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[1]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[2]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[3]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[4]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[5]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[6]){
					players[seila2].hp = players[seila2].hp + 3;
				}
				if(players[seila2].A == areaafetada[7]){
					players[seila2].hp = players[seila2].hp + 3;
				
				}	
}
}
}
}
