


void inventario() {
	printf("\t\t\t\t\t\t\t\tSEUS ITENS:\n");
	printf("\t\t\t\t\t\t\t\tESTUS:......(Use para se curar moderadamente. S� durante batalhas)\n");
	printf("\t\t\t\t\t\t\t\tBOMBAS: %d...([Q] Use para destruir terreno pr�ximo)\n", bomba);
	printf("\t\t\t\t\t\t\t\tPO��ES: %d...([E] Use para se curar levemente)\n", pocao);
}


void equipamento() {
	
	printf("\t\t\t\t\t\t\t\tSEU EQUIPAMENTO:\n");
	
	if(a[0] == 1) {
		printf("\t\t\t\t\t\t\t\t1.SOCAR%c %d/%d\n", upg[0], dura[0], durat[0]);
	} else if(a[0] == 2) {
		printf("\t\t\t\t\t\t\t\t1.CHUTAR%c %d/%d\n", upg[0], dura[0], durat[1]);
	} else if(a[0] == 3) {
		printf("\t\t\t\t\t\t\t\t1.CABE�ADA%c %d/%d\n", upg[0], dura[0], durat[2]);
	} else {
		printf("\t\t\t\t\t\t\t\t1.---\n");
	}
	
	
	if(a[1] == 1) {
		printf("\t\t\t\t\t\t\t\t2.APUNHALAR%c %d/%d\n", upg[1], dura[1], durat[3]);
	} else if(a[1] == 2) {
		printf("\t\t\t\t\t\t\t\t2.FATIAR%c %d/%d\n", upg[1], dura[1], durat[4]);
	} else if(a[1] == 3) {
		printf("\t\t\t\t\t\t\t\t2.MARTELAR%c %d/%d\n", upg[1], dura[1], durat[5]);
	} else {
		printf("\t\t\t\t\t\t\t\t2.---\n");
	}
	
	
	if(a[2] == 1) {
		printf("\t\t\t\t\t\t\t\t3.PROTE��O DIVINA%c %d/%d\n", upg[2], dura[2], durat[6]);
	} else if(a[2] == 2) {
		printf("\t\t\t\t\t\t\t\t3.CURAR FERIDAS%c %d/%d\n", upg[2], dura[2], durat[7]);
	} else if(a[2] == 3) {
		printf("\t\t\t\t\t\t\t\t3.MILAGRE%c %d/%d\n", upg[2], dura[2], durat[8]);
	} else {
		printf("\t\t\t\t\t\t\t\t3.---\n");
	}
	
	
	if(a[3] == 1) {
		printf("\t\t\t\t\t\t\t\t4.VAMPIRISMO%c %d/%d\n", upg[3], dura[3], durat[9]);
	} else if(a[3] == 2) {
		printf("\t\t\t\t\t\t\t\t4.ENVENENAR%c %d/%d\n", upg[3], dura[3], durat[10]);
	} else if(a[3] == 3) {
		printf("\t\t\t\t\t\t\t\t4.ENFURECER%c %d/%d\n", upg[3], dura[3], durat[11]);
	} else {
		printf("\t\t\t\t\t\t\t\t4.---\n");
	}
	
}


