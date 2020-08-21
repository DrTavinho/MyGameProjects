


void anim() {
	
system("cls");

if (randoo > 0) {
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t    ANDAR: %d\n", andar);
	printf("\t\t\t\t\t\t\t\t\t\t\t\t    %s\n", name);
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t      +%d\n", randoo);
} else {
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t    ANDAR: %d\n", andar);
	printf("\t\t\t\t\t\t\t\t\t\t\t\t    %s\n\n", name);
}

printf("\t\t\t\t\t\t\t\t\t\t\t\t    VIDA: %d/%d  OURO: %d  NIVEL: %d  XP: %d\n", vida, vidamax, ouro, lvl, xp);
if (chave > 0) {
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t  CHAVES: %d\n",chave);
		}

	printf(".............................................................");
	printf(".............................................................");
	printf("..@                             .............................");
	printf("..@                             .............................");
	printf("..@                             ........@@@@@@@@@@@@@@.......");
	printf("..@                             ..@((((((((((((((((((((((((@.");
	printf("...@@@@@@@@@@@@@@@@@@@@@@@@@@@@.....,@@@@@((((((((((@@@@@,...");
	printf(".............................................................");
	printf(".............................................................");
	printf(".............................................................");
	printf(".............................................................");
	printf("..............................                             @.");
	printf("..............................                             @.");
	printf(".......,@@@@@@@@@@@@@@@@......                             @.");
	printf("..@((((((((((((((((((((((((@..                             @.");
	printf("....@@@@@((((((((((((@@@@@,....@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.");
	printf(".............................................................");
	printf("/===========================================================\\");
	printf("|...........................................................|");
	printf("|...........................................................|");
	printf("\\===========================================================/");
    
    
    printf("\n");
}


void build(){
	
	lin = 10;
	for(lin=10; lin <= 180; lin+10) {
		col = 30;
		for(col=30; col <=150; col+20) {
			if (mapa[lin][col] == '.') {
				
				rando = (rand() % 100);
				if (rando >= 0 && rando <=9){
					sala0();
				} else if (rando >= 10 && rando <=19){
					sala1();
				} else if (rando >= 20 && rando <=29){
					sala2();
				} else if (rando >= 30 && rando <=39){
					sala4();
				} else if (rando >= 40 && rando <=49){
					sala5();
				} else if (rando >= 50 && rando <=51){
					salaT();
				} else if (rando >= 52 && rando <=54){
					salaloja();
				} else {
					sala3();
				}
			}
			col = col+20;
			
			if (assistir == 1) {
			x = lin;
			y = col;
			printmapa();
			}
			
		}
		lin = lin+10;
	}
	
}
	
void sala0(){
	
/*

####################..
#..................#..
#..................#..
......................
......................
......................
......................
#..................#..
#..................#..
####################..
......................

*/
	rando = (rand() % 4);
	if (rando > 0){
		mapa[lin][col+7] = '#';
		mapa[lin][col+8] = '#';
		mapa[lin][col+9] = '#';
		mapa[lin][col+10] = '#';
		mapa[lin][col+11] = '#';
		mapa[lin][col+12] = '#';
	}
	
	rando = (rand() % 4);
	if (rando > 0){
		mapa[lin+9][col+7] = '#';
		mapa[lin+9][col+8] = '#';
		mapa[lin+9][col+9] = '#';
		mapa[lin+9][col+10] = '#';
		mapa[lin+9][col+11] = '#';
		mapa[lin+9][col+12] = '#';
	}
	
	//superior esquerdo
	mapa[lin][col] = '#';
	mapa[lin][col+1] = '#';
	mapa[lin][col+2] = '#';
	mapa[lin][col+3] = '#';
	mapa[lin][col+4] = '#';
	mapa[lin][col+5] = '#';
	mapa[lin][col+6] = '#';
	mapa[lin+1][col] = '#';
	mapa[lin+2][col] = '#';
	
	//inferior esquerdo
	mapa[lin+7][col] = '#';
	mapa[lin+8][col] = '#';
	mapa[lin+9][col] = '#';
	mapa[lin+9][col+1] = '#';
	mapa[lin+9][col+2] = '#';
	mapa[lin+9][col+3] = '#';
	mapa[lin+9][col+4] = '#';
	mapa[lin+9][col+5] = '#';
	mapa[lin+9][col+6] = '#';
	
	//superior direito
	mapa[lin][col+19] = '#';
	mapa[lin+1][col+19] = '#';
	mapa[lin+2][col+19] = '#';
	mapa[lin][col+18] = '#';
	mapa[lin][col+17] = '#';
	mapa[lin][col+16] = '#';
	mapa[lin][col+15] = '#';
	mapa[lin][col+14] = '#';
	mapa[lin][col+13] = '#';
	
	//inferior direito
	mapa[lin+7][col+19] = '#';
	mapa[lin+8][col+19] = '#';
	mapa[lin+9][col+19] = '#';
	mapa[lin+9][col+18] = '#';
	mapa[lin+9][col+17] = '#';
	mapa[lin+9][col+16] = '#';
	mapa[lin+9][col+15] = '#';
	mapa[lin+9][col+14] = '#';
	mapa[lin+9][col+13] = '#';
	
}
	
