


void batalha() {
	fflush(stdin);
	
	if (duelo == 0) {
		for (i = 0; i <= inimcontt; i++) {
			
			if(mimic == 1) {
				i = 100;
			}
			
			if ((mapa[direc][direc2] == 'M' || mimic == 1) && inim[i].poslin == direc && inim[i].poscol == direc2) {
				oponente = i;
				i = 999;
				duelo = 1;
				wait = 1;
			
			}
		}
	}
	
	while (duelo == 1) {
			
		if (turno == 1 && vida > 0) {
			
			if(stun == 0) {
				effec();
				tabela();
				testequip();
				checkvit();
				fflush(stdin);
				
			} else {
				printf("\n\t\t\t\t\t\t !!! ATORDOADO !!!\n");
				Sleep(1500);
				effec();
				checkvit();
				turno = 2;
				stun--;
				
			}	
			
		} else if (turno == 2 && inim[oponente].vida > 0) {
			
			if(stun2 == 0) {
				effec();
				AI();
				checkvit();
				fflush(stdin);	
				
			} else {
				printf("\n\t\t\t\t\t\t !!! ATORDOADO !!!\n");
				Sleep(1500);
				effec();
				checkvit();
				turno = 1;
				stun2--;
				
			}
			
		} else {
			
			switch(turno){
				
				case 49:
					turno = 2;
				break;
				
				case 50:
					turno = 1;
				break;
				
			}
			
		}
		
	}
	
}

