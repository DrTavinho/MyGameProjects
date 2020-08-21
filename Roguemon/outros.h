


void intro() {
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tSabe jogar?\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1.SIM  2.NÃO\n");
    	switch(toupper(getch())) {
    		
    		case 49:
    			system("cls");
				printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tCerteza?\n");
				printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1.SIM  2.NÃO\n");
				
				switch(toupper(getch())) {
				
				case 49:
    				system("cls");
    			break;
    		
    			case 50:
    				intro();
    			break;
    		
    			default:
    				printf("\t\t\t\t\t\t\t\t\t\t\t!!! Opção Inválida !!!\n");
					
				}
				
				
    		break;
    		
    		case 50:
    			system("cls");
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tMOVIMENTO:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tUse WASD para se movimentar.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tCARÁCTERES:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t # = Paredes............(Não é possível andar sobre.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t $ = Paredes Blindadas..(Não é possível andar sobre nem explodir.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t B = Baús...............(Baús contem muito ouro.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t p = Poções.............(Pequenas poções que recuperam um pouco de vida.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t Q = Bombas.............(Bombas que quebram paredes e atacam inimigos em batalha.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t I = Itens..............(Itens mudam seus ataques disponíveis nas batalhas.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t M = Monstros...........(Chegue perto e ira entrar em combate!)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t o = Moedas Pequenas....(Quantidade pequena de ouro.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t O = Moedas Grandes.....(Quantidade grande de ouro.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t 0 = Moedas Gigantes....(Quantidade gigante de ouro.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t | = Portões............(Só podem ser abertos usando uma chave.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t , = Chaves.............(Abrem portões porém são muito difíceis de se encontrar.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t = = Saída Fechada......(Derrote inimigos para abrir a saída para o próximo andar.)\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t + = Saída..............(A saída para o próximo andar.)\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tLEVEL UP:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAo matar monstros, você ira receber XP, ouro e terá uma chance de receber itens.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tGanhe XP o bastante e você ira evoluir de nível.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEvoluir seu nível ira lhe conceder mais VIDA MÁXIMA.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tTambém ira te curar ao máximo e aumentar o dano de todos os ataques.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tLOJA:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tVocê poderá encontrar lojas pelo mapa que irão te vender itens e outros serviços.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t- Reparar:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tRepara a durabilidade do equipamento até o máximo.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t- Aprimorar:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tAumenta todos as estatísticas do equipamento (dano/crtítico/efeitos).\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tAlguns equipamentos terão interações novas em sua versão aprimorada.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t- Forjar:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t\tCrie um equipamento do jeito que quiser por uma boa quantidade de ouro.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tATAQUES/PODERES:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tVocê desbloqueará ataques diferentes achando itens que tenham aqueles ataques/poderes.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAlguns itens terão espaços vazios. Decida se o item que você vai pegar vale a pena.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tÉ possível ver a descrição de um ataque/poder no menu info->ataques.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tA descrição daquele ataque só aparecerá após ele ser usado ao menos uma vez em batalha.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tTente colecionar todos e experimente com combinações diferentes!\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tCada ataque/poder tem uma durabilidade diferente e ira quebrar se chegar a 0.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tExistem formas de regenerar a durabilidade dos itens no jogo.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tBATALHA:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAs batalhas acontecem em turnos.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tO primeiro turno é decidido de forma aleatória.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tUse um de até 4 ataques e poderes disponíveis a você durante a batalha para tentar vencer.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAtaques tem taxas de dano, habilidades, críticos e efeitos diferentes.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tUm pode dar muito dano mas ser mais difícil de se acertar o ataque.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEnquanto outro pode dar pouco dano mas atacar mais de uma vez, sendo mais fácil acertar vários críticos.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAche itens que lhe darão sua combinação favorita de ataques/poderes para usar durante as batalhas!\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tESTUS:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEstus é uma poção mágica muito poderosa que cura muita vida.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tApós ser usado, é necessário recarregar o item antes de reultilizá-lo.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEstus recarrega com sangue. Ataque seu inimigo para recarregar o seu Estus!\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEstus só pode ser utilizado em batalha e é encontrado no menu de itens.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tITENS:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tItens como bombas e poções de cura podem ser usados dentro e fora das batalhas.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tVocê pode achar mais desses itens pelo mapa.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tItens podem ter usos diferentes em batalha do que no mapa.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tEFEITOS DE ESTADO:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAtaques e poderes diferentes podem causar efeitos de estado.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEfeitos de estado ativos aparecerão ao lado do nome do personagem afetado entre ().\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tO número ao lado do efeito representa a quatidade de turnos no qual ele permanerá ativo.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEfeitos de estado sem número representam efeitos que não saem após aplicados.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tEfeitos de estado também podem tem condições especiais pra sairem.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tExistem efeitos positivos e negativos. Isso depende do seu ataque/poder usado.\n\n");
				printf("\t\t\t\t\t\t\t\t\t\t\t      -->%s  NIVEL: 1  ( M  V2  F1 )\n", name);
				printf("\t\t\t\t\t\t\t\t\t\t\t\t VIDA: 16/20\n\n");
				printf("\t\t\t\t\t\t\t\t\t\t\t\t MONSTRO  NIVEL: 3  ( P  S2  V5 )\n");
				printf("\t\t\t\t\t\t\t\t\t\t\t\t VIDA: 12/27\n\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tFUNÇÕES:\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAperte a tecla 'P' no seu teclado caso fique preso numa área sem saida.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAperte a tecla 'F' no seu teclado para alternar o modo tela cheia.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAperte a tecla 'Q' no seu teclado para usar poção no mapa.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAperte a tecla 'E' no seu teclado para usar uma bomba no mapa.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tAperte a tecla 'Ctrl' no seu teclado e use o scroll para dar zoom e zoomout na tela.\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\t - CUIDADO: NÃO DÊ ZOOM DEMAIS SENÃO OCULTARÁ TEXTO!\n");
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tUse as teclas '<' e '>' no seu teclado para passar as páginas em menus com página.\n");
    			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   ");
    			system("pause");
    			system("cls");
    			
    			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tMORTE:\n");
    			Sleep(3000);
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tSe sua vida chegar a 0, o jogo acaba.\n");
    			Sleep(3000);
    			printf("\t\t\t\t\t\t\t\t\t\t\t\tSó se vive uma vez.\n");
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
    			printf("\t\t\t\t\t\t\t\t\t\t\t!!! Opção Inválida !!!\n");
    			intro();
    	}
	}