void sala1(){
	
/*

####################..
#..................#..
#..................#..
......................
......................
......................
......................
#..................#..
#..................#..
#######......#######..
......................

*/

	rando = (rand() % 6);
	if (rando > 0){
		mapa[lin][col+7] = '#';
		mapa[lin][col+8] = '#';
		mapa[lin][col+9] = '#';
		mapa[lin][col+10] = '#';
		mapa[lin][col+11] = '#';
		mapa[lin][col+12] = '#';
	}
	//superior esquerdo
	mapa[lin][col] = '#';
	mapa[lin][col+1] = '#';
	mapa[lin][col+2] = '#';
	mapa[lin][col+3] = '#';
	mapa[lin][col+4] = '#';
	mapa[lin][col+5] = '#';
	mapa[lin][col+6] = '#';
	mapa[lin+1][col] = '#';
	mapa[lin+2][col] = '#';
	
	//inferior esquerdo
	mapa[lin+7][col] = '#';
	mapa[lin+8][col] = '#';
	mapa[lin+9][col] = '#';
	mapa[lin+9][col+1] = '#';
	mapa[lin+9][col+2] = '#';
	mapa[lin+9][col+3] = '#';
	mapa[lin+9][col+4] = '#';
	mapa[lin+9][col+5] = '#';
	mapa[lin+9][col+6] = '#';
	
	//superior direito
	mapa[lin][col+19] = '#';
	mapa[lin+1][col+19] = '#';
	mapa[lin+2][col+19] = '#';
	mapa[lin][col+18] = '#';
	mapa[lin][col+17] = '#';
	mapa[lin][col+16] = '#';
	mapa[lin][col+15] = '#';
	mapa[lin][col+14] = '#';
	mapa[lin][col+13] = '#';
	
	//inferior direito
	mapa[lin+7][col+19] = '#';
	mapa[lin+8][col+19] = '#';
	mapa[lin+9][col+19] = '#';
	mapa[lin+9][col+18] = '#';
	mapa[lin+9][col+17] = '#';
	mapa[lin+9][col+16] = '#';
	mapa[lin+9][col+15] = '#';
	mapa[lin+9][col+14] = '#';
	mapa[lin+9][col+13] = '#';
	
}