void tabela() {

	printmapa();
	tabemin();
	printf("\n\t\t\t\t\t\t1.ATACAR  2.ITENS  3.FUGIR  4.PULAR VEZ\n");
	fflush(stdin);
	fflush(stdin);
	switch(toupper(getch())) {
		
		case 49:
			attack();
		break;
		
		case 50:
			bitens();
		break;
		
		case 51:
			
			rando = (rand() % 100);
			
			if(mimic == 1) {
				rando = 0;
			}
			
			if(rando > 45) {
				milagre = 0;
				milagre2 = 0;
				milagrep = 0;
				milagrep2 = 0;
				//estus = 0;
				//estusc = 3;
				stun = 0;
				stun2 = 0;
				sang = 0;
				sang2 = 0;
				veneno = 0;
				veneno2 = 0;
				enf = 1;
				enf2 = 1;
				enfc = 0;
				enfc2 = 0;
				prot = 1;
				prot2 = 1;
				duelo = 0;
				turno = 0;
				optn2 = 0;
				mimic = 0;
				printf("\n\t\t\t\t\t\t\t\tVOCÊ FUGIU\n");
				printf("\t\t\t\t\t\t\t");
				system("pause");
			} else {
				
				if(mimic == 1) {
					printf("\n\t\t\t\t\t\t\t\tO MÍMICO TE PRENDE!\n");
					printf("\n\t\t\t\t\t\t\t\tNÃO HÁ ESCAPATÓRIA!!\n");
				} else {
					printf("\n\t\t\t\t\t\t\t\tVOCÊ TENTA FUGIR MAS FALHA\n");
				}
				Sleep(1500);
				turno = 2;
				checkvit();
			}
			
		break;
		
		case 52:
			turno = 2;
			printf("\n\t\t\t\t\t\t\t\tVOCÊ PASSOU A VEZ\n");
			Sleep(1500);
			checkvit();
		break;
		
		case 70: 	//F
			keybd_event (VK_MENU, 0x36, 0, 0);
			keybd_event (VK_RETURN, 0x1C, 0, 0);
			keybd_event (VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
			keybd_event (VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
		break;
		
		default:
			SetConsoleTextAttribute(h,4);
			printf("\t\t\t\t\t\t!!! Opção Inválida !!!\n");
			SetConsoleTextAttribute(h,15);
			Sleep(200);
			tabela();
			
	}
	
}


void attack() {
	
	
	if(a[0] == 1) {
		printf("\t\t\t\t\t\t\t1.SOCAR%c %d/%d\n", upg[0], dura[0], durat[0]);
	} else if(a[0] == 2) {
		printf("\t\t\t\t\t\t\t1.CHUTAR%c %d/%d\n", upg[0], dura[0], durat[1]);
	} else if(a[0] == 3) {
		printf("\t\t\t\t\t\t\t1.CABEÇADA%c %d/%d\n", upg[0], dura[0], durat[2]);
	} else {
		printf("\t\t\t\t\t\t\t1.---\n");
	}
	
	
	if(a[1] == 1) {
		printf("\t\t\t\t\t\t\t2.APUNHALAR%c %d/%d\n", upg[1], dura[1], durat[3]);
	} else if(a[1] == 2) {
		printf("\t\t\t\t\t\t\t2.FATIAR%c %d/%d\n", upg[1], dura[1], durat[4]);
	} else if(a[1] == 3) {
		printf("\t\t\t\t\t\t\t2.MARTELAR%c %d/%d\n", upg[1], dura[1], durat[5]);
	} else {
		printf("\t\t\t\t\t\t\t2.---\n");
	}
	
	
	if(a[2] == 1) {
		printf("\t\t\t\t\t\t\t3.PROTEÇÃO DIVINA%c %d/%d\n", upg[2], dura[2], durat[6]);
	} else if(a[2] == 2) {
		printf("\t\t\t\t\t\t\t3.CURAR FERIDAS%c %d/%d\n", upg[2], dura[2], durat[7]);
	} else if(a[2] == 3) {
		printf("\t\t\t\t\t\t\t3.MILAGRE%c %d/%d\n", upg[2], dura[2], durat[8]);
	} else {
		printf("\t\t\t\t\t\t\t3.---\n");
	}
	
	
	if(a[3] == 1) {
		printf("\t\t\t\t\t\t\t4.VAMPIRISMO%c %d/%d\n", upg[3], dura[3], durat[9]);
	} else if(a[3] == 2) {
		printf("\t\t\t\t\t\t\t4.ENVENENAR%c %d/%d\n", upg[3], dura[3], durat[10]);
	} else if(a[3] == 3) {
		printf("\t\t\t\t\t\t\t4.ENFURECER%c %d/%d\n", upg[3], dura[3], durat[11]);
	} else {
		printf("\t\t\t\t\t\t\t4.---\n");
	}
		printf("\t\t\t\t\t\t\t0.VOLTAR\n");
	
	fflush(stdin);
	fflush(stdin);
	switch(toupper(getch())) {
		
		case 48:
			tabela();
		break;
		
		case 49:
			
			if(a[0] == 1) {		//SOCO
			
				if(saber[0] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE ATAQUE!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[0] = 1;
				}
			
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t VOCÊ SOCA O INIMIGO!\n");
				
				rando = (rand() % 100);
				
				if(upg[0] == '+') {
					rando = rando - 2;
				}
				
				if (rando <= 88) {
					
					dano = inim[oponente].vida;
					rando = (rand() % 100);
					
					if(upg[0] == ' ') {
						if(rando >= 85) {
							SetConsoleTextAttribute(h,4);
							printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
							inim[oponente].vida = inim[oponente].vida - round(ataque * 0.8 * prot2 * enf);
							SetConsoleTextAttribute(h,15);
						} else {
							inim[oponente].vida = inim[oponente].vida - round(ataque * 0.5 * prot2 * enf);
						}
					} else {
						if(rando >= 80) {
							
							SetConsoleTextAttribute(h,14);
							printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
							SetConsoleTextAttribute(h,15);
							
							SetConsoleTextAttribute(h,4);
							printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
							inim[oponente].vida = inim[oponente].vida - round(ataque * 0.96 * prot2 * enf);
							SetConsoleTextAttribute(h,15);
						} else {
							
							SetConsoleTextAttribute(h,14);
							printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
							SetConsoleTextAttribute(h,15);
							
							inim[oponente].vida = inim[oponente].vida - round(ataque * 0.6 * prot2 * enf);
						}
					}
					
					
					dano = dano - inim[oponente].vida;
					
					SetConsoleTextAttribute(h,12);
					printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					
					if(estus == 0 && estusc >= 1) {
						estusc--;
					}

					
				} else {
					printf("\t\t\t\t\t\t\t ERROU\n");
					Sleep(1500);
				}	
			} else if(a[0] == 2) {		//CHUTAR
			
				if(saber[1] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE ATAQUE!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[1] = 1;
				}
			
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t VOCÊ CHUTA O INIMIGO!\n");
			
				rando = (rand() % 100);
				
				if(upg[0] == '+') {
					rando = rando - 5;
				}
				
				if (rando <= 72) {
					
					if(estus == 0 && estusc >= 1) {
						estusc--;
					}

					dano = inim[oponente].vida;
					rando = (rand() % 100);
					
					if(upg[0] == ' ') {
						if(rando >= 90) {
							inim[oponente].vida = inim[oponente].vida - round(ataque * 1.2 * prot2 * enf);
							SetConsoleTextAttribute(h,4);
							printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
							SetConsoleTextAttribute(h,15);
						} else {
							inim[oponente].vida = inim[oponente].vida - round(ataque * prot2 * enf);	
						}
					} else {
						if(rando >= 82) {
							
							SetConsoleTextAttribute(h,14);
							printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
							SetConsoleTextAttribute(h,15);
							
							inim[oponente].vida = inim[oponente].vida - round(ataque * 1.3 * prot2 * enf);
							SetConsoleTextAttribute(h,4);
							printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
							SetConsoleTextAttribute(h,15);
						} else {
							
							SetConsoleTextAttribute(h,14);
							printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
							SetConsoleTextAttribute(h,15);
							
							inim[oponente].vida = inim[oponente].vida - round(ataque * 1.05 * prot2 * enf);	
						}
					}
					
					dano = dano - inim[oponente].vida;
					SetConsoleTextAttribute(h,12);
					printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
				} else {
					printf("\t\t\t\t\t\t\t ERROU\n");
					Sleep(1500);
				}	
			} else if(a[0] == 3) {		//CABEÇADA
			
				if(saber[2] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE ATAQUE!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[2] = 1;
				}
			
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t VOCÊ DA UMA CABEÇADA NO INIMIGO!\n");
				
				rando = (rand() % 100);
				
				if(upg[0] == ' ') {
					if (rando <= 82) {
					
						if(estus == 0 && estusc >= 1) {
							estusc--;
						}
					
						dano = inim[oponente].vida;
						rando = (rand() % 100);
						inim[oponente].vida = inim[oponente].vida - round(ataque * 0.7 * prot2 * enf);
						dano = dano - inim[oponente].vida;
						SetConsoleTextAttribute(h,12);
						printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
						SetConsoleTextAttribute(h,15);
						if(rando >= 70) {
							printf("\t\t\t\t\t\t !!! INIMIGO ATORDOADO !!!\n");
							stun2++;
						}
						Sleep(1500);
					
					} else {
						printf("\t\t\t\t\t\t\t ERROU\n");
						Sleep(1500);
					}
				} else {
					if (rando <= 85) {
						
						SetConsoleTextAttribute(h,14);
						printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
						SetConsoleTextAttribute(h,15);
					
						if(estus == 0 && estusc >= 1) {
							estusc--;
						}
					
						dano = inim[oponente].vida;
						rando = (rand() % 100);
						inim[oponente].vida = inim[oponente].vida - round(ataque * 0.72 * prot2 * enf);
						dano = dano - inim[oponente].vida;
						SetConsoleTextAttribute(h,12);
						printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
						SetConsoleTextAttribute(h,15);
						if(rando >= 65) {
							printf("\t\t\t\t\t\t !!! INIMIGO ATORDOADO !!!\n");
							stun2 = stun + 2;
						}
						Sleep(1500);
					
					} else {
						printf("\t\t\t\t\t\t\t ERROU\n");
						Sleep(1500);
					}
				}
				
			} else {
				printf("\t\t\t\t\t\t\t\t SEU ITEM NÃO TEM HABILIDADE TIPO FÍSICO!\n");
				Sleep(1500);
				tabela();	
			}
			
			if(dura[0] > 0){
				dura[0]--;
			}
			turno = 2;
			
		break;
			
		case 50:
			
			if(a[1] == 1) {		//APUNHALAR
			
				if(saber[3] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE ATAQUE!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[3] = 1;
				}
			
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t VOCÊ APUNHALA O INIMIGO!\n");
				
				if(upg[1] == '+') {
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
					SetConsoleTextAttribute(h,15);
				}
				
				i2 = 0;
				for(i = 1; i<=3; i++) {
					
					rando = (rand() % 100);
					
					if(upg[1] == ' ') {
						if (rando <= 66) {
							
							if(estus == 0 && estusc >= 1 && i2 == 0) {
								estusc--;
								i2 = 1;
							}
							
							dano = inim[oponente].vida;
							rando = (rand() % 100);
							if(rando >= 72) {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 0.4 * prot2 * enf);
								SetConsoleTextAttribute(h,4);
								printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
								SetConsoleTextAttribute(h,15);
							} else {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 0.22 * prot2 * enf);
							}
					
							dano = dano - inim[oponente].vida;
							SetConsoleTextAttribute(h,12);
							printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
							SetConsoleTextAttribute(h,15);
							Sleep(1500);
						} else {
							printf("\t\t\t\t\t\t\t ERROU\n");
							Sleep(1500);
						}
					} else {
						if (rando <= 70) {
							
							if(estus == 0 && estusc >= 1 && i2 == 0) {
								estusc--;
								i2 = 1;
							}
							
							dano = inim[oponente].vida;
							rando = (rand() % 100);
							if(rando >= 72) {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 0.5 * prot2 * enf);
								SetConsoleTextAttribute(h,4);
								printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
								SetConsoleTextAttribute(h,15);
							} else {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 0.26 * prot2 * enf);
							}
					
							dano = dano - inim[oponente].vida;
							SetConsoleTextAttribute(h,12);
							printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
							SetConsoleTextAttribute(h,15);
							Sleep(1500);
						} else {
							printf("\t\t\t\t\t\t\t ERROU\n");
							Sleep(1500);
						}
					}
					
					
				}
			} else if(a[1] == 2) {		//FATIAR
			
				if(saber[4] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE ATAQUE!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[4] = 1;
				}
			
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t VOCÊ FATIA O INIMIGO!\n");
				
				if(upg[1] == '+') {
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
					SetConsoleTextAttribute(h,15);
				}
				
				i2 = 0;
				for(i = 1; i<=2; i++) {
					
					rando = (rand() % 100);
					
					if(upg[1] == ' ') {
						if (rando <= 72) {
							
							if(estus == 0 && estusc >= 1 && i2 == 0) {
								estusc--;
								i2 = 1;
							}
							
							dano = inim[oponente].vida;
							rando = (rand() % 100);
						
							if(rando >= 70) {
								SetConsoleTextAttribute(h,4);
								printf("\t\t\t\t\t\t\t INIMIGO SANGRA!\n");
								SetConsoleTextAttribute(h,15);
								sang2 = sang2 + 2;
							}
							
							if(rando >= 90) {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 0.7 * prot2 * enf);
								SetConsoleTextAttribute(h,4);
								printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
								SetConsoleTextAttribute(h,15);
							} else {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 0.3 * prot2 * enf);
							}
					
							dano = dano - inim[oponente].vida;
							SetConsoleTextAttribute(h,12);
							printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
							SetConsoleTextAttribute(h,15);
							Sleep(1500);
						} else {
							printf("\t\t\t\t\t\t\t ERROU\n");
							Sleep(1500);
						}
					} else {
						if (rando <= 78) {
							
							if(estus == 0 && estusc >= 1 && i2 == 0) {
								estusc--;
								i2 = 1;
							}
							
							dano = inim[oponente].vida;
							rando = (rand() % 100);
						
							if(rando >= 68) {
								SetConsoleTextAttribute(h,4);
								printf("\t\t\t\t\t\t\t INIMIGO SANGRA!\n");
								SetConsoleTextAttribute(h,15);
								sang2 = sang2 + 3;
							}
							
							if(rando >= 88) {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 0.8 * prot2 * enf);
								SetConsoleTextAttribute(h,4);
								printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
								SetConsoleTextAttribute(h,15);
							} else {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 0.35 * prot2 * enf);
							}
					
							dano = dano - inim[oponente].vida;
							SetConsoleTextAttribute(h,12);
							printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
							SetConsoleTextAttribute(h,15);
							Sleep(1500);
						} else {
							printf("\t\t\t\t\t\t\t ERROU\n");
							Sleep(1500);
						}
					}
					
					
				}
			} else if(a[1] == 3) { //MARTELO
			
				if(saber[5] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE ATAQUE!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[5] = 1;
				}
					
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t VOCÊ MARTELA INIMIGO!\n");
				
				rando = (rand() % 100);
				
				if(upg[1] == ' ') {
					if (rando <= 60) {
					
						if(estus == 0 && estusc >= 1) {
							estusc--;
						}
					
						dano = inim[oponente].vida;
						rando = (rand() % 100);
							if(rando >= 95) {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 1.8 * prot2 * enf);
								SetConsoleTextAttribute(h,4);
								printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
								SetConsoleTextAttribute(h,15);
							} else {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 1.35 * prot2 * enf);
							}
						dano = dano - inim[oponente].vida;
					
						SetConsoleTextAttribute(h,12);
						printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
						SetConsoleTextAttribute(h,15);
					
						rando = (rand() % 100);
						if(rando > 40) {
							printf("\t\t\t\t\t\t !!! INIMIGO ATORDOADO !!!\n");
							stun2++;
						}
						Sleep(1500);
					
					} else {
						printf("\t\t\t\t\t\t\t ERROU\n");
						Sleep(1500);
					}	
				} else {
					if (rando <= 70) {
						SetConsoleTextAttribute(h,14);
						printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
						SetConsoleTextAttribute(h,15);
					
						if(estus == 0 && estusc >= 1) {
							estusc--;
						}
					
						dano = inim[oponente].vida;
						rando = (rand() % 100);
							if(rando >= 92) {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 1.82 * prot2 * enf);
								SetConsoleTextAttribute(h,4);
								printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
								SetConsoleTextAttribute(h,15);
							} else {
								inim[oponente].vida = inim[oponente].vida - round(ataque * 1.4 * prot2 * enf);
							}
						dano = dano - inim[oponente].vida;
					
						SetConsoleTextAttribute(h,12);
						printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
						SetConsoleTextAttribute(h,15);
					
						rando = (rand() % 100);
						if(rando > 10) {
							printf("\t\t\t\t\t\t !!! INIMIGO ATORDOADO !!!\n");
							stun2++;
						}
						Sleep(1500);
					
					} else {
						printf("\t\t\t\t\t\t\t ERROU\n");
						Sleep(1500);
					}	
				}
					
			} else {
				printf("\t\t\t\t\t\t\t\t SEU ITEM NÃO TEM HABILIDADE TIPO ARMA!\n");
				Sleep(1500);
				tabela();	
			}
			
			if(dura[1] > 0){
				dura[1]--;
			}
			
			turno = 2;
			
		break;
		
		case 51:
			
			if(a[2] == 1) {		//PROTEÇÃO DIVINA
			
				if(saber[6] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE PODER!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[6] = 1;
				}
			
				printmapa();
				tabemin();
				
				if(upg[2] == '+') {
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
					SetConsoleTextAttribute(h,15);
				}
				
				SetConsoleTextAttribute(h,14);
				printf("\t\t\t\t\t\t\t VOCÊ LEVANTA SUA ESPADA E ELA BRILHA TE ABENÇOANDO!\n");
				Sleep(2000);
				if(upg[2] == ' ') {
					prot = 0.80;	
				} else {
					prot = 0.75;
				}
				printf("\t\t\t\t\t\t\t UM ESCUDO MAGICO TE RODEIA REDUZINDO DANOS!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(2000);
			
			} else if(a[2] == 2) {		//CURAR FERIDAS
			
				if(saber[7] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE PODER!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[7] = 1;
				}
			
				printmapa();
				tabemin();
				
				printf("\t\t\t\t\t\t\t VOCÊ INVOCA UMA AURA DE CURA AO SEU REDOR!\n");
				Sleep(1500);
				rando = (rand() % 3);
				
				if(upg[2] == ' ') {
					if(rando == 0) {
						dano = ceil(vidamax * 0.12);
					} else if(rando == 1) {
						dano = ceil(vidamax * 0.16);
					} else {
						dano = ceil(vidamax * 0.22);
					}	
				} else {
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
					SetConsoleTextAttribute(h,15); 
					if(rando == 0) {
						dano = ceil(vidamax * 0.16);
					} else if(rando == 1) {
						dano = ceil(vidamax * 0.18);
					} else {
						dano = ceil(vidamax * 0.26);
					}	
				}
				
				vida = vida + dano;
				if (vida > vidamax) {
					vida = vidamax;
				}
				SetConsoleTextAttribute(h,10);
				printf("\t\t\t\t\t\t\t CUROU: %.0f \n", dano);
				SetConsoleTextAttribute(h,15);
				Sleep(1500);
				
			
			} else if(a[2] == 3 && milagre >= 0) {	//MILAGRE
			
				if(saber[8] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE PODER!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[8] = 1;
				}
			
				printmapa();
				tabemin();
				SetConsoleTextAttribute(h,14);
				printf("\t\t\t\t\t\t\t SUA DETERMINAÇÃO AUMENTA!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1500);
				milagre = 1;
				
				if(upg[2] == '+') {
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
					SetConsoleTextAttribute(h,15);
					dano = ceil(vidamax * 0.12);
					milagrep = 1;
					vida = vida + dano;
					if (vida > vidamax) {
						vida = vidamax;
					}
					SetConsoleTextAttribute(h,10);
					printf("\t\t\t\t\t\t\t CUROU: %.0f \n", dano);
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
				}
				
			} else if(a[2] == 3) {
				
				printmapa();
				tabemin();
				
				SetConsoleTextAttribute(h,12);
				printf("\t\t\t\t\t\t\t VOCÊ ESTA MUITO CANSADO PARA USAR ISSO!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1500);
				tabela();
			} else {
				printf("\t\t\t\t\t\t\t\t SEU ITEM NÃO TEM HABILIDADE TIPO DIVINO!\n");
				Sleep(1500);
				tabela();	
			}
			
			if(dura[2] > 0){
				dura[2]--;
			}
			
			turno = 2;
			
		break;
			
		case 52:
			
			if(a[3] == 1) {		//VAMPIRISMO
			
				if(saber[9] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE ATAQUE!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[9] = 1;
				}
				
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t VOCÊ SE TRANSFORMA EM MORCEGO!\n");
				
				rando = (rand() % 100);
				
				if(upg[3] == ' ') {
					if (rando <= 85) {
					
						if(estus == 0 && estusc >= 1) {
							estusc--;
						}
					
						dano = inim[oponente].vida;
						rando = (rand() % 100);
					
						if(rando >= 92) {
							inim[oponente].vida = inim[oponente].vida - round(ataque * 0.4 * prot2 * enf);
							SetConsoleTextAttribute(h,4);
							printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
							SetConsoleTextAttribute(h,15);
						} else {
							inim[oponente].vida = inim[oponente].vida - round(ataque * 0.25 * prot2 * enf);
						}
					
						dano = dano - inim[oponente].vida;
						vida = vida + dano;
					
						if (vida > vidamax) {
							vida = vidamax;
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
				} else {
					if (rando <= 88) {
						SetConsoleTextAttribute(h,14);
						printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
						SetConsoleTextAttribute(h,15);
						if(estus == 0 && estusc >= 1) {
							estusc--;
						}
					
						dano = inim[oponente].vida;
						rando = (rand() % 100);
					
						if(rando >= 90) {
							inim[oponente].vida = inim[oponente].vida - round(ataque * 0.55 * prot2 * enf);
							SetConsoleTextAttribute(h,4);
							printf("\t\t\t\t\t\t\t !!! CRÍTICO !!!\n");
							SetConsoleTextAttribute(h,15);
						} else {
							inim[oponente].vida = inim[oponente].vida - round(ataque * 0.3 * prot2 * enf);
						}
					
						dano = dano - inim[oponente].vida;
						vida = vida + dano;
					
						if (vida > vidamax) {
							vida = vidamax;
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
				}
				
			} else if(a[3] == 2) {		//ENVENENAR
			
				if(saber[10] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE PODER!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[10] = 1;
				}
			
				printmapa();
				tabemin();
								
				printf("\t\t\t\t\t\t\t VOCÊ INVOCA UMA NUVEM VENENOSA PELA BOCA\n");
				Sleep(1500);
				
				rando = (rand() % 3);
				
				if(upg[3] == ' ') {
					SetConsoleTextAttribute(h,13);
					if(rando == 0) {
						veneno2 = veneno2 + 3;
						printf("\t\t\t\t\t\t\t ENVENENOU: 3\n");
					} else if(rando == 1) {
						veneno2 = veneno2 + 4;
						printf("\t\t\t\t\t\t\t ENVENENOU: 4\n");
					} else {
						veneno2 = veneno2 + 5;
						printf("\t\t\t\t\t\t\t ENVENENOU: 5\n");
					}
					SetConsoleTextAttribute(h,15);	
				} else {
					
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
					SetConsoleTextAttribute(h,15);
					
					SetConsoleTextAttribute(h,13);
					if(rando == 0) {
						veneno2 = veneno2 + 4;
						printf("\t\t\t\t\t\t\t ENVENENOU: 4\n");
					} else if(rando == 1) {
						veneno2 = veneno2 + 5;
						printf("\t\t\t\t\t\t\t ENVENENOU: 5\n");
					} else {
						veneno2 = veneno2 + 6;
						printf("\t\t\t\t\t\t\t ENVENENOU: 6\n");
					}
					SetConsoleTextAttribute(h,15);	
				}
				
				Sleep(1500);
				
			} else if(a[3] == 3) {		//ENFURECER
			
				if(saber[11] == 0){
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VOCÊ APRENDEU SOBRE ESTE PODER!\n");
					SetConsoleTextAttribute(h,15);
					Sleep(1500);
					saber[11] = 1;
				}
				
				printmapa();
				tabemin();
				
				SetConsoleTextAttribute(h,12);
				printf("\t\t\t\t\t\t\tVOCÊ ANSEIA SANGUE!\n");
				SetConsoleTextAttribute(h,15);
				if(upg[3] == ' ') {
					if(enfc == 0){
						enf = enf * 1.2;
					}
					enfc = 3;
					if(enfc > 0){
						enf = enf * 1.1;
					}
				} else {
					SetConsoleTextAttribute(h,14);
					printf("\t\t\t\t\t\t\t VERSÃO APRIMORADA!\n");
					SetConsoleTextAttribute(h,15);
					if(enfc == 0){
						enf = enf * 1.25;
					}
					enfc = 3;
					if(enfc > 0){
						enf = enf * 1.15;
					}
				}
				Sleep(1500);
				
				
			} else {
				printf("\t\t\t\t\t\t\t\t SEU ITEM NÃO TEM HABILIDADE TIPO TREVAS!\n");
				Sleep(1500);
				tabela();	
			}	
			
			if(dura[3] > 0){
				dura[3]--;
			}
			
			turno = 2;
			
		break;
		
		case 70: 	//F
			keybd_event (VK_MENU, 0x36, 0, 0);
			keybd_event (VK_RETURN, 0x1C, 0, 0);
			keybd_event (VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
			keybd_event (VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
		break;
			
		default:
		SetConsoleTextAttribute(h,4);
		printf("\n\t\t\t\t\t\t!!! Opção Inválida !!!\n");
		SetConsoleTextAttribute(h,15);
		Sleep(200);
		tabela();
		
		
	}
	
}

void AI() {
	aiv:
	rando = (rand() % 4) + 1;
	ai = rando;
	
	if(ai == 1 && inim[oponente].a[0] == 0){
		goto aiv;
	} else if(ai == 2 && inim[oponente].a[1] == 0){
		goto aiv;
	} else if(ai == 3 && inim[oponente].a[2] == 0){
		goto aiv;
	} else if(ai == 4 && inim[oponente].a[3] == 0){
		goto aiv;
	}
	
	if(inim[oponente].a[2] == 1 && prot2 == 1){
		ai = 3;
	} else if(inim[oponente].a[2] == 1 && prot2 != 1 && ai == 3){
		goto aiv;
	}
	
	if(inim[oponente].a[2] == 3 && milagre2 == 0){
		ai = 3;
	} 
	if(inim[oponente].a[2] == 3 && (milagre2 < 0 || milagre2 == 1) && ai == 3){
		goto aiv;
	}
	
	if(inim[oponente].a[2] == 2 && inim[oponente].vida <= (inim[oponente].vida * 0.2)){
		
		rando = (rand() % 3);
		if(rando == 1) {
			ai = 3;	
		}
		
	}
	
	if(inim[oponente].a[2] == 2 && inim[oponente].vida >= (inim[oponente].vida * 0.8)){
		
		rando = (rand() % 3);
		if(rando >= 1) {
			goto aiv;	
		}
		
	}
	
	AIa();
	turno = 1;

	
}

void checkvit() {
	
	if(vida < 1) {
		vida = 0;
	}
	
	if(inim[oponente].vida < 1) {
		inim[oponente].vida = 0;
	}
	
	if(milagre == 1 && vida == 0) {
		vida = 1;
		milagre = 0;
		
		SetConsoleTextAttribute(h,4);
		printf("\n\t\t\t\t\t\t\t\tVOCÊ MORREU");
		Sleep(1500);
		printf(".");
		Sleep(500);
		printf(".");
		Sleep(500);
		printf(".\n");
		Sleep(2000);
		SetConsoleTextAttribute(h,14);
		printf("\n\t\t\t\t\t\t\t\t...MAS VOCÊ SE RECUSA!\n");
		SetConsoleTextAttribute(h,15);
		Sleep(2000);
		
	if(milagrep == 1){
		printmapa();
		tabemin();
		dano = ceil(vidamax * 0.1);
		milagrep = 0;
		vida = vida + dano;
		if (vida > vidamax) {
			vida = vidamax;
		}
		SetConsoleTextAttribute(h,10);
		printf("\t\t\t\t\t\t\t CUROU: %.0f \n", dano);
		SetConsoleTextAttribute(h,15);
		Sleep(1500);
	}
		
		milagre = -3;
		sang = 0;
		veneno = 0;
		stun = 0;
	}
	
	if(milagre2 == 1 && inim[oponente].vida == 0) {
		inim[oponente].vida = 1;
		milagre2 = 0;
		SetConsoleTextAttribute(h,14);
		printf("\n\t\t\t\t\t\t\t\tVOCÊ VENCEU");
		Sleep(1500);
		printf(".");
		Sleep(500);
		printf(".");
		Sleep(500);
		printf(".\n");
		Sleep(2000);
		SetConsoleTextAttribute(h,4);
		printf("\n\t\t\t\t\t\t\t\t...MAS O INIMIGO ESTA DETERMINADO A VENCER!\n");
		SetConsoleTextAttribute(h,15);
		Sleep(2000);
		milagre2 = -3;
		sang2 = 0;
		veneno2 = 0;
		stun2 = 0;
	}
	
	printmapa();
	tabemin();
	
	if (vida < 1) {
		SetConsoleTextAttribute(h,4);
		printf("\n\t\t\t\t\t\t\t\tVOCÊ MORREU\n");
		Sleep(1000);
		printf("\n\t\t\t\t\t\t\t\t GAME OVER\n");
		SetConsoleTextAttribute(h,15);
		exit(0);
	}
				
	if (inim[oponente].vida < 1 && duelo == 1) {
		SetConsoleTextAttribute(h,14);
		printf("\n\t\t\t\t\t\t\t\tVOCÊ VENCEU!\n\n");
		SetConsoleTextAttribute(h,15);
		mapa[direc][direc2] = '.';
		inim[oponente].vida = 0;
		drops();
		inimcont--;
		milagre = 0;
		milagre2 = 0;
		milagrep = 0;
		milagrep2 = 0;
		//estus = 0;
		//estusc = 3;
		stun = 0;
		stun2 = 0;
		sang = 0;
		sang2 = 0;
		veneno = 0;
		veneno2 = 0;
		optn2 = 0;
		enf = 1;
		enf2 = 1;
		enfc = 0;
		enfc2 = 0;
		prot = 1;
		prot2 = 1;
		duelo = 0;
		turno = 0;
		mimic = 0;
		printf("\n\t\t\t\t\t\t\t   ");
		system("pause");
	}
	
}

void tabemin() {
	SetConsoleTextAttribute(h,12);
	printf("\t\t\t\t\t\t\t\t      !!! BATALHA !!!\n\n");
	SetConsoleTextAttribute(h,15);
	
	if(turno == 1){
		printf("\t\t\t\t\t      -->%s  NIVEL: %d", name, lvl);
	} else {
		printf("\t\t\t\t\t\t %s  NIVEL: %d", name, lvl);
	}
	
	SetConsoleTextAttribute(h,15);
	printf("  (");
	if(milagre == 1) {
		SetConsoleTextAttribute(h,14);
		printf(" M");
	}
	if(milagrep == 1) {
		SetConsoleTextAttribute(h,14);
		printf("+");
	}
	if(prot != 1) {
		SetConsoleTextAttribute(h,11);
		printf(" P");
	}
	if(prot == 0.75) {
		SetConsoleTextAttribute(h,11);
		printf("+");
	}
	if(enfc > 0) {
		SetConsoleTextAttribute(h,4);
		printf(" F%d", enfc);
	}
	if(sang > 0) {
		SetConsoleTextAttribute(h,12);
		printf(" S%d", sang);
	}
	if(veneno > 0) {
		SetConsoleTextAttribute(h,13);
		printf(" V%d", veneno);
	}
	if(stun > 0) {
		SetConsoleTextAttribute(h,6);
		printf(" A%d", stun);
	}
	
	SetConsoleTextAttribute(h,15);
	printf(" )\n");
	printf("\t\t\t\t\t\t VIDA: %.0f/%.0f\n\n",vida, vidamax);	

	if(mimic == 0) {
		
		if(turno == 2){
			printf("\t\t\t\t\t      -->MONSTRO  NIVEL: %d", inim[oponente].lvl);
		} else {
			printf("\t\t\t\t\t\t MONSTRO  NIVEL: %d", inim[oponente].lvl);	
		}
		
	} else {
		
		if(turno == 2){
			printf("\t\t\t\t\t      -->BAÚ MÍMICO  NIVEL: %d", inim[oponente].lvl);
		} else {
			printf("\t\t\t\t\t\t BAÚ MÍMICO  NIVEL: %d", inim[oponente].lvl);	
		}
	}
	SetConsoleTextAttribute(h,15);
	printf("  (");
	if(milagre2 == 1) {
		SetConsoleTextAttribute(h,14);
		printf(" M");
	}
	if(milagrep2 == 1) {
		SetConsoleTextAttribute(h,14);
		printf("+");
	}
	if(prot2 != 1) {
		SetConsoleTextAttribute(h,11);
		printf(" P");
	}
	if(enfc2 > 0) {
		SetConsoleTextAttribute(h,4);
		printf(" F%d", enfc2);
	}
	if(sang2 > 0) {
		SetConsoleTextAttribute(h,12);
		printf(" S%d", sang2);
	}
	if(veneno2 > 0) {
		SetConsoleTextAttribute(h,13);
		printf(" V%d", veneno2);
	}
	if(stun2 > 0) {
		SetConsoleTextAttribute(h,6);
		printf(" A%d", stun2);
	}
	SetConsoleTextAttribute(h,15);
	printf(" )\n");
		
	printf("\t\t\t\t\t\t VIDA: %.0f/%.0f\n\n", inim[oponente].vida, inim[oponente].vidamax);
}

void effec() {
	
	if(estusc == 0) {
		estusc = -1;
		estus = 1;
	}
	
	if(milagre < 0 && turno == 1) {
		milagre++;
	}
	
	if(milagre2 < 0 && turno == 2) {
		milagre2++;
	}
	
	if(enfc > 0 && turno == 1) {
		enfc--;
	}
	
	if(enfc2 > 0 && turno == 2) {
		enfc2--;
	}
	
	if(enfc == 0 && turno == 1) {
		enf = 1;
	}
	
	if(enfc2 == 0 && turno == 2) {
		enf2 = 1;
	}
	
	if(sang > 0 && turno == 1) {
		dano = ceil(vidamax * 0.08);
		vida = vida - dano;
		SetConsoleTextAttribute(h,4);
		printf("\t\t\t\t\t\t\t VOCÊ ESTÁ SANGRANDO\n");
		Sleep(1500);
		SetConsoleTextAttribute(h,12);
		printf("\t\t\t\t\t\t\t DANO SANGRAMENTO: %.0f \n", dano);
		SetConsoleTextAttribute(h,15);
		Sleep(1500);
		sang--;
	}
	
	if(sang2 > 0 && turno == 2) {
		dano = ceil(inim[oponente].vidamax * 0.08);
		inim[oponente].vida = inim[oponente].vida - dano;
		SetConsoleTextAttribute(h,4);
		printf("\t\t\t\t\t\t\t INIMIGO ESTÁ SANGRANDO\n");
		Sleep(1500);
		SetConsoleTextAttribute(h,12);
		printf("\t\t\t\t\t\t\t DANO SANGRAMENTO: %.0f \n", dano);
		SetConsoleTextAttribute(h,15);
		Sleep(1500);
		sang2--;
	}
	
	if(veneno > 0 && turno == 1) {
		dano = ceil(vida * 0.12);
		vida = vida - dano;
		SetConsoleTextAttribute(h,4);
		printf("\t\t\t\t\t\t\t VOCÊ ESTÁ ENVENENADO\n");
		Sleep(1500);
		SetConsoleTextAttribute(h,13);
		printf("\t\t\t\t\t\t\t DANO ENVENENAMENTO: %.0f \n", dano);
		SetConsoleTextAttribute(h,15);
		Sleep(1500);
		veneno--;
	}
	
	if(veneno2 > 0 && turno == 2) {
		dano = ceil(inim[oponente].vida * 0.12);
		inim[oponente].vida = inim[oponente].vida - dano;
		SetConsoleTextAttribute(h,4);
		printf("\t\t\t\t\t\t\t INIMIGO ESTÁ ENVENENADO\n");
		Sleep(1500);
		SetConsoleTextAttribute(h,13);
		printf("\t\t\t\t\t\t\t DANO ENVENENAMENTO: %.0f \n", dano);
		SetConsoleTextAttribute(h,15);
		Sleep(1500);
		veneno2--;
	}
	
	checkvit();
	
}

void bitens() {
	printf("\t\t\t\t\t\t\tSEUS ITENS:\n");
	
	if(estus == 1) {
		printf("\t\t\t\t\t\t\t1.ESTUS:  PRONTO!......(Use para se curar moderadamente.)\n");	
	} else {
		printf("\t\t\t\t\t\t\t1.ESTUS:  PREPARANDO...(Use para se curar moderadamente.)\n");
	}
	printf("\t\t\t\t\t\t\t2.BOMBAS: %d............(Use para dar dano leve e atordoar por 2 rodadas)\n", bomba);
	printf("\t\t\t\t\t\t\t3.POÇÕES: %d/%d..........(Use para se curar levemente)\n", pocao, pocaom);
	printf("\t\t\t\t\t\t\t0.VOLTAR\n");
	
	switch(getch()) {
		
		case 48:
			tabela();
		break;
		
		case 49:
			if(estus == 1 && vida < vidamax) {
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t VOCÊ BEBE ESTUS!\n");
				Sleep(1500);
				dano = round(vidamax * 0.3);
				vida = vida + dano;
				if (vida > vidamax) {
					vida = vidamax;
				}
				SetConsoleTextAttribute(h,10);
				printf("\t\t\t\t\t\t\t CUROU: %.0f!\n", dano);
				SetConsoleTextAttribute(h,15);
				Sleep(1500);
				estus = 0;
				estusc = 5;
				turno = 2;
			}  else if(estus == 1 && vida == vidamax) {
				SetConsoleTextAttribute(h,12);
				printf("\t\t\t\t\t\t\t SUA VIDA ESTÁ NO MÁXIMO!\n");
				Sleep(1000);
				SetConsoleTextAttribute(h,15);
				tabela();
			} else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\t ATAQUE MAIS %d VEZES PARA RECARREGAR SEU ESTUS!\n", estusc);
				SetConsoleTextAttribute(h,15);
				Sleep(1500);
				tabela();
			}
			
		break;
		
		case 50:
			
			if(bomba >= 1) {
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t VOCÊ JOGA UMA BOMBA!\n");
				
				if(estus == 0 && estusc >= 1) {
					estusc--;
				}
				
				bomba--;
				dano = inim[oponente].vida;
				inim[oponente].vida = inim[oponente].vida - round(ataque * 0.25 * prot2 * enf);
				dano = dano - inim[oponente].vida;
				
				stun2 = stun2 + 2;
				SetConsoleTextAttribute(h,12);
				printf("\t\t\t\t\t\t\t DANO: %.0f \n", dano);
				Sleep(1500);
				printf("\t\t\t\t\t\t !!! INIMIGO ATORDOADO !!!\n");
				SetConsoleTextAttribute(h,15);
				Sleep(1500);
				turno = 2;
			} else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\t VOCÊ NÃO TEM MAIS BOMBAS!\n");
				Sleep(1000);
				SetConsoleTextAttribute(h,15);
				tabela();
			}
		break;
		
		case 51:
			if(pocao >= 1 && vida < vidamax) {	
				dano = round(vidamax * 0.2);
				vida = vida + dano;
				if (vida > vidamax) {
					vida = vidamax;
				}
				pocao--;
				printmapa();
				tabemin();
				printf("\t\t\t\t\t\t\t VOCÊ BEBE UMA POÇÃO NO CALOR DA BATALHA!\n");
				Sleep(1500);
				SetConsoleTextAttribute(h,10);
				printf("\t\t\t\t\t\t\t CUROU: %.0f!\n", dano);
				SetConsoleTextAttribute(h,15);
				Sleep(1500);
				turno = 2;
			} else if(vida == vidamax) {
				SetConsoleTextAttribute(h,12);
				printf("\t\t\t\t\t\t\t SUA VIDA ESTÁ NO MÁXIMO!\n");
				Sleep(1000);
				SetConsoleTextAttribute(h,15);
				tabela();
			} else {
				SetConsoleTextAttribute(h,4);
				printf("\t\t\t\t\t\t\t VOCÊ NÃO TEM MAIS POÇÕES!\n");
				Sleep(1000);
				SetConsoleTextAttribute(h,15);
				tabela();
			}
		break;
		
		default:
			SetConsoleTextAttribute(h,4);
			printf("\n\t\t\t\t\t\t!!! Opção Inválida !!!\n");
			SetConsoleTextAttribute(h,15);
			Sleep(200);
		
	}
	
	
}







