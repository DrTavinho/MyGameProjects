#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <ctype.h>
#include <time.h>
#include <locale.h>
#include "variaveis.h"
#include "leaoprintf.h"
#include "leao.h"
#include "FredMapa.h"
#include "ToiNeBatatiN.h"
#include "gustavo.h"
#include "Miguez.h"
#include "actions.h"
#include "leao2.h"

int main(){
	srand(time(NULL));
	
	askname();
	
	menu();
	BuildMapa();
	system("cls");
	inicio();
	printMAP();
	
	turno = (rand() % 2) + 1;
	while(1){
		if(checkmortos()){
		break;
		}
		
		//Matar Barreiras
		players[20].hp--;
		players[21].hp--;
		players[22].hp--;
		players[23].hp--;
		players[24].hp--;
		players[25].hp--;
		uso = 0;
		movimt = 3;
		
		//Decrescer Stun
		for(i = 0; i < 50; i++){
			players[i].stun--;
		}
		
		matarb();
	for(acoes = 3; acoes > 0; acoes--){
	actions();
	
	}
	
	if(turno == 1) {
			turno = 2;
		}else{
			turno = 1;
		}
		
	}
	printwinner();
	main();
	return 0;
}