void sala2(){
	
/*

#######......#######..
#..................#..
#..................#..
......................
......................
......................
......................
#..................#..
#..................#..
####################..
......................

*/
	rando = (rand() % 6);
	if (rando > 0){
		mapa[lin+9][col+7] = '#';
		mapa[lin+9][col+8] = '#';
		mapa[lin+9][col+9] = '#';
		mapa[lin+9][col+10] = '#';
		mapa[lin+9][col+11] = '#';
		mapa[lin+9][col+12] = '#';
	}
	
	//superior esquerdo
	mapa[lin][col] = '#';
	mapa[lin][col+1] = '#';
	mapa[lin][col+2] = '#';
	mapa[lin][col+3] = '#';
	mapa[lin][col+4] = '#';
	mapa[lin][col+5] = '#';
	mapa[lin][col+6] = '#';
	mapa[lin+1][col] = '#';
	mapa[lin+2][col] = '#';
	
	//inferior esquerdo
	mapa[lin+7][col] = '#';
	mapa[lin+8][col] = '#';
	mapa[lin+9][col] = '#';
	mapa[lin+9][col+1] = '#';
	mapa[lin+9][col+2] = '#';
	mapa[lin+9][col+3] = '#';
	mapa[lin+9][col+4] = '#';
	mapa[lin+9][col+5] = '#';
	mapa[lin+9][col+6] = '#';
	
	//superior direito
	mapa[lin][col+19] = '#';
	mapa[lin+1][col+19] = '#';
	mapa[lin+2][col+19] = '#';
	mapa[lin][col+18] = '#';
	mapa[lin][col+17] = '#';
	mapa[lin][col+16] = '#';
	mapa[lin][col+15] = '#';
	mapa[lin][col+14] = '#';
	mapa[lin][col+13] = '#';
	
	//inferior direito
	mapa[lin+7][col+19] = '#';
	mapa[lin+8][col+19] = '#';
	mapa[lin+9][col+19] = '#';
	mapa[lin+9][col+18] = '#';
	mapa[lin+9][col+17] = '#';
	mapa[lin+9][col+16] = '#';
	mapa[lin+9][col+15] = '#';
	mapa[lin+9][col+14] = '#';
	mapa[lin+9][col+13] = '#';
	
}

void sala3(){
	
/*

#######......#######..
#..................#..
#..................#..
......................
......................
......................
......................
#..................#..
#..................#..
#######......#######..
......................

*/
	
	//superior esquerdo
	mapa[lin][col] = '#';
	mapa[lin][col+1] = '#';
	mapa[lin][col+2] = '#';
	mapa[lin][col+3] = '#';
	mapa[lin][col+4] = '#';
	mapa[lin][col+5] = '#';
	mapa[lin][col+6] = '#';
	mapa[lin+1][col] = '#';
	mapa[lin+2][col] = '#';
	
	//inferior esquerdo
	mapa[lin+7][col] = '#';
	mapa[lin+8][col] = '#';
	mapa[lin+9][col] = '#';
	mapa[lin+9][col+1] = '#';
	mapa[lin+9][col+2] = '#';
	mapa[lin+9][col+3] = '#';
	mapa[lin+9][col+4] = '#';
	mapa[lin+9][col+5] = '#';
	mapa[lin+9][col+6] = '#';
	
	//superior direito
	mapa[lin][col+19] = '#';
	mapa[lin+1][col+19] = '#';
	mapa[lin+2][col+19] = '#';
	mapa[lin][col+18] = '#';
	mapa[lin][col+17] = '#';
	mapa[lin][col+16] = '#';
	mapa[lin][col+15] = '#';
	mapa[lin][col+14] = '#';
	mapa[lin][col+13] = '#';
	
	//inferior direito
	mapa[lin+7][col+19] = '#';
	mapa[lin+8][col+19] = '#';
	mapa[lin+9][col+19] = '#';
	mapa[lin+9][col+18] = '#';
	mapa[lin+9][col+17] = '#';
	mapa[lin+9][col+16] = '#';
	mapa[lin+9][col+15] = '#';
	mapa[lin+9][col+14] = '#';
	mapa[lin+9][col+13] = '#';
	
}