void info() {		//4.Ataques  5.Caracteres  6.Comandos Especiais
		
	if(optn2 == 1) {
		printf("\n\t\t\t\t\t\t\tATAQUES:   [<] %d [>]\n\n", optn3);
		
	if(optn3 == 1) {
		
		if(saber[0] == 1){
			printf("\t\t\t\t\t\t\tSOCAR:\n");
			printf("\t\t\t\t\t\t\tDano: Normal; %%Acerto: Normal; Dano Cr�tico: 1.6x; %%Cr�tico: Normal\n");
			printf("\t\t\t\t\t\t\tEfeitos: Nenhum\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}
		if(saber[1] == 1){
			printf("\t\t\t\t\t\t\tCHUTAR:\n");
			printf("\t\t\t\t\t\t\tDano: Alto; %%Acerto: M�dio; Dano Cr�tico: 1.2x; %%Cr�tico: M�dio\n");
			printf("\t\t\t\t\t\t\tEfeitos: Nenhum\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}
		if(saber[2] == 1){
			printf("\t\t\t\t\t\t\tCABE�ADA:\n");
			printf("\t\t\t\t\t\t\tDano: M�dio; %%Acerto: Normal; Dano Cr�tico: --; %%Cr�tico: --\n");
			printf("\t\t\t\t\t\t\tEfeitos: 1x Atordoamento; Chance: M�dio\n");
			printf("\t\t\t\t\t\t\tATORDOAMENTO: Personagem atordoado passar� o turno.\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}
		
	} else if(optn3 == 2) {
		
		if(saber[3] == 1){
			printf("\t\t\t\t\t\t\tAPUNHALADA:\n");
			printf("\t\t\t\t\t\t\tDano: 3x Baixo; %%Acerto: Baixo; Dano Cr�tico: 1.8x; %%Cr�tico: Muito Alto\n");
			printf("\t\t\t\t\t\t\tEfeitos: Nenhum\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}
		if(saber[4] == 1){
			printf("\t\t\t\t\t\t\tFATIAR:\n");
			printf("\t\t\t\t\t\t\tDano: 2x M�dio; %%Acerto: Baixo; Dano Cr�tico: 2.3x; %%Cr�tico: M�dio\n");
			printf("\t\t\t\t\t\t\tEfeitos: 2x Sangramento; Chance: Alto\n");
			printf("\t\t\t\t\t\t\tSANGRAMENTO: Personagem sangrando perder� uma porcentagem da sua vida m�xima todo turno (M�NIMO: 1)\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}
		if(saber[5] == 1){
			printf("\t\t\t\t\t\t\tMARTELAR:\n");
			printf("\t\t\t\t\t\t\tDano: Muito Alto; %%Acerto: Muito Baixo; Dano Cr�tico: 1.3x; %%Cr�tico: Extremamente Baixo\n");
			printf("\t\t\t\t\t\t\tEfeitos: Atordoamento; Chance: Extremamente Alto\n");
			printf("\t\t\t\t\t\t\tATORDOAMENTO: Personagem atordoado passar� o turno.\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}
		
	} else if(optn3 == 3) {
		
		if(saber[6] == 1){
			printf("\t\t\t\t\t\t\tPROTE��O DIVINA:\n");
			printf("\t\t\t\t\t\t\tDescri��o: Aplica efeito que reduz danos durante a luta inteira. N�o se aplica a veneno/sangramento.\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}
		if(saber[7] == 1){
			printf("\t\t\t\t\t\t\tCURAR FERIDAS:\n");
			printf("\t\t\t\t\t\t\tDescri��o: Cura pequena por��o de vida. Tem chance de curar mais vida que o normal.\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}
		if(saber[8] == 1){
			printf("\t\t\t\t\t\t\tMILAGRE:\n");
			printf("\t\t\t\t\t\t\tDescri��o: Permite que usu�rio resista a morte. Necessita de tempo para recarregar ap�s ativado.\n");
			printf("\t\t\t\t\t\t\tEfeitos: Remove todos os efeitos negativos quando ativado, Chance: Sempre\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}
		
	} else if(optn3 >= 4) {
		
		if(saber[9] == 1){
			printf("\t\t\t\t\t\t\tVAMPIRISMO:\n");
			printf("\t\t\t\t\t\t\tDano: Muito Baixo; %%Acerto: Normal; Dano Cr�tico: 1.6x; %%Cr�tico: Muito Baixo\n");
			printf("\t\t\t\t\t\t\tEfeitos: Curar; Chance: Sempre\n");
			printf("\t\t\t\t\t\t\tDescri��o: Ir� curar a mesma quantidade de dano que inflingir ao oponente.\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}
		if(saber[10] == 1){
			printf("\t\t\t\t\t\t\tENVENENAR:\n");
			printf("\t\t\t\t\t\t\tDescri��o: Aplica 3-5 efeito de veneno ao oponente.\n");
			printf("\t\t\t\t\t\t\tVENENO: Personagem envenenado perder� uma porcentagem da sua vida atual todo turno (M�NIMO: 1)\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}
		if(saber[11] == 1){
			printf("\t\t\t\t\t\t\tENFURECER:\n");
			printf("\t\t\t\t\t\t\tDescri��o: Multiplica levemente dano total. Usar vezes consecutivas multiplicar� o efeito.\n\n");
		} else {
			printf("\t\t\t\t\t\t\t???????????DESCONHECIDO???????????\n\n");
		}	
		optn3 = 4;
	}
		
	} else if(optn2 == 2) {
		printf("\n\t\t\t\t\t\t\tCAR�CTERES:\n");
    	printf("\t\t\t\t\t\t\t # = Paredes............(N�o � poss�vel andar sobre.)\n");
    	printf("\t\t\t\t\t\t\t $ = Paredes Blindadas..(N�o � poss�vel andar sobre nem explodir.)\n");
    	printf("\t\t\t\t\t\t\t B = Ba�s...............(Ba�s contem muito ouro.)\n");
		printf("\t\t\t\t\t\t\t p = Po��es.............(Pequenas po��es que recuperam um pouco de vida.)\n");
		printf("\t\t\t\t\t\t\t Q = Bombas.............(Bombas que quebram paredes e atacam inimigos em batalha.)\n");
		printf("\t\t\t\t\t\t\t I = Itens..............(Itens mudam seus ataques dispon�veis nas batalhas.)\n");
    	printf("\t\t\t\t\t\t\t M = Monstros...........(Chegue perto e ira entrar em combate!)\n");
    	printf("\t\t\t\t\t\t\t o = Moedas Pequenas....(Quantidade pequena de ouro.)\n");
    	printf("\t\t\t\t\t\t\t O = Moedas Grandes.....(Quantidade grande de ouro.)\n");
		printf("\t\t\t\t\t\t\t 0 = Moedas Gigantes....(Quantidade gigante de ouro.)\n");
		printf("\t\t\t\t\t\t\t | = Port�es............(S� podem ser abertos usando uma chave.)\n");
		printf("\t\t\t\t\t\t\t , = Chaves.............(Abrem port�es por�m s�o muito dif�ceis de se encontrar.)\n");
		printf("\t\t\t\t\t\t\t = = Sa�da Fechada......(Derrote inimigos para abrir a sa�da para o pr�ximo andar.)\n");
		printf("\t\t\t\t\t\t\t + = Sa�da..............(A sa�da para o pr�ximo andar.)\n");
		
	} else if(optn2 == 3){
		printf("\n\t\t\t\t\t\t\tFUN��ES:\n");
		printf("\t\t\t\t\t\t\tAperte a tecla 'P' no seu teclado caso fique preso numa �rea sem saida.\n");
    	printf("\t\t\t\t\t\t\tAperte a tecla 'F' no seu teclado para alternar o modo tela cheia.\n");
    	printf("\t\t\t\t\t\t\tAperte a tecla 'Q' no seu teclado para usar po��o no mapa.\n");
    	printf("\t\t\t\t\t\t\tAperte a tecla 'E' no seu teclado para usar uma bomba no mapa.\n");
    	printf("\t\t\t\t\t\t\tAperte a tecla 'Ctrl' no seu teclado e use o scroll para dar zoom e zoomout na tela.\n");
    	printf("\t\t\t\t\t\t\t - CUIDADO: N�O D� ZOOM DEMAIS SEN�O OCULTAR� TEXTO!\n");
    	printf("\t\t\t\t\t\t\tUse as teclas '<' e '>' no seu teclado para passar as p�ginas em menus com p�gina.\n");
	}
		
		
}


void itemshow() {
	
	if(item[i].equip2[0] == -1) {
	
		if(item[i].equip1[0] == 1) {
			printf("\t\t\t\t\t\t\t1.SOCAR\n");
		} else if(item[i].equip1[0] == 2) {
			printf("\t\t\t\t\t\t\t1.CHUTAR\n");
		} else if(item[i].equip1[0] == 3) {
			printf("\t\t\t\t\t\t\t1.CABE�ADA\n");
		} else {
			printf("\t\t\t\t\t\t\t1.---\n");
		}
	
	
		if(item[i].equip1[1] == 1) {
			printf("\t\t\t\t\t\t\t2.APUNHALAR\n");
		} else if(item[i].equip1[1] == 2) {
			printf("\t\t\t\t\t\t\t2.FATIAR\n");
		} else if(item[i].equip1[1] == 3) {
			printf("\t\t\t\t\t\t\t2.MARTELAR\n");
		} else {
			printf("\t\t\t\t\t\t\t2.---\n");
		}
		
		printf("\t\t\t\t\t\t\t3.N�O ALTERA\n");
		printf("\t\t\t\t\t\t\t4.N�O ALTERA\n");
		
	} else {
	
		printf("\t\t\t\t\t\t\t1.N�O ALTERA\n");
		printf("\t\t\t\t\t\t\t2.N�O ALTERA\n");
	
		if(item[i].equip2[0] == 1) {
			printf("\t\t\t\t\t\t\t3.PROTE��O DIVINA\n");
		} else if(item[i].equip2[0] == 2) {
			printf("\t\t\t\t\t\t\t3.CURAR FERIDAS\n");
		} else if(item[i].equip2[0] == 3) {
			printf("\t\t\t\t\t\t\t3.MILAGRE\n");
		} else {
			printf("\t\t\t\t\t\t\t3.---\n");
		}
	
	
		if(item[i].equip2[1] == 1) {
			printf("\t\t\t\t\t\t\t4.VAMPIRISMO\n");
		} else if(item[i].equip2[1] == 2) {
			printf("\t\t\t\t\t\t\t4.ENVENENAR\n");
		} else if(item[i].equip2[1] == 3) {
			printf("\t\t\t\t\t\t\t4.ENFURECER\n");
		} else {
			printf("\t\t\t\t\t\t\t4.---\n");
		}
	}
}


void drops() {
	Sleep(1000);
	rando = (rand() % 50) + 20;
	i = rando + (inim[oponente].lvl * 1.25);
	ouro = ouro + i;
	SetConsoleTextAttribute(h,14);
	printf("\t\t\t\t\t\t\t\t     OURO: +%d\n", i);
	Sleep(1000);
	
	rando = (rand() % 10);
	if(rando <= 1){
		bomba++;
		SetConsoleTextAttribute(h,14);
		printf("\t\t\t\t\t\t\t\t     BOMBA: +1\n");
		Sleep(1000);
	} else if(rando >= 7 && pocao < pocaom) {
		pocao++;
		SetConsoleTextAttribute(h,14);
		printf("\t\t\t\t\t\t\t\t     PO��ES: +1\n");
		Sleep(1000);
	}
	
	rando = (rand() % 10);
	if(mimic == 1 && rando <= 2){
		bomba++;
		SetConsoleTextAttribute(h,14);
		printf("\t\t\t\t\t\t\t\t     BOMBA: +1\n");
		Sleep(1000);
	} else if(mimic == 1 && rando >= 5 && pocao < pocaom) {
		pocao++;
		SetConsoleTextAttribute(h,14);
		printf("\t\t\t\t\t\t\t\t     PO��ES: +1\n");
		Sleep(1000);
	}
	
	rando = round((inim[oponente].lvl * 2 + 10) * 1.2);
	xp = xp + rando;
	SetConsoleTextAttribute(h,11);
	printf("\t\t\t\t\t\t\t\t     XP:   +%.0f\n", rando);
	SetConsoleTextAttribute(h,15);
	
	saida--;
	
	if(saida == 0){
		for(lin = 0; lin <=200; lin++) {
    		for (col = 0; col <= 200; col++) {
  				if (mapa[lin][col] == '=') {
					mapa[lin][col] = '+';
				}
			}
 	 	}
	}

	
	
	Sleep(1000);
	lvlup();
}


void lvlup() {
	
	if(xp >= lxp) {
		
		xp = xp - lxp;
		lvl++;
		vidamax = vidamax + 3.4;
		vida = vidamax;
		ataque = ataque + 1.6;
		
		if(lvl <= 10) {
			lxp = lxp * 1.1;	
		} else if(lvl <= 20) {
			lxp = lxp * 1.15;	
		} else if(lvl <= 30) {
			lxp = lxp * 1.2;	
		} else if(lvl <= 40) {
			lxp = lxp * 1.25;	
		} else if(lvl <= 50) {
			lxp = lxp * 1.3;	
		} else if(lvl <= 60) {
			lxp = lxp * 1.35;	
		} else if(lvl <= 70) {
			lxp = lxp * 1.4;	
		} else if(lvl <= 80) {
			lxp = lxp * 1.45;	
		} else if(lvl <= 90) {
			lxp = lxp * 1.5;	
		} else {
			lxp = lxp * 1.7;
		}
		
		SetConsoleTextAttribute(h,6);
		printf("\t\t\t\t\t\t\t\t     AUMENTO DE N�VEL: %d -> %d\n", lvl-1, lvl);
		SetConsoleTextAttribute(h,15);
		lvlup();
		
	} else {
		SetConsoleTextAttribute(h,11);
		printf("\t\t\t\t\t\t\t\t     MAIS %.0f XP PARA O N�VEL %d\n", lxp - xp, lvl+1 );
		SetConsoleTextAttribute(h,15);
		
	if(saida > 0){
		Sleep(1000);
		SetConsoleTextAttribute(h,12);
		printf("\t\t\t\t\t\t\t\t     Faltam mais %d Monstros para a saida abrir...\n", saida);
		SetConsoleTextAttribute(h,15);
	} else {
		Sleep(1000);
		SetConsoleTextAttribute(h,12);
		printf("\t\t\t\t\t\t\t\t     Saida aberta!!\n");
		SetConsoleTextAttribute(h,15);
	}
		
		
		
		rando = (rand() % 200);		//MAMAE QUER DINHEIRO :)
		if(rando == 100) {
			Sleep(2000);
			printmapa();
			printf("\t\t\t\t\t\t*BZZZ*\n");
			Sleep(200);
			printf("\t\t\t\t\t\t*BZZZZZ*\n");
			Sleep(1000);
			printmapa();
			printf("\t\t\t\t\t\t*BZZZ*\n");
			Sleep(200);
			printf("\t\t\t\t\t\t*BZZZZZ*\n");
			Sleep(1000);
			printmapa();
			printf("\t\t\t\t\t\t*BZZZ*\n");
			Sleep(200);
			printf("\t\t\t\t\t\t*BZZZZZ*\n");
			Sleep(1000);
			
			printmapa();
			printf("\t\t\t\t\t\tVoc� coloca a m�o no bolso e pega seu celular\n");
			Sleep(2500);
			printf("\t\t\t\t\t\tParece que sua m�e est� te ligando...\n");
			Sleep(2500);
			
			printmapa();
			printf("\t\t\t\t\t\tMam�e: ''OI MEU DOCINHOOOO!!''\n");
			Sleep(2500);
			printf("\t\t\t\t\t\tMam�e: ''Como vai ai na masmorra?''\n");
			Sleep(2500);
			
			printmapa();
			printf("\t\t\t\t\t\tMam�e: ''Ent�o, eu to vendo aqui um monte de dinheiro caindo na conta''\n");
			Sleep(3500);
			printf("\t\t\t\t\t\tMam�e: ''E sua mam�e querida viu umas coisas muito bonitas no shopping ontem''\n");
			Sleep(4500);
			
			printmapa();
			printf("\t\t\t\t\t\tMam�e: ''Ent�o se n�o for muito inc�modo, eu vou comprar alguns presentinhos''\n");
			Sleep(3500);
			printf("\t\t\t\t\t\tMam�e: ''Nada demais n�o, s�o s� besteirinhas, ok?''\n");
			Sleep(3000);
			
			printmapa();
			printf("\t\t\t\t\t\tMam�e: ''ADEEEEUUSS!! SE DIVIRTAAAA!!''\n");
			Sleep(2500);
			printf("\t\t\t\t\t\t*A liga��o terminou.*\n");
			Sleep(2500);
			
			dano = ouro;
			dano = ouro - round(ouro * 0.12);
			ouro = ouro - dano;
			
			printmapa();
			SetConsoleTextAttribute(h,4);
			printf("\t\t\t\t\t\t\t\tVoc� perdeu %.0f ouro\n\n", dano);
			SetConsoleTextAttribute(h,15);
			Sleep(2000);
			printf("\t\t\t\t\t\t\t\tPoxa m�e");
			Sleep(250);
			
			for(i=0;i<=7;i++){
				printf(".");
				Sleep(200);
			}
			printf("\n\n");
			Sleep(2500);
			
		}
		
	}
	
}


void testequip() {
	
	for(i=0;i<=3;i++){
		if(dura[i] == 0){
			upg[i] = ' ';
			a[i] = 0;
			dura[i] = 1;
			SetConsoleTextAttribute(h,4);
			printf("\t\t\t\t\t\t\t !!! SEU EQUIPAMENTO QUEBROU !!!\n");
			SetConsoleTextAttribute(h,15);
			Sleep(1500);
		}
	}
	
}






















