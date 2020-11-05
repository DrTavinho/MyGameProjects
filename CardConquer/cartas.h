


int printcarta(int carta){
	printf("\n");
	switch(carta) {
		
		//0 passa turno, voltar
			
		case 1:
			printf("\t(%d) Defender [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 5 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
		break;
		
		case 2:
			printf("\t(%d) Defender+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 8 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
		break;
		
		case 3:
			printf("\t(%d) Golpe [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((6 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
		break;
		
		case 4:
			printf("\t(%d) Golpe+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((9 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
		break;
		
		case 5:
			printf("\t(%d) Dar de Ombros [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 8 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Compre 1 carta\n");
		break;
		
		case 6:
			printf("\t(%d) Dar de Ombros+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 11 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Compre 1 carta\n");
		break;
		
		case 7:
			printf("\t(%d) Golpe Duplo [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((5 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano 2 vezes\n");
		break;
		
		case 8:
			printf("\t(%d) Golpe Duplo+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((7 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano 2 vezes\n");
		break;
		
		case 9:
			printf("\t(%d) Onda de Ferro [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((5 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 5 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
		break;
		
		case 10:
			printf("\t(%d) Onda de Ferro+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((7 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 7 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
		break;
		
		case 11:
			printf("\t(%d) Cego de Raiva [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @ @\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -Gaste a carta\n");
		break;
		
		case 12:
			printf("\t(%d) Cego de Raiva+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @ @\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -Gaste a carta\n");
		break;
			
		case 13:
			printf("\t(%d) Enfaixar [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cure");
			SetConsoleTextAttribute(h,10);
			printf(" 8 ");
			SetConsoleTextAttribute(h,15);
			printf("de Vida\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 14:
			printf("\t(%d) Enfaixar+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cure");
			SetConsoleTextAttribute(h,10);
			printf(" 12 ");
			SetConsoleTextAttribute(h,15);
			printf("de Vida\n");
			printf("\t    -Gaste a carta\n");
		break;
			
		case 15:
			printf("\t(%d) Armadura Fantasma [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 10 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Carta é gasta se não jogada\n");
		break;
		
		case 16:
			printf("\t(%d) Armadura Fantasma+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 13 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Carta é gasta se não jogada\n");
		break;
			
		case 17:
			printf("\t(%d) Oferenda [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Perca");
			SetConsoleTextAttribute(h,4);
			printf(" 6 ");
			SetConsoleTextAttribute(h,15);
			printf("de Vida\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @ @\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -Compre 3 cartas\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 18:
			printf("\t(%d) Oferenda+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Perca");
			SetConsoleTextAttribute(h,4);
			printf(" 6 ");
			SetConsoleTextAttribute(h,15);
			printf("de Vida\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @ @\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -Compre 5 cartas\n");
			printf("\t    -Gaste a carta\n");
		break;
			
		case 19:
			printf("\t(%d) Entricheirar [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Dobre sua quantidade de Escudo\n");
		break;
		
		case 20:
			printf("\t(%d) Entricheirar+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Dobre sua quantidade de Escudo\n");
		break;
			
		case 21:
			printf("\t(%d) Golpe de Pomo [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((9 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Compre 1 carta\n");
		break;
		
		case 22:
			printf("\t(%d) Golpe de Pomo+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((10 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Compre 2 carta\n");
		break;
			
		case 23:
			printf("\t(%d) Inflamar [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganha 2 de Força\n");
		break;
		
		case 24:
			printf("\t(%d) Inflamar+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganha 3 de Força\n");
		break;
			
		case 25:
			printf("\t(%d) Carnificina [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((20 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
		break;
		
		case 26:
			printf("\t(%d) Carnificina+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((26 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
		break;
			
		case 27:
			printf("\t(%d) Esmurrar [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((2 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano 4 vezes\n");
		break;
		
		case 28:
			printf("\t(%d) Esmurrar+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((2 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano 5 vezes\n");
		break;
			
		case 29:
			printf("\t(%d) Impenetravel [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 30 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 30:
			printf("\t(%d) Impenetravel+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 40 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Gaste a carta\n");
		break;
			
		case 31:
			printf("\t(%d) Quebra de Limites [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Dobre sua Força\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 32:
			printf("\t(%d) Quebra de Limites+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Dobre sua Força\n");
		break;
			
		case 33:
			printf("\t(%d) Neutralizar [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((3 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Aplique 1 de Fraqueza\n");
		break;
		
		case 34:
			printf("\t(%d) Neutralizar+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((4 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Aplique 2 de Fraqueza\n");
		break;
			
		case 35:
			printf("\t(%d) Veneno Mortal [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Aplique 5 de Veneno\n");
		break; 
		
		case 36:
			printf("\t(%d) Veneno Mortal+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Aplique 7 de Veneno\n");
		break;
		
		case 37:
			printf("\t(%d) Pancada [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((8 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Aplique 2 de Vulnerabilidade\n");
		break;
		
		case 38:
			printf("\t(%d) Pancada+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((10 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Aplique 3 de Vulnerabilidade\n");
		break;
		
		case 39:
			printf("\t(%d) Desarmar [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -O inimigo perde 2 de força\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 40:
			printf("\t(%d) Desarmar+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -O inimigo perde 3 de força\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 41:
			printf("\t(%d) Fatiar [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((8 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano a TODOS os inimigos\n");
		break;
		
		case 42:
			printf("\t(%d) Fatiar+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((11 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano a TODOS os inimigos\n");
		break;
		
		case 43:
			printf("\t(%d) Bravura Indômita [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 7 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Gaste uma carta da sua mão aleatoriamente\n");
		break;
		
		case 44:
			printf("\t(%d) Bravura Indômita+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 9 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Gaste uma carta da sua mão aleatoriamente\n");
		break;
		
		case 45:
			printf("\t(%d) Apunhalada Envenenada [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((6 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Aplique 3 de Veneno\n");
		break;
		
		case 46:
			printf("\t(%d) Apunhalada Envenenada+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((8 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Aplique 4 de Veneno\n");
		break;
		
		case 47:
			printf("\t(%d) Corte [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((5 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
		break;
		
		case 48:
			printf("\t(%d) Corte+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((8 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
		break;
		
		case 49:
			printf("\t(%d) Terror [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Aplique 99 de Vulnerabilidade\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 50:
			printf("\t(%d) Terror+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Aplique 99 de Vulnerabilidade\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 51:
			printf("\t(%d) Dança das Lâminas [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Receba 2 Estoques: [4 de Dano | Gaste a carta | Custo: - ]\n");
		break;
		
		case 52:
			printf("\t(%d) Dança das Lâminas+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Receba 3 Estoques: [4 de Dano | Gaste a carta | Custo: - ]\n");
		break;
		
		case 53:
			printf("\t(%d) Estoque [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((4 + forca + bonusestoque) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		
		case 54:
			printf("\t(%d) Estoque+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((6 + forca + bonusestoque) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 55:
			printf("\t(%d) Golpe Selvagem [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((12 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Embaralhe 1 Ferida: [Injogável] na pilha de compras\n");
		break;
			
		case 56:
			printf("\t(%d) Golpe Selvagem+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((17 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Embaralhe 1 Ferida: [Injogável] na pilha de compras\n");
		break;
		
		case 57:
			printf("\t(%d) Ferida [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" MALDIÇÃO ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Injogável\n");
		break;
		
		case 58:
			printf("\t(%d) Atordoado [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" MALDIÇÃO ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Injogável\n");
			printf("\t    -Carta é gasta se não jogada\n");
		break;
		
		case 59:
			printf("\t(%d) Investida Imprudente [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((7 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Embaralhe 1 Atordoado: [Injogável | Gasta se não jogada] na pilha de compras\n");
		break;
		
		case 60:
			printf("\t(%d) Investida Imprudente+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((10 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Embaralhe 1 Atordoado: [Injogável | Gasta se não jogada] na pilha de compras\n");
		break;
		
		case 61:
			printf("\t(%d) Resistir [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 15 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Embaralhe 2 Ferida: [Injogável] na pilha de compras\n");
		break;
		
		case 62:
			printf("\t(%d) Resistir+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 20 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Embaralhe 2 Ferida: [Injogável] na pilha de compras\n");
		break;
		
		case 63:
			printf("\t(%d) Aprendizado [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Compre 1 Carta a mais todo turno\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 64:
			printf("\t(%d) Aprendizado+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Compre 1 Carta a mais todo turno\n");
			printf("\t    -Gaste a carta\n");
		break;
	
		case 65:
			printf("\t(%d) Sangria [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Perca");
			SetConsoleTextAttribute(h,4);
			printf(" 3 ");
			SetConsoleTextAttribute(h,15);
			printf("de Vida\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @\n");
			SetConsoleTextAttribute(h,15);
		break;
		
		case 66:
			printf("\t(%d) Sangria+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Perca");
			SetConsoleTextAttribute(h,4);
			printf(" 3 ");
			SetConsoleTextAttribute(h,15);
			printf("de Vida\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @ @\n");
			SetConsoleTextAttribute(h,15);
		break;
		
		case 67:
			printf("\t(%d) Chuva de Adagas [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((4 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano a TODOS os inimigos 2 Vezes\n");
		break;
		
		case 68:
			printf("\t(%d) Chuva de Adagas+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((6 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano a TODOS os inimigos 2 Vezes\n");
		break;
		
		case 69:
			printf("\t(%d) Morram Morram Morram [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((13 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano a TODOS os inimigos\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 70:
			printf("\t(%d) Morram Morram Morram+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((17 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano a TODOS os inimigos\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 71:
			printf("\t(%d) Manto e Adaga [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 6 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Receba 1 Estoques: [4 de Dano | Gaste a carta | Custo: - ]\n");
		break;
		
		case 72:
			printf("\t(%d) Manto e Adaga+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 6 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Receba 2 Estoques: [4 de Dano | Gaste a carta | Custo: - ]\n");
		break;
		
		case 73:
			printf("\t(%d) Catalisador [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Dobre o Veneno do inimigo\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 74:
			printf("\t(%d) Catalisador+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Triplique o Veneno do inimigo\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 75:
			printf("\t(%d) Gosmento [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 76:
			printf("\t(%d) Queimadura [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" MALDIÇÃO ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Injogável\n");
			printf("\t    -Receba 2 de Dano ao final do turno\n");
			printf("\t    -Carta é gasta se não jogada\n");
		break;
		
		case 77:
			printf("\t(%d) Mordida Vampírica [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((7 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Cure");
			SetConsoleTextAttribute(h,10);
			printf(" 2 ");
			SetConsoleTextAttribute(h,15);
			printf("de Vida\n");
		break;
		
		case 78:
			printf("\t(%d) Mordida Vampírica+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((8 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Cure");
			SetConsoleTextAttribute(h,10);
			printf(" 3 ");
			SetConsoleTextAttribute(h,15);
			printf("de Vida\n");
		break;
		
		case 79:
			printf("\t(%d) Imolar [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((16 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano a TODOS os inimigos\n");
			printf("\t    -Adicione a pilha de descartes 1 Queimadura:\n");
			printf("\t    [Receba 2 de Dano ao final do turno | Gasta se não jogada | Injogável]\n");
		break;
		
		case 80:
			printf("\t(%d) Imolar+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((20 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano a TODOS os inimigos\n");
			printf("\t    -Adicione a pilha de descartes 1 Queimadura:\n");
			printf("\t    [Receba 2 de Dano ao final do turno | Gasta se não jogada | Injogável]\n");
		break;
		
		case 81:
			printf("\t(%d) Sobrevivente [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 8 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Descarte 1 carta\n");
		break;
		
		case 82:
			printf("\t(%d) Sobrevivente+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 11 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Descarte 1 carta\n");
		break;
		
		case 83:
			printf("\t(%d) Acrobacias [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Compre 3 cartas\n");
			printf("\t    -Descarte 1 carta\n");
		break;
		
		case 84:
			printf("\t(%d) Acrobacias+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Compre 4 cartas\n");
			printf("\t    -Descarte 1 carta\n");
		break;
		
		case 85:
			printf("\t(%d) Preparado [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Compre 1 cartas\n");
			printf("\t    -Descarte 1 carta\n");
		break;
		
		case 86:
			printf("\t(%d) Preparado+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Compre 2 cartas\n");
			printf("\t    -Descarte 2 carta\n");
		break;
		
		case 87:
			printf("\t(%d) Ataque Total [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((10 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano a TODOS os inimigos\n");
			printf("\t    -Descarte uma carta da sua mão aleatoriamente\n");
		break;
		
		case 88:
			printf("\t(%d) Ataque Total+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((14 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano a TODOS os inimigos\n");
			printf("\t    -Descarte uma carta da sua mão aleatoriamente\n");
		break;
		
		case 89:
			printf("\t(%d) Frasco Saltitante [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Aplique 3 de Veneno a um inimigo aleatório 3 vezes\n");
		break;
		
		case 90:
			printf("\t(%d) Frasco Saltitante+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Aplique 3 de Veneno a um inimigo aleatório 4 vezes\n");
		break;
		
		case 91:
			printf("\t(%d) Gases Nocivos [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Aplique 4 de Veneno a TODOS os inimigos\n");
		break;
		
		case 92:
			printf("\t(%d) Gases Nocivos+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Aplique 4 de Veneno a TODOS os inimigos\n");
		break;
		
		case 93:
			printf("\t(%d) Nuvem Debilitante [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Aplique 4 de Veneno a TODOS os inimigos\n");
			printf("\t    -Aplique 2 de Fraqueza a TODOS os inimigos\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 94:
			printf("\t(%d) Nuvem Debilitante+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Aplique 6 de Veneno a TODOS os inimigos\n");
			printf("\t    -Aplique 3 de Fraqueza a TODOS os inimigos\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 95:
			printf("\t(%d) Tempestade de Aço [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Descarte TODA a sua mão e receba Estoque pela quantidade descartada\n");
			printf("\t    -Estoque: [4 de Dano | Gaste a carta | Custo: - ]\n");
		break;
		
		case 96:
			printf("\t(%d) Tempestade de Aço+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Descarte TODA a sua mão e receba Estoque+ pela quantidade descartada\n");
			printf("\t    -Estoque+: [6 de Dano | Gaste a carta | Custo: - ]\n");
		break;
		
		case 97:
			printf("\t(%d) Adrenalina [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -Compre 2 cartas\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 98:
			printf("\t(%d) Adrenalina+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @ @\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -Compre 2 cartas\n");
			printf("\t    -Gaste a carta\n");
		break;
		
		case 99:
			printf("\t(%d) Auto Reparos [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cure");
			SetConsoleTextAttribute(h,10);
			printf(" +4 ");
			SetConsoleTextAttribute(h,15);
			printf("de Vida ao final do combate\n");
			printf("\t    -CURA ATUAL: (");
			SetConsoleTextAttribute(h,10);
			printf("+%d", autoreparos);
			SetConsoleTextAttribute(h,15);
			printf(")\n");
		break;
		
		case 100:
			printf("\t(%d) Auto Reparos+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cure");
			SetConsoleTextAttribute(h,10);
			printf(" +7 ");
			SetConsoleTextAttribute(h,15);
			printf("de Vida ao final do combate\n");
			printf("\t    -CURA ATUAL: (");
			SetConsoleTextAttribute(h,10);
			printf("+%d", autoreparos);
			SetConsoleTextAttribute(h,15);
			printf(")\n");
		break;
		
		case 101:
			printf("\t(%d) Energizar [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Dobre sua ");
			SetConsoleTextAttribute(h,3);
			printf("Mana\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -Gaste a carta\n");
		break;
		
		case 102:
			printf("\t(%d) Energizar+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Dobre sua ");
			SetConsoleTextAttribute(h,3);
			printf("Mana\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -Gaste a carta\n");
		break;
		
		case 103:
			printf("\t(%d) Feixe Celular [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((3 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Aplique 1 de Vulnerabilidade\n");
		break;
		
		case 104:
			printf("\t(%d) Feixe Celular+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((4 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -Aplique 2 de Vulnerabilidade\n");
		break;
		
		case 105:
			printf("\t(%d) Enganar [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -No próximo turno, ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @ @\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -MANA EXTRA PRÓXIMO TURNO: (+%d)\n", manap);
		break;
		
		case 106:
			printf("\t(%d) Enganar+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -No próximo turno, ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -MANA EXTRA PRÓXIMO TURNO: (+%d)\n", manap);
		break;
		
		case 107:
			printf("\t(%d) Joelhada Voadora [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((8 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -No próximo turno, ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -MANA EXTRA PRÓXIMO TURNO: (+%d)\n", manap);
		break;
		
		case 108:
			printf("\t(%d) Joelhada Voadora+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((11 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano\n");
			printf("\t    -No próximo turno, ganhe");
			SetConsoleTextAttribute(h,3);
			printf(" @\n");
			SetConsoleTextAttribute(h,15);
			printf("\t    -MANA EXTRA PRÓXIMO TURNO: (+%d)\n", manap);
		break;
		
		case 109:
			printf("\t(%d) Lâminas Infinitas [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			if(laminf == 0){
				printf("\t    -No início de cada turno, receba 1 Estoque\n");
				printf("\t    -Efeito NÃO é empilhavel!\n");
				printf("\t    -Estoque: [4 de Dano | Gaste a carta | Custo: - ]\n");
			} else {
				SetConsoleTextAttribute(h,8);
				printf("\t    - !!! HABILIDADE ATIVA !!!\n");
				printf("\t    -Use para descartar\n");
				SetConsoleTextAttribute(h,15);
			}
		break;
		
		case 110:
			printf("\t(%d) Lâminas Infinitas+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			if(laminf <= 1){
				printf("\t    -No início de cada turno, receba 1 Estoque+\n");
				printf("\t    -Efeito NÃO é empilhavel!\n");
				printf("\t    -Estoque+: [6 de Dano | Gaste a carta | Custo: - ]\n");
			} else {
				SetConsoleTextAttribute(h,8);
				printf("\t    - !!! HABILIDADE ATIVA !!!\n");
				printf("\t    -Use para descartar\n");
				SetConsoleTextAttribute(h,15);
			}
		break;
		
		case 111:
			printf("\t(%d) Precisão [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Estoques causam 3 de dano adicional\n");
			printf("\t    -Estoque: [4 de Dano | Gaste a carta | Custo: - ]\n");
			printf("\t    -Bônus de dano atual: (+%d)\n", bonusestoque);
		break;
		
		case 112:
			printf("\t(%d) Precisão+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Estoques causam 5 de dano adicional\n");
			printf("\t    -Estoque: [4 de Dano | Gaste a carta | Custo: - ]\n");
			printf("\t    -Bônus de dano atual: (+%d)\n", bonusestoque);
		break;
		
		case 113:
			printf("\t(%d) Rastro [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Sempre que jogar uma carta, ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" +1 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Bônus Rastro: (+%d)\n", rastro);
		break;
		
		case 114:
			printf("\t(%d) Rastro+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 5 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Sempre que jogar uma carta, ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" +1 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
			printf("\t    -Bônus Rastro: (+%d)\n", rastro);
		break;
		
		case 115:
			printf("\t(%d) Envenenar [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			
			if(envenenar == 0){
				printf("\t    -Sempre que um ataque causar dano não protegido, aplique 1 de veneno\n");
				printf("\t    -Efeito NÃO é empilhavel!\n");
			} else {
				SetConsoleTextAttribute(h,8);
				printf("\t    - !!! HABILIDADE ATIVA !!!\n");
				printf("\t    -Use para descartar\n");
				SetConsoleTextAttribute(h,15);
			}
		break;
		
		case 116:
			printf("\t(%d) Envenenar+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			
			if(envenenar == 0){
				printf("\t    -Sempre que um ataque causar dano não protegido, aplique 1 de veneno\n");
				printf("\t    -Efeito NÃO é empilhavel!\n");
			} else {
				SetConsoleTextAttribute(h,8);
				printf("\t    - !!! HABILIDADE ATIVA !!!\n");
				printf("\t    -Use para descartar\n");
				SetConsoleTextAttribute(h,15);
			}
		break;
		
		case 117:
			printf("\t(%d) Barricada [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			
			if(barricada == 0){
				printf("\t    -Escudo não é mais removido no início do seu turno\n");
				printf("\t    -Efeito NÃO é empilhavel!\n");
			} else {
				SetConsoleTextAttribute(h,8);
				printf("\t    - !!! HABILIDADE ATIVA !!!\n");
				printf("\t    -Use para descartar\n");
				SetConsoleTextAttribute(h,15);
			}
		break;
		
		case 118:
			printf("\t(%d) Barricada+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			
			if(barricada == 0){
				printf("\t    -Escudo não é mais removido no início do seu turno\n");
				printf("\t    -Efeito NÃO é empilhavel!\n");
			} else {
				SetConsoleTextAttribute(h,8);
				printf("\t    - !!! HABILIDADE ATIVA !!!\n");
				printf("\t    -Use para descartar\n");
				SetConsoleTextAttribute(h,15);
			}
		break;
		
		case 119:
			printf("\t(%d) Defletir [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 4 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
		break;
		
		case 120:
			printf("\t(%d) Defletir+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 7 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
		break;
		
		case 121:
			printf("\t(%d) Mil Cortes [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			
			if(milcorte == 0){
				printf("\t    -Sempre que jogar uma carta, cause 1 de dano a TODOS os inimigos\n");
				printf("\t    -Efeito NÃO é empilhavel!\n");
			} else {
				SetConsoleTextAttribute(h,8);
				printf("\t    - !!! HABILIDADE ATIVA !!!\n");
				printf("\t    -Use para descartar\n");
				SetConsoleTextAttribute(h,15);
			}
		break;
		
		case 122:
			printf("\t(%d) Mil Cortes+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @ @ @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			
			if(milcorte <= 1){
				printf("\t    -Sempre que jogar uma carta, cause 2 de dano a TODOS os inimigos\n");
				printf("\t    -Efeito NÃO é empilhavel!\n");
			} else {
				SetConsoleTextAttribute(h,8);
				printf("\t    - !!! HABILIDADE ATIVA !!!\n");
				printf("\t    -Use para descartar\n");
				SetConsoleTextAttribute(h,15);
			}
		break;
		
		case 123:
			printf("\t(%d) Perícia [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Compre cartas até que você tenha 6 na mão\n");
		break;
		
		case 124:
			printf("\t(%d) Perícia+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Compre cartas até que você tenha 7 na mão\n");
		break;
		
		case 125:
			printf("\t(%d) Ruína [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((7 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano.\n"); 
			printf("\t    -Se o inimigo tiver Veneno, cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((7 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano novamente\n");
		break;
		
		case 126:
			printf("\t(%d) Ruína+ [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" @");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((10 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano.\n"); 
			printf("\t    -Se o inimigo tiver Veneno, cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((10 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano novamente\n");
		break;
		
		case 999:
			printf("\t(%d) DEV HYPER GUN [CUSTO:",(i+1));
			SetConsoleTextAttribute(h,3);
			printf(" - ");
			SetConsoleTextAttribute(h,15);
			printf("]:\n");
			printf("\t    -Cause");
			SetConsoleTextAttribute(h,12);
			printf(" %.0f ",round((999 + forca) * (fraq * 1)));
			SetConsoleTextAttribute(h,15);
			printf("de Dano.\n");
			printf("\t    -Ganhe");
			SetConsoleTextAttribute(h,14);
			printf(" 100 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");
		break;
	}
	
}


int usarcarta(int carta) {

	switch(carta) {
		
		case 1:
			if(mana >= 1){
				escudo = escudo + 5;
				mana = mana - 1;
				descartar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 5 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 2:
			if(mana >= 1){
				escudo = escudo + 8;
				mana = mana - 1;
				descartar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 8 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 3:
			if(mana >= 1){
				dano(6);
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 4:
			if(mana >= 1){
				dano(9);
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 5:
			if(mana >= 2){
				
				pegar(1);
				escudo = escudo + 8;
				mana = mana - 2;
				descartar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 8 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 6:
			if(mana >= 2){
				
				pegar(1);
				escudo = escudo + 11;
				mana = mana - 2;
				descartar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 11 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 7:
			if(mana >= 1){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				danor(5,2);
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
			
		break;
		
		case 8:
			if(mana >= 1){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				danor(7,2);
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 9:
			
			if(mana >= 1){
				
				dano(5);
				escudo = escudo + 5;
				mana = mana - 1;
				descartar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 5 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
			
		break;
		
		case 10:
			if(mana >= 1){
				
				dano(7);
				escudo = escudo + 7;
				mana = mana - 1;
				descartar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 7 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 11:
			if(mana >= 1){
				mana = mana + 1; //ganha "2" de mana
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 12:
			mana = mana + 2;
			gastar(cj);
		break;
		
		case 13:
			if(mana >= 1){
				vida = vida + 8;
				if(vida > vidamax){
					vida = vidamax;
				}
				mana = mana - 1;
				gastar(cj);
				cartausada();
				
				printf("\tCurou");
				SetConsoleTextAttribute(h,10);
				printf(" 8 ");
				SetConsoleTextAttribute(h,15);
				printf("de Vida\n");		
				Sleep(1000);
				
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 14:
			if(mana >= 1){
				vida = vida + 12;
				if(vida > vidamax){
					vida = vidamax;
				}
				mana = mana - 1;
				gastar(cj);
				cartausada();
				
				printf("\tCurou");
				SetConsoleTextAttribute(h,10);
				printf(" 12 ");
				SetConsoleTextAttribute(h,15);
				printf("de Vida\n");	
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 15:
			if(mana >= 1){
				escudo = escudo + 10;
				mana = mana - 1;
				descartar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 10 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 16:
			if(mana >= 1){
				escudo = escudo + 13;
				mana = mana - 1;
				descartar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 13 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 17:
			if(vida > 6){
				
				vida = vida - 6;
				pegar(3);
				mana = mana + 2;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ VIDA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 18:
			if(vida > 6){
				
				vida = vida - 6;
				pegar(5);
				mana = mana + 2;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ VIDA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 19:
			if(mana >= 2){
				
				escudo = escudo * 2;
				mana = mana - 2;
				descartar(cj);
				cartausada();
				
				printf("\tEscudo Dobrado!\n");		
				Sleep(1000);
				
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 20:
			if(mana >= 1){
				
				escudo = escudo * 2;
				mana = mana - 1;
				descartar(cj);
				cartausada();
				
				printf("\tQuantidade de Escudo Duplicada!");
				Sleep(1000);
				
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 21:
			if(mana >= 2){
				
				dano(9);
				pegar(1);
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 22:
			if(mana >= 2){
				
				dano(10);
				pegar(2);
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 23:
			if(mana >= 1){
				
				forca = forca + 2;
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 24:
			if(mana >= 1){
				
				forca = forca + 3;
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 25:
			if(mana >= 3){
				
				dano(20);
				mana = mana - 3;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 26:
			if(mana >= 3){
				
				dano(26);
				mana = mana - 3;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 27:
			if(mana >= 1){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				danor(2,4);
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 28:
			if(mana >= 1){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				danor(2,5);
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 29:
			if(mana >= 3){
				
				escudo = escudo + 30;
				mana = mana - 3;
				gastar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 30 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 30:
			if(mana >= 3){
				
				escudo = escudo + 40;
				mana = mana - 3;
				gastar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 40 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 31:
			if(mana >= 2){
				
				forca = forca * 2;
				mana = mana - 2;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 32:
			if(mana >= 2){
				
				forca = forca * 2;
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 33:
			dano(3);
			inim[opcao].fraq = 0.75;
			inim[opcao].Dfraq = inim[opcao].Dfraq + 1;
			descartar(cj);
			cartausada();
		break;
		
		case 34:
			dano(4);
			inim[opcao].fraq = 0.75;
			inim[opcao].Dfraq = inim[opcao].Dfraq + 2;
			descartar(cj);
			cartausada();
		break;
			
		case 35:
			if(mana >= 1){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				inim[opcao].veneno = inim[opcao].veneno + 5;
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 36:
			if(mana >= 1){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				inim[opcao].veneno = inim[opcao].veneno + 7;
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 37:
			if(mana >= 2){
				
				dano(8);
				mana = mana - 2;
				inim[opcao].vul = 1.5;
				inim[opcao].Dvul = inim[opcao].Dvul + 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 38:
			if(mana >= 2){
				
				dano(10);
				mana = mana - 2;
				inim[opcao].vul = 1.5;
				inim[opcao].Dvul = inim[opcao].Dvul + 3;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 39:
			if(mana >= 1){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				inim[opcao].forca = inim[opcao].forca - 2;
				
				mana = mana - 1;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 40:
			if(mana >= 1){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				inim[opcao].forca = inim[opcao].forca - 3;
				
				mana = mana - 1;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 41:
			if(mana >= 2){
				
				danot(8);
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 42:
			if(mana >= 2){
				
				danot(11);
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 43:
			if(mana >= 1){
				
				escudo = escudo + 7;
				mana = mana - 1;
				
				descartar(cj);
				gastarale();
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 7 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 44:
			if(mana >= 1){
				
				escudo = escudo + 9;
				mana = mana - 1;
				
				descartar(cj);
				gastarale();
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 9 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 45:
			if(mana >= 1){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				inim[opcao].veneno = inim[opcao].veneno + 3;
				danor(6,1);
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 46:
			if(mana >= 1){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				inim[opcao].veneno = inim[opcao].veneno + 4;
				danor(8,1);
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 47:
			dano(5);
			descartar(cj);
			cartausada();
		break;
		
		case 48:
			dano(8);
			descartar(cj);
			cartausada();
		break;
		
		case 49:
			if(mana >= 2){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				inim[opcao].Dvul = inim[opcao].Dvul + 99;
				inim[opcao].vul = 1.5;
				
				mana = mana - 2;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 50:
			if(mana >= 1){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				inim[opcao].Dvul = inim[opcao].Dvul + 99;
				inim[opcao].vul = 1.5;
				
				mana = mana - 1;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 51:
			if(mana >= 1){
				
				pegares(53);
				pegares(53);
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 52:
			if(mana >= 1){
				
				pegares(53);
				pegares(53);
				pegares(53);
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 53:
			dano(4 + bonusestoque);
			gastar(cj);
			cartausada();
		break;
		
		case 54:
			dano(6 + bonusestoque);
			gastar(cj);
			cartausada();
		break;
		
		case 55:
			if(mana >= 2){
				
				dano(12);
				embalea(57);
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
			
		case 56:
			if(mana >= 2){
				
				dano(17);
				embalea(57);
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 57:
			printf("\tNÃO É POSSÍVEL JOGAR ESSA CARTA!\n");
			Sleep(1200);
		break;
		
		case 58:
			printf("\tNÃO É POSSÍVEL JOGAR ESSA CARTA!\n");
			Sleep(1200);
		break;
		
		case 59:
			dano(7);
			embalea(58);
			descartar(cj);
			cartausada();
		break;
		
		case 60:
			dano(10);
			embalea(58);
			descartar(cj);
			cartausada();
		break;
		
		case 61:
			if(mana >= 2){
				escudo = escudo + 15;
				embalea(57);
				embalea(57);
				mana = mana - 2;
				descartar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 15 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 62:
			if(mana >= 2){
				escudo = escudo + 20;
				embalea(57);
				embalea(57);
				mana = mana - 2;
				descartar(cj);
				cartausada();
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 20 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 63:
			if(mana >= 1){
				maomax++;
				mana = mana - 1;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 64:
			maomax++;
			gastar(cj);
			cartausada();
		break;
		
		case 65:
			if(vida > 3){
				
				vida = vida - 3;
				mana = mana + 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ VIDA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 66:
			if(vida > 3){
				
				vida = vida - 3;
				mana = mana + 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ VIDA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 67:
			if(mana >= 2){
				
				danot(4);
				danot(4);
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 68:
			if(mana >= 2){
				
				danot(6);
				danot(6);
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 69:
			if(mana >= 2){
				
				danot(13);
				mana = mana - 2;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 70:
			if(mana >= 2){
				
				danot(17);
				mana = mana - 2;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 71:
			if(mana >= 1){
				
				pegares(53);
				escudo = escudo + 6;
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 6 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 72:
			if(mana >= 1){
				
				pegares(53);
				pegares(53);
				escudo = escudo + 6;
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 6 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 73:
			if(mana >= 2){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				inim[opcao].veneno = inim[opcao].veneno * 2;
				mana = mana - 2;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 74:
			if(mana >= 2){
				
				tabela();
				campo();
				printmao();
				escolherinim();
				
				inim[opcao].veneno = inim[opcao].veneno * 3;
				mana = mana - 2;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 75:
			if(mana >= 1){
				
				mana = mana - 1;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 76:
			printf("\tNÃO É POSSÍVEL JOGAR ESSA CARTA!\n");
			Sleep(1200);
		break;
		
		case 77:
			if(mana >= 1){
				
				dano(7);
				vida = vida + 2;
				if(vida > vidamax){
					vida = vidamax;
				}
				printf("\tCurou");
				SetConsoleTextAttribute(h,10);
				printf(" 2 ");
				SetConsoleTextAttribute(h,15);
				printf("de Vida\n");	
				mana = mana - 1;
				descartar(cj);
				cartausada();
				Sleep(1200);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 78:
			if(mana >= 1){
				
				dano(8);
				vida = vida + 3;
				if(vida > vidamax){
					vida = vidamax;
				}
				printf("\tCurou");
				SetConsoleTextAttribute(h,10);
				printf(" 3 ");
				SetConsoleTextAttribute(h,15);
				printf("de Vida\n");	
				mana = mana - 1;
				descartar(cj);
				cartausada();
				Sleep(1200);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 79:
			if(mana >= 3){
				
				descarid(76);
				danot(16);
				mana = mana - 3;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 80:
			if(mana >= 3){
				
				descarid(76);
				danot(20);
				mana = mana - 3;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 81:
			if(mana >= 1){
				
				escudo = escudo + 8;
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 8 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
				mana = mana - 1;
				descartar(cj);
				descarsel();
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 82:
			if(mana >= 1){
				
				escudo = escudo + 11;
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 11 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1000);
				
				mana = mana - 1;
				descartar(cj);
				descarsel();
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 83:
			if(mana >= 1){
				
				mana = mana - 1;
				pegar(3);
				descartar(cj);
				descarsel();
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 84:
			if(mana >= 1){
				
				mana = mana - 1;
				pegar(4);
				descartar(cj);
				descarsel();
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 85:
			pegar(1);
			descartar(cj);
			descarsel();
			cartausada();
		break;
		
		case 86:
			pegar(2);
			descartar(cj);
			descarsel();
			descarsel();
			cartausada();
		break;
		
		case 87:
			if(mana >= 2){
				
				mana = mana - 2;
				
				danot(10);
				
				descartar(cj);
				descartale();
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 88:
			if(mana >= 2){
				
				mana = mana - 2;
				
				danot(14);
				
				descartar(cj);
				descartale();
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 89:
			if(mana >= 2){
				
				for(i3=0;i3<3;i3++) {
					
					opcao = (rand() % 5);
					while(inim[opcao].tipo == 0 || inim[opcao].vidamax <= 0 || inim[opcao].vida <= 0) {
						opcao = (rand() % 5);
					}
					
					inim[opcao].veneno = inim[opcao].veneno + 3;
					printf("\tFRASCO SALTITANTE PULOU EM -> %s\n",inim[opcao].nome);
					Sleep(1200);
				}
				
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 90:
			if(mana >= 2){
				
				for(i3=0;i3<4;i3++) {
					
					opcao = (rand() % 5);
					while(inim[opcao].tipo == 0 || inim[opcao].vidamax <= 0 || inim[opcao].vida <= 0) {
						opcao = (rand() % 5);
					}
					inim[opcao].veneno = inim[opcao].veneno + 3;
					printf("\tFRASCO SALTITANTE+ PULOU EM -> %s\n",inim[opcao].nome);
					Sleep(1200);
				}
				
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 91:
			if(mana >= 2){
				
				for(i3=0;i3<5;i3++) {
					if(inim[i3].tipo > 0 && inim[i3].vidamax > 0 && inim[i3].vida > 0) {
						inim[i3].veneno = inim[i3].veneno + 4;	
					}
				}
				
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 92:
			if(mana >= 1){
				
				for(i3=0;i3<5;i3++) {
					if(inim[i3].tipo > 0 && inim[i3].vidamax > 0 && inim[i3].vida > 0) {
						inim[i3].veneno = inim[i3].veneno + 4;	
					}
				}
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 93:
			if(mana >= 2){
				
				for(i3=0;i3<5;i3++) {
					if(inim[i3].tipo > 0 && inim[i3].vidamax > 0 && inim[i3].vida > 0) {
						inim[i3].veneno = inim[i3].veneno + 4;
						inim[i3].Dfraq = inim[i3].Dfraq + 2;
						inim[i3].fraq = 0.75;
					}
				}
				
				mana = mana - 2;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 94:
			if(mana >= 2){
				
				for(i3=0;i3<5;i3++) {
					if(inim[i3].tipo > 0 && inim[i3].vidamax > 0 && inim[i3].vida > 0) {
						inim[i3].veneno = inim[i3].veneno + 6;
						inim[i3].Dfraq = inim[i3].Dfraq + 3;
						inim[i3].fraq = 0.75;
					}
				}
				
				mana = mana - 2;
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 95:
			if(mana >= 2){
				
				descartar(cj);
				cartausada();
				
				int tda = 0;
				
				i3 = Mtopo;
				
				desmao();
				
				for(tda=0;tda<i3;tda++){
					pegares(53);
				}
				
				mana = mana - 2;
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 96:
			if(mana >= 2){
				
				descartar(cj);
				cartausada();
				
				int tda = 0;
				
				i3 = Mtopo;
				
				desmao();
				
				for(tda=0;tda<i3;tda++){
					pegares(54);
				}
				
				mana = mana - 2;
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 97:
			mana++;
			pegar(2);
			gastar(cj);
			cartausada();
		break;
		
		case 98:
			mana = mana + 2;
			pegar(2);
			gastar(cj);
			cartausada();
		break;
		
		case 99:
			if(mana >= 2){
				autoreparos = autoreparos + 4;
				mana = mana - 2;
				descartar(cj);
				cartausada();
				
				printf("\tCURA ATUAL: (");
				SetConsoleTextAttribute(h,10);
				printf("+%d", autoreparos);
				SetConsoleTextAttribute(h,15);
				printf(")\n");
				Sleep(1200);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 100:
			if(mana >= 2){
				autoreparos = autoreparos + 7;
				mana = mana - 2;
				descartar(cj);
				cartausada();
				
				printf("\tCURA ATUAL: (");
				SetConsoleTextAttribute(h,10);
				printf("+%d", autoreparos);
				SetConsoleTextAttribute(h,15);
				printf(")\n");
				Sleep(1200);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 101:
			if(mana >= 1){
				
				mana = mana - 1;
				
				mana = mana * 2;
				
				gastar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 102:
			mana = mana * 2;
			gastar(cj);
			cartausada();
		break;
		
		case 103:
			dano(3);
			inim[opcao].vul = 1.5;
			inim[opcao].Dvul = inim[opcao].Dvul + 1;
			descartar(cj);
			cartausada();
		break;
		
		case 104:
			dano(4);
			inim[opcao].vul = 1.5;
			inim[opcao].Dvul = inim[opcao].Dvul + 2;
			descartar(cj);
			cartausada();
		break;
		
		case 105:
			if(mana >= 1){
				
				manap = manap + 2;
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
				
				printf("\tMANA EXTRA PRÓXIMO TURNO: (+%d)\n", manap);
				Sleep(1200);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 106:
			if(mana >= 1){
				
				manap = manap + 3;
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
				
				printf("\tMANA EXTRA PRÓXIMO TURNO: (+%d)\n", manap);
				Sleep(1200);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 107:
			if(mana >= 2){
				
				dano(8);
				
				manap = manap + 1;
				
				mana = mana - 2;
				descartar(cj);
				cartausada();
				
				printf("\tMANA EXTRA PRÓXIMO TURNO: (+%d)\n", manap);
				Sleep(1200);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 108:
			if(mana >= 2){
				
				dano(11);
				
				manap = manap + 1;
				
				mana = mana - 2;
				descartar(cj);
				cartausada();
				
				printf("\tMANA EXTRA PRÓXIMO TURNO: (+%d)\n", manap);
				Sleep(1200);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 109:
			if(mana >= 1 && laminf == 0){
				
				laminf = 1;
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else if(mana >= 1 && laminf > 0){
				descartar(cj);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 110:
			if(mana >= 1 && laminf <= 1){
				
				laminf = 2;
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else if(mana >= 1 && laminf > 0){
				descartar(cj);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 111:
			if(mana >= 3){
				
				bonusestoque = bonusestoque + 3;
				
				mana = mana - 3;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 112:
			if(mana >= 3){
				
				bonusestoque = bonusestoque + 5;
				
				mana = mana - 3;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 113:
			if(mana >= 3){
				
				rastro = rastro + 3;
				
				printf("\tBônus do rastro: (+%d)\n", rastro);
				Sleep(1200);
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 114:
			if(mana >= 3){
				
				escudo = escudo + 5;
				rastro = rastro + 1;
				
				printf("\tRecebeu");
				SetConsoleTextAttribute(h,14);
				printf(" 3 ");
				SetConsoleTextAttribute(h,15);
				printf("de Escudo\n");		
				Sleep(1200);
				printf("\tBônus do rastro: (+%d)\n", rastro);
				Sleep(1200);
				
				mana = mana - 3;
				descartar(cj);
				cartausada();
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 115:
			if(mana >= 2 && envenenar == 0){
				
				envenenar = 1;
				
				mana = mana - 2;
				descartar(cj);
				cartausada();
			} else if(mana >= 2 && envenenar == 1) {
				descartar(cj);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 116:
			if(mana >= 1 && envenenar == 0){
				
				envenenar = 1;
				
				mana = mana - 1;
				descartar(cj);
				cartausada();
			} else if(mana >= 1 && envenenar == 1) {
				descartar(cj);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 117:
			if(mana >= 4 && barricada == 0){
				
				barricada = 1;
				
				mana = mana - 4;
				descartar(cj);
				cartausada();
			} else if(mana >= 4 && barricada == 1) {
				descartar(cj);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 118:
			if(mana >= 3 && barricada == 0){
				
				barricada = 1;
				
				mana = mana - 3;
				descartar(cj);
				cartausada();
			} else if(mana >= 3 && barricada == 1) {
				descartar(cj);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 119:
			escudo = escudo + 4;
			mana = mana - 1;
			descartar(cj);
			cartausada();
			
			printf("\tRecebeu");
			SetConsoleTextAttribute(h,14);
			printf(" 4 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");		
			Sleep(1000);
		break;
		
		case 120:
			escudo = escudo + 7;
			mana = mana - 1;
			descartar(cj);
			cartausada();
			
			printf("\tRecebeu");
			SetConsoleTextAttribute(h,14);
			printf(" 7 ");
			SetConsoleTextAttribute(h,15);
			printf("de Escudo\n");		
			Sleep(1000);
		break;
		
		case 121:
			if(mana >= 3 && milcorte == 0){
				
				cartausada();
				
				milcorte = 1;
				
				mana = mana - 3;
				descartar(cj);
			} else if(mana >= 3 && milcorte > 0){
				descartar(cj);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 122:
			if(mana >= 3 && milcorte <= 1){
				
				cartausada();
				
				milcorte = 2;
				
				mana = mana - 3;
				descartar(cj);
			} else if(mana >= 3 && milcorte == 2){
				descartar(cj);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 123:
			if(mana >= 1){
				mana = mana - 1;
				descartar(cj);
				
				if(Mtopo < 6){
					for(i3=Mtopo;i3<6;i3++) {
						pegar(1);
					}	
				}
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 124:
			if(mana >= 1){
				mana = mana - 1;
				descartar(cj);
				
				if(Mtopo < 7){
					for(i3=Mtopo;i3<7;i3++) {
						pegar(1);
					}	
				}
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 125:
			if(mana >= 1){
				
				dano(7);
				
				if(inim[opcao].veneno > 0) {
					dano(7);
				}
				
				mana = mana - 1;
				descartar(cj);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 126:
			if(mana >= 1){
				
				dano(10);
				
				if(inim[opcao].veneno > 0) {
					dano(10);
				}
				
				mana = mana - 1;
				descartar(cj);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;
		
		case 999:
				
			dano(999);
			escudo = escudo + 100;
			descartar(cj);
		
		break;
		
	}
}

/*
		case 0:
			if(mana >= 1){
				
				mana = mana - 1;
				descartar(cj);
			} else {
				printf("\t!!! NÃO HÁ MANA SUFICIENTE !!!\n");
				Sleep(1200);
			}
		break;


	NOTA:
		Se adicionar alguma maldição, lembrar de adicionar o ID da carta aos 
		filtros da LOJA, GANHO DE CARTAS, UPGRADE DE CARTA, REMOÇÃO DE CARTA


*/

void cartausada() {
	escudo = escudo + rastro;
	
	if(milcorte > 0){
			
		for(opcao=0;opcao<5;opcao++){
			
			if(inim[opcao].vida > 0 && inim[opcao].vidamax > 0 && inim[opcao].tipo > 0){
				j2 = inim[opcao].escudo;
	
				inim[opcao].escudo = inim[opcao].escudo - milcorte;
				milcorte = milcorte - j2;
		
				if(inim[opcao].escudo < 0){
					inim[opcao].escudo = 0;
				}
		
				j2 = inim[opcao].vida;
		
				if(milcorte > 0){
					inim[opcao].vida = inim[opcao].vida - milcorte;
					j2 = j2 - inim[opcao].vida;
			
					printf("\tDANO:");
					SetConsoleTextAttribute(h,12);
					printf(" %.0f ",j2);
					SetConsoleTextAttribute(h,15);
					printf("CAUSADO EM %s\n", inim[opcao].nome);
			
				} else {
					printf("\tESCUDO PROTEJEU %s\n", inim[opcao].nome);
				}
		
				for(i2=0;i2<5;i2++){
					if(inim[i2].vida < 0 && inim[i2].tipo > 0) {
						inim[i2].vida = 0;
						inim[i2].tipo = 0;
						kills++;
					}
				}
				Sleep(1000);
				checkvit();
			}
		}
	}
}