void sala4(){
/*

#######......#######..
#..................#..
#..................#..
#.....................
#.....................
#.....................
#.....................
#..................#..
#..................#..
#######......#######..
......................

*/
	rando = (rand() % 6);
	if (rando > 0){
		mapa[lin+3][col] = '#';
		mapa[lin+4][col] = '#';
		mapa[lin+5][col] = '#';
		mapa[lin+6][col] = '#';
	}
	//superior esquerdo
	mapa[lin][col] = '#';
	mapa[lin][col+1] = '#';
	mapa[lin][col+2] = '#';
	mapa[lin][col+3] = '#';
	mapa[lin][col+4] = '#';
	mapa[lin][col+5] = '#';
	mapa[lin][col+6] = '#';
	mapa[lin+1][col] = '#';
	mapa[lin+2][col] = '#';
	
	//inferior esquerdo
	mapa[lin+7][col] = '#';
	mapa[lin+8][col] = '#';
	mapa[lin+9][col] = '#';
	mapa[lin+9][col+1] = '#';
	mapa[lin+9][col+2] = '#';
	mapa[lin+9][col+3] = '#';
	mapa[lin+9][col+4] = '#';
	mapa[lin+9][col+5] = '#';
	mapa[lin+9][col+6] = '#';
	
	//superior direito
	mapa[lin][col+19] = '#';
	mapa[lin+1][col+19] = '#';
	mapa[lin+2][col+19] = '#';
	mapa[lin][col+18] = '#';
	mapa[lin][col+17] = '#';
	mapa[lin][col+16] = '#';
	mapa[lin][col+15] = '#';
	mapa[lin][col+14] = '#';
	mapa[lin][col+13] = '#';
	
	//inferior direito
	mapa[lin+7][col+19] = '#';
	mapa[lin+8][col+19] = '#';
	mapa[lin+9][col+19] = '#';
	mapa[lin+9][col+18] = '#';
	mapa[lin+9][col+17] = '#';
	mapa[lin+9][col+16] = '#';
	mapa[lin+9][col+15] = '#';
	mapa[lin+9][col+14] = '#';
	mapa[lin+9][col+13] = '#';
	
}

void sala5(){
/*

#######......#######..
#..................#..
#..................#..
...................#..
...................#..
...................#..
...................#..
#..................#..
#..................#..
#######......#######..
......................

*/
	rando = (rand() % 6);
	if (rando > 0){
		mapa[lin+3][col+19] = '#';
		mapa[lin+4][col+19] = '#';
		mapa[lin+5][col+19] = '#';
		mapa[lin+6][col+19] = '#';
	}
	
	//superior esquerdo
	mapa[lin][col] = '#';
	mapa[lin][col+1] = '#';
	mapa[lin][col+2] = '#';
	mapa[lin][col+3] = '#';
	mapa[lin][col+4] = '#';
	mapa[lin][col+5] = '#';
	mapa[lin][col+6] = '#';
	mapa[lin+1][col] = '#';
	mapa[lin+2][col] = '#';
	
	//inferior esquerdo
	mapa[lin+7][col] = '#';
	mapa[lin+8][col] = '#';
	mapa[lin+9][col] = '#';
	mapa[lin+9][col+1] = '#';
	mapa[lin+9][col+2] = '#';
	mapa[lin+9][col+3] = '#';
	mapa[lin+9][col+4] = '#';
	mapa[lin+9][col+5] = '#';
	mapa[lin+9][col+6] = '#';
	
	//superior direito
	mapa[lin][col+19] = '#';
	mapa[lin+1][col+19] = '#';
	mapa[lin+2][col+19] = '#';
	mapa[lin][col+18] = '#';
	mapa[lin][col+17] = '#';
	mapa[lin][col+16] = '#';
	mapa[lin][col+15] = '#';
	mapa[lin][col+14] = '#';
	mapa[lin][col+13] = '#';
	
	//inferior direito
	mapa[lin+7][col+19] = '#';
	mapa[lin+8][col+19] = '#';
	mapa[lin+9][col+19] = '#';
	mapa[lin+9][col+18] = '#';
	mapa[lin+9][col+17] = '#';
	mapa[lin+9][col+16] = '#';
	mapa[lin+9][col+15] = '#';
	mapa[lin+9][col+14] = '#';
	mapa[lin+9][col+13] = '#';
	
}

