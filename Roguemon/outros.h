


void intro() {
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tSabe jogar?\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1.SIM  2.N�O\n");
    	switch(toupper(getch())) {
    		
    		case 49:
    			system("cls");
				printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tCerteza?\n");
				printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1.SIM  2.N�O\n");
				
				switch(toupper(getch())) {
				
				case 49:
    				system("cls");
    			break;
    		
    			case 50:
    				intro();
    			break;
    		
    			default:
    				printf("\t\t\t\t\t\t\t\t\t\t\t!!! Op��o Inv�lida !!!\n");
					
				}
				
				
    		break;
    		
    		case 50:
    			system("cls");
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tMOVIMENTO:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tUse WASD para se movimentar.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tCAR�CTERES:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t # = Paredes............(N�o � poss�vel andar sobre.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t $ = Paredes Blindadas..(N�o � poss�vel andar sobre nem explodir.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t B = Ba�s...............(Ba�s contem muito ouro.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t p = Po��es.............(Pequenas po��es que recuperam um pouco de vida.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t Q = Bombas.............(Bombas que quebram paredes e atacam inimigos em batalha.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t I = Itens..............(Itens mudam seus ataques dispon�veis nas batalhas.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t M = Monstros...........(Chegue perto e ira entrar em combate!)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t o = Moedas Pequenas....(Quantidade pequena de ouro.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t O = Moedas Grandes.....(Quantidade grande de ouro.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t 0 = Moedas Gigantes....(Quantidade gigante de ouro.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t | = Port�es............(S� podem ser abertos usando uma chave.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t , = Chaves.............(Abrem port�es por�m s�o muito dif�ceis de se encontrar.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t = = Sa�da Fechada......(Derrote inimigos para abrir a sa�da para o pr�ximo andar.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t + = Sa�da..............(A sa�da para o pr�ximo andar.)\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tLEVEL UP:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAo matar monstros, voc� ira receber XP, ouro e ter� uma chance de receber itens.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tGanhe XP o bastante e voc� ira evoluir de n�vel.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEvoluir seu n�vel ira lhe conceder mais VIDA M�XIMA.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tTamb�m ira te curar ao m�ximo e aumentar o dano de todos os ataques.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tLOJA:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tVoc� poder� encontrar lojas pelo mapa que ir�o te vender itens e outros servi�os.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t- Reparar:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tRepara a durabilidade do equipamento at� o m�ximo.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t- Aprimorar:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tAumenta todos as estat�sticas do equipamento (dano/crt�tico/efeitos).\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tAlguns equipamentos ter�o intera��es novas em sua vers�o aprimorada.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t- Forjar:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tCrie um equipamento do jeito que quiser por uma boa quantidade de ouro.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tATAQUES/PODERES:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tVoc� desbloquear� ataques diferentes achando itens que tenham aqueles ataques/poderes.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAlguns itens ter�o espa�os vazios. Decida se o item que voc� vai pegar vale a pena.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t� poss�vel ver a descri��o de um ataque/poder no menu info->ataques.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tA descri��o daquele ataque s� aparecer� ap�s ele ser usado ao menos uma vez em batalha.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tTente colecionar todos e experimente com combina��es diferentes!\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tCada ataque/poder tem uma durabilidade diferente e ira quebrar se chegar a 0.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tExistem formas de regenerar a durabilidade dos itens no jogo.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tBATALHA:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAs batalhas acontecem em turnos.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tO primeiro turno � decidido de forma aleat�ria.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tUse um de at� 4 ataques e poderes dispon�veis a voc� durante a batalha para tentar vencer.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAtaques tem taxas de dano, habilidades, cr�ticos e efeitos diferentes.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tUm pode dar muito dano mas ser mais dif�cil de se acertar o ataque.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEnquanto outro pode dar pouco dano mas atacar mais de uma vez, sendo mais f�cil acertar v�rios cr�ticos.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAche itens que lhe dar�o sua combina��o favorita de ataques/poderes para usar durante as batalhas!\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tESTUS:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEstus � uma po��o m�gica muito poderosa que cura muita vida.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAp�s ser usado, � necess�rio recarregar o item antes de reultiliz�-lo.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEstus recarrega com sangue. Ataque seu inimigo para recarregar o seu Estus!\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEstus s� pode ser utilizado em batalha e � encontrado no menu de itens.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tITENS:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tItens como bombas e po��es de cura podem ser usados dentro e fora das batalhas.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tVoc� pode achar mais desses itens pelo mapa.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tItens podem ter usos diferentes em batalha do que no mapa.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tEFEITOS DE ESTADO:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAtaques e poderes diferentes podem causar efeitos de estado.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEfeitos de estado ativos aparecer�o ao lado do nome do personagem afetado entre ().\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tO n�mero ao lado do efeito representa a quatidade de turnos no qual ele permaner� ativo.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEfeitos de estado sem n�mero representam efeitos que n�o saem ap�s aplicados.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEfeitos de estado tamb�m podem tem condi��es especiais pra sairem.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tExistem efeitos positivos e negativos. Isso depende do seu ataque/poder usado.\n\n");
				printf("\t\t\t\t\t\t\t\t\t\t\t      -->%s  NIVEL: 1  ( M  V2  F1 )\n", name);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t VIDA: 16/20\n\n");
				printf("\t\t\t\t\t\t\t\t\t\t\t\t MONSTRO  NIVEL: 3  ( P  S2  V5 )\n");
				printf("\t\t\t\t\t\t\t\t\t\t\t\t VIDA: 12/27\n\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tFUN��ES:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAperte a tecla 'P' no seu teclado caso fique preso numa �rea sem saida.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAperte a tecla 'F' no seu teclado para alternar o modo tela cheia.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAperte a tecla 'Q' no seu teclado para usar po��o no mapa.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAperte a tecla 'E' no seu teclado para usar uma bomba no mapa.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAperte a tecla 'Ctrl' no seu teclado e use o scroll para dar zoom e zoomout na tela.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t - CUIDADO: N�O D� ZOOM DEMAIS SEN�O OCULTAR� TEXTO!\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tUse as teclas '<' e '>' no seu teclado para passar as p�ginas em menus com p�gina.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tMORTE:\n");
    			Sleep(3000);
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tSe sua vida chegar a 0, o jogo acaba.\n");
    			Sleep(3000);
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tS� se vive uma vez.\n");
    			Sleep(3000);
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\tTome conta de %s...\n", name);
    			Sleep(4000);
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			strcpy(name2, name);
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tBOA SORTE %s!!\n", strupr(name2));
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    		break;
    		
    		default:
    			printf("\t\t\t\t\t\t\t\t\t\t\t!!! Op��o Inv�lida !!!\n");
    			intro();
    	}
	}










