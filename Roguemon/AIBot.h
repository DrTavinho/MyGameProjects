

void AIa() {

if(duelo == 1) {
	switch(ai) {
		
		case 1:
			
			if(inim[oponente].a[0] == 1) {		//SOCO
			
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t O INIMIGO TE SOCA!\n");
				
				rando = (rand() % 100);
				if (rando <= 80) {
					
					dano = vida;
					rando = (rand() % 100);
					
					if(rando >= 90) {
						SetConsoleTextAttribute(h,4);
						printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
						vida = vida - round(inim[oponente].ataque * 0.65 * prot * enf2);
						SetConsoleTextAttribute(h,15);
					} else {
						vida = vida - round(inim[oponente].ataque * 0.4 * prot * enf2);
					}
					
					dano = dano - vida;
					
					SetConsoleTextAttribute(h,12);
					printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
				} else {
					printf("\t\t\t\t\t\t\t ERROU\n");
					Sleep(1500);
				}	
			} else if(inim[oponente].a[0] == 2) {		//CHUTAR
			
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t O INIMIGO TE CHUTA!\n");
			
				rando = (rand() % 100);
				if (rando <= 70) {
					
					dano = vida;
					rando = (rand() % 100);
					
					if(rando >= 92) {
						vida = vida - round(inim[oponente].ataque * 1.1 * prot * enf2);
						SetConsoleTextAttribute(h,4);
						printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
						SetConsoleTextAttribute(h,15);
					} else {
						vida = vida - round(inim[oponente].ataque * 0.9 * prot * enf2);	
					}
					
					dano = dano - vida;
					SetConsoleTextAttribute(h,12);
					printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
				} else {
					printf("\t\t\t\t\t\t\t ERROU\n");
					Sleep(1500);
				}	
			} else if(inim[oponente].a[0] == 3) {		//CABEÇADA
			
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t O INIMIGO TE DA UMA CABEÇADA!\n");
				
				rando = (rand() % 100);
				if (rando <= 78) {
					
					dano = vida;
					rando = (rand() % 100);
					vida = vida - round(inim[oponente].ataque * 0.6 * prot * enf2);
					dano = dano - vida;
					SetConsoleTextAttribute(h,12);
					printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
					SetConsoleTextAttribute(h,15);
					if(rando >= 85) {
						printf("\t\t\t\t\t\t !!! VOCÊ FOI ATORDOADO !!!\n");
						stun++;
					}
					Sleep(1500);
					
				} else {
					printf("\t\t\t\t\t\t\t ERROU\n");
					Sleep(1500);
				}
				
			} 
			
			turno = 1;
			
		break;
			
		case 2:
			
			if(inim[oponente].a[1] == 1) {		//APUNHALAR
			
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t O INIMIGO TE APUNHALA!\n");
				
				
				for(i = 1; i<=3; i++) {
					rando = (rand() % 100);
					if (rando <= 50) {
						dano = vida;
						rando = (rand() % 100);
						if(rando >= 80) {
							vida = vida - round(inim[oponente].ataque * 0.32 * prot * enf2);
							SetConsoleTextAttribute(h,4);
							printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
							SetConsoleTextAttribute(h,15);
						} else {
							vida = vida - round(inim[oponente].ataque * 0.2 * prot * enf2);
						}
					
						dano = dano - vida;
						SetConsoleTextAttribute(h,12);
						printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
						SetConsoleTextAttribute(h,15);
						Sleep(1500);
					} else {
						printf("\t\t\t\t\t\t\t ERROU\n");
						Sleep(1500);
					}
				}
			} else if(inim[oponente].a[1] == 2) {		//FATIAR
			
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t O INIMIGO TE FATIA!\n");
				
				
				for(i = 1; i<=2; i++) {
					rando = (rand() % 100);
					if (rando <= 66) {
						dano = vida;
						rando = (rand() % 100);
						
						if(rando >= 80) {
							SetConsoleTextAttribute(h,4);
							printf("\t\t\t\t\t\t\t VOCÊ SANGRA!\n");
							SetConsoleTextAttribute(h,15);
							sang = sang + 2;
							
						}
						
						if(rando >= 93) {
							vida = vida - round(inim[oponente].ataque * 0.62 * prot * enf2);
							SetConsoleTextAttribute(h,4);
							printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
							SetConsoleTextAttribute(h,15);
						} else {
							vida = vida - round(inim[oponente].ataque * 0.28 * prot * enf2);
						}
					
						dano = dano - vida;
						SetConsoleTextAttribute(h,12);
						printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
						SetConsoleTextAttribute(h,15);
						Sleep(1500);
					} else {
						printf("\t\t\t\t\t\t\t ERROU\n");
						Sleep(1500);
					}
				}
				
			} else if(inim[oponente].a[1] == 3) { //MARTELO
					
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t O INIMIGO TE MARTELA!\n");
				
				rando = (rand() % 100);
				if (rando <= 55) {
					
					dano = vida;
					rando = (rand() % 100);
						if(rando >= 97) {
							vida = vida - round(inim[oponente].ataque * 1.6 * prot * enf2);
							SetConsoleTextAttribute(h,4);
							printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
							SetConsoleTextAttribute(h,15);
						} else {
							vida = vida - round(inim[oponente].ataque * 1.2 * prot * enf2);
						}
					dano = dano - vida;
					
					SetConsoleTextAttribute(h,12);
					printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
					SetConsoleTextAttribute(h,15);
					
					rando = (rand() % 100);
					if(rando > 60) {
						printf("\t\t\t\t\t\t !!! VOCÊ FOI ATORDOADO !!!\n");
						stun++;
					}
					Sleep(1500);
					
				} else {
					printf("\t\t\t\t\t\t\t ERROU\n");
					Sleep(1500);
				}
					
			} 
			
			turno = 1;
			
		break;
		
		case 3:
			
			if(inim[oponente].a[2] == 1) {		//PROTEÇÃO DIVINA
			
				printmapa();
				tabemin();
				
				SetConsoleTextAttribute(h,14);
				printf("\t\t\t\t\t\t\t O INIMIGO PARECE ESTAR CONJURANDO ALGUMA MAGIA!\n");
				Sleep(2000);
				prot2 = 0.85;
				printf("\t\t\t\t\t\t\t UM ESCUDO MAGICO PASSA A RODEAR O INIMIGO!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(2000);
			
			} else if(inim[oponente].a[2] == 2) {		//CURAR FERIDAS
				
				printmapa();
				tabemin();
				
				printf("\t\t\t\t\t\t\t O INIMIGO PASSA A BRILHAR NUMA AURA LUMINOSA!\n");
				Sleep(1500);
				rando = (rand() % 3);
				
				if(rando == 0) {
					dano = ceil(inim[oponente].vidamax * 0.09);
				} else if(rando == 1) {
					dano = ceil(inim[oponente].vidamax * 0.12);
				} else {
					dano = ceil(inim[oponente].vidamax * 0.15);
				} 
				inim[oponente].vida = inim[oponente].vida + dano;
				if (inim[oponente].vida > inim[oponente].vidamax) {
					inim[oponente].vida = inim[oponente].vidamax;
				}
				SetConsoleTextAttribute(h,10);
				printf("\t\t\t\t\t\t\t CUROU: %.0f \n", dano);
				SetConsoleTextAttribute(h,15);
				Sleep(1500);
				
			
			} else if(inim[oponente].a[2] == 3 && milagre2 >= 0) {	//MILAGRE
			
				printmapa();
				tabemin();
				
				SetConsoleTextAttribute(h,14);
				printf("\t\t\t\t\t\t\t A DETERMINAÇÃO DO INIMIGO PARECE AUMENTAR!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1500);
				milagre2 = 1;
				
			}
			
			turno = 1;
			
		break;
			
		case 4:
			
			if(inim[oponente].a[3] == 1) {		//VAMPIRISMO
			
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t O INIMIGO SE TRANSFORMA EM UM MORCEGO!\n");
				
				rando = (rand() % 100);
				if (rando <= 80) {
					
					dano = vida;
					rando = (rand() % 100);
					
					if(rando >= 94) {
						vida = vida - round(inim[oponente].ataque * 0.4 * prot * enf2);
						SetConsoleTextAttribute(h,4);
						printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
						SetConsoleTextAttribute(h,15);
					} else {
						vida = vida - round(inim[oponente].ataque * 0.25 * prot * enf2);
					}
					
					dano = dano - vida;
					inim[oponente].vida = inim[oponente].vida + dano;
					
					if (inim[oponente].vida > inim[oponente].vidamax) {
						inim[oponente].vida = inim[oponente].vidamax;
					}
					SetConsoleTextAttribute(h,12);
					printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
					Sleep(1500);
					SetConsoleTextAttribute(h,10);
					printf("\t\t\t\t\t\t\t CUROU: %.0f \n", dano);
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					
				} else {
					printf("\t\t\t\t\t\t\t ERROU\n");
					Sleep(1500);
				}
				
			} else if(inim[oponente].a[3] == 2) {		//ENVENENAR
			
				printmapa();
				tabemin();
								
				printf("\t\t\t\t\t\t\t O INIMIGO INVOCA UMA NUVEM VENENOSA PELA BOCA!\n");
				Sleep(1500);
				
				rando = (rand() % 2);
				
				SetConsoleTextAttribute(h,13);
				if(rando == 0) {
					veneno = veneno + 2;
					printf("\t\t\t\t\t\t\t ENVENENOU: 2\n");
				} else if(rando == 1) {
					veneno = veneno + 3;
					printf("\t\t\t\t\t\t\t ENVENENOU: 3\n");
				}
				SetConsoleTextAttribute(h,15);
				
				Sleep(1500);
				
			} else if(inim[oponente].a[3] == 3) {		//ENFURECER
			
				printmapa();
				tabemin();
				
				SetConsoleTextAttribute(h,12);
				printf("\t\t\t\t\t\t\tO INIMIGO GRITA EM RAIVA!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1500);
				
				if(enfc2 == 0){
						enf2 = enf2 * 1.2;
					}
					enfc2 = 3;
					if(enfc2 > 0){
						enf2 = enf2 * 1.08;
					}
				
			}
			
			turno = 1;
			
		break;
		
		default:		//DESESPERO
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t O INIMIGO SE DESESPERA POIS NÃO TEM EQUIPAMENTOS!\n");
				
				rando = (rand() % 100);
				if (rando <= 70) {
					
					dano = vida;
					rando = (rand() % 100);
					
					if(rando >= 60) {
						SetConsoleTextAttribute(h,4);
						printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
						vida = vida - 2;
						SetConsoleTextAttribute(h,15);
					} else {
						vida = vida - 1;
					}
					
					dano = dano - vida;
					
					SetConsoleTextAttribute(h,12);
					printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
				} else {
					printf("\t\t\t\t\t\t\t ERROU\n");
					Sleep(1500);
				}	
				turno = 1;
		
	}
	
		turno = 1;
	}
}


