void salaT(){
	
/*

####################..
#..................#..
#.....O......Q.....#..
|...............I..|..
|........B.........|..
|....p....B........|..
|.............p....|..
#..0....I..........#..
#..................#..
####################..
......................

*/	
	//itens
	mapa[lin+4][col+9] = 'B';
	mapa[lin+5][col+10] = 'B';
	mapa[lin+2][col+7] = 'O';
	mapa[lin+2][col+13] = 'Q';
	mapa[lin+5][col+5] = 'p';
	mapa[lin+6][col+14] = 'p';
	mapa[lin+7][col+3] = '0';
	mapa[lin+3][col+16] = 'I';
			x = lin+3;
			y = col+16;
			rando = (rand() % 2);
			
			item[itcont].poslin = x;
			item[itcont].poscol = y;
			
			if(rando == 0){
				rando = (rand() % 4);
				item[itcont].equip1[0] = rando;
				rando = (rand() % 4);
				item[itcont].equip1[1] = rando;
				
				item[itcont].equip2[0] = -1;
				item[itcont].equip2[1] = -1;
				
			} else {  //rando == 1
				rando = (rand() % 4);
				item[itcont].equip2[0] = rando;
				rando = (rand() % 4);
				item[itcont].equip2[1] = rando;
				
				item[itcont].equip1[0] = -1;
				item[itcont].equip1[1] = -1;
			}
			itcont++;
			
			if (assistir == 1) {
				x = lin+3;
				y = col+16;
				printmapa();
			}
	
	
	mapa[lin+7][col+8] = 'I';
			x = lin+7;
			y = col+8;
			rando = (rand() % 2);
			
			item[itcont].poslin = x;
			item[itcont].poscol = y;
			
			if(rando == 0){
				rando = (rand() % 4);
				item[itcont].equip1[0] = rando;
				rando = (rand() % 4);
				item[itcont].equip1[1] = rando;
				
				item[itcont].equip2[0] = -1;
				item[itcont].equip2[1] = -1;
				
			} else {  //rando == 1
				rando = (rand() % 4);
				item[itcont].equip2[0] = rando;
				rando = (rand() % 4);
				item[itcont].equip2[1] = rando;
				
				item[itcont].equip1[0] = -1;
				item[itcont].equip1[1] = -1;
			}
			itcont++;
			
			if (assistir == 1) {
				x = lin+7;
				y = col+8;
				printmapa();
			}

	//portões
	mapa[lin+3][col] = '|';
	mapa[lin+4][col] = '|';
	mapa[lin+5][col] = '|';
	mapa[lin+6][col] = '|';
	mapa[lin+3][col+19] = '|';
	mapa[lin+4][col+19] = '|';
	mapa[lin+5][col+19] = '|';
	mapa[lin+6][col+19] = '|';

	//preencher paredes
	mapa[lin][col+7] = '$';
	mapa[lin][col+8] = '$';
	mapa[lin][col+9] = '$';
	mapa[lin][col+10] = '$';
	mapa[lin][col+11] = '$';
	mapa[lin][col+12] = '$';
	mapa[lin+9][col+7] = '$';
	mapa[lin+9][col+8] = '$';
	mapa[lin+9][col+9] = '$';
	mapa[lin+9][col+10] = '$';	
	mapa[lin+9][col+11] = '$';
	mapa[lin+9][col+12] = '$';

	
	//superior esquerdo
	mapa[lin][col] = '$';
	mapa[lin][col+1] = '$';
	mapa[lin][col+2] = '$';
	mapa[lin][col+3] = '$';
	mapa[lin][col+4] = '$';
	mapa[lin][col+5] = '$';
	mapa[lin][col+6] = '$';
	mapa[lin+1][col] = '$';
	mapa[lin+2][col] = '$';
	
	//inferior esquerdo
	mapa[lin+7][col] = '$';
	mapa[lin+8][col] = '$';
	mapa[lin+9][col] = '$';
	mapa[lin+9][col+1] = '$';
	mapa[lin+9][col+2] = '$';
	mapa[lin+9][col+3] = '$';
	mapa[lin+9][col+4] = '$';
	mapa[lin+9][col+5] = '$';
	mapa[lin+9][col+6] = '$';
	
	//superior direito
	mapa[lin][col+19] = '$';
	mapa[lin+1][col+19] = '$';
	mapa[lin+2][col+19] = '$';
	mapa[lin][col+18] = '$';
	mapa[lin][col+17] = '$';
	mapa[lin][col+16] = '$';
	mapa[lin][col+15] = '$';
	mapa[lin][col+14] = '$';
	mapa[lin][col+13] = '$';
	
	//inferior direito
	mapa[lin+7][col+19] = '$';
	mapa[lin+8][col+19] = '$';
	mapa[lin+9][col+19] = '$';
	mapa[lin+9][col+18] = '$';
	mapa[lin+9][col+17] = '$';
	mapa[lin+9][col+16] = '$';
	mapa[lin+9][col+15] = '$';
	mapa[lin+9][col+14] = '$';
	mapa[lin+9][col+13] = '$';
	
}

void salaloja(){
	
/*

#######......#######..
#..................#..
#..................#..
......$$$$$$$$........
......]$L0JA$[........
......]$L0JA$[........
......$$$$$$$$........
#..................#..
#..................#..
#######......#######..
......................

*/

	for(i=6;i<=13;i++){
		mapa[lin+3][col+i] = '$';
	}
	
	for(i=6;i<=13;i++){
		mapa[lin+6][col+i] = '$';
	}
	mapa[lin+4][col+7] = '$';
	mapa[lin+5][col+7] = '$';
	mapa[lin+4][col+12] = '$';
	mapa[lin+5][col+12] = '$';
	
	mapa[lin+4][col+6] = ']';
	mapa[lin+5][col+6] = ']';
	mapa[lin+4][col+13] = '[';
	mapa[lin+5][col+13] = '[';
	
	mapa[lin+4][col+8] = 'L';
	mapa[lin+4][col+9] = '0';
	mapa[lin+4][col+10] = 'J';
	mapa[lin+4][col+11] = 'A';
	mapa[lin+5][col+8] = 'L';
	mapa[lin+5][col+9] = '0';
	mapa[lin+5][col+10] = 'J';
	mapa[lin+5][col+11] = 'A';
	
	//superior esquerdo
	mapa[lin][col] = '#';
	mapa[lin][col+1] = '#';
	mapa[lin][col+2] = '#';
	mapa[lin][col+3] = '#';
	mapa[lin][col+4] = '#';
	mapa[lin][col+5] = '#';
	mapa[lin][col+6] = '#';
	mapa[lin+1][col] = '#';
	mapa[lin+2][col] = '#';
	
	//inferior esquerdo
	mapa[lin+7][col] = '#';
	mapa[lin+8][col] = '#';
	mapa[lin+9][col] = '#';
	mapa[lin+9][col+1] = '#';
	mapa[lin+9][col+2] = '#';
	mapa[lin+9][col+3] = '#';
	mapa[lin+9][col+4] = '#';
	mapa[lin+9][col+5] = '#';
	mapa[lin+9][col+6] = '#';
	
	//superior direito
	mapa[lin][col+19] = '#';
	mapa[lin+1][col+19] = '#';
	mapa[lin+2][col+19] = '#';
	mapa[lin][col+18] = '#';
	mapa[lin][col+17] = '#';
	mapa[lin][col+16] = '#';
	mapa[lin][col+15] = '#';
	mapa[lin][col+14] = '#';
	mapa[lin][col+13] = '#';
	
	//inferior direito
	mapa[lin+7][col+19] = '#';
	mapa[lin+8][col+19] = '#';
	mapa[lin+9][col+19] = '#';
	mapa[lin+9][col+18] = '#';
	mapa[lin+9][col+17] = '#';
	mapa[lin+9][col+16] = '#';
	mapa[lin+9][col+15] = '#';
	mapa[lin+9][col+14] = '#';
	mapa[lin+9][col+13] = '#';
	
}





