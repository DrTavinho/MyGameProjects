


int actions();
void matarb();

char A[102]; 

std::string nome1;
std::string nome2;

char opcao, opcao2, opcao3, opcao4, opcao5;
char nick1[500], nick2[500];
bool manter = true;
int j, acoes = 40;
void TesteMenu();
void trocanome();
FILE *nomes;
int winner;
int turno = 1;
int mapax = 12, mapay = 12, tempy, finx,t = 1, pergunta,tt,tempi,opc,rodada = 1,i, templow, dirresult; 
char tempx;
int player1skill = 0, player2skill = 0 ;
int movimt = 3, einicio;

int personagens[18][10];
//18 é o número total de personagens, 8 + 8 + 1 + 1, 10 é tanto faz
char mapa[30][30], fakemapa[30][30],a;
bool game = true,temp,ask = false; 

struct {
	int hp;
    int A;
    int X;
    int Y;
    int typedesc;
    int dano;
    int tipo;
    int time;
    int skill;
    int stun = 0;
}players[500];








void tempfinx(){
	templow = toupper(tempx);
	switch(templow){
		case 65:
			finx = 10;
			break;
	
		case 66:
			finx = 20;
			break;
		
		case 67:
			finx = 30;
			break;

		case 68:
			finx = 40;
			break;
	
		case 69:
			finx = 50;
			break;
	
		
		case 70:
			finx = 60;
			break;
	
		case 71:
			finx = 70;
			break;
	
		
		case 72:
			finx = 80;
			break;
		
		
		default:
		printf("Digito inválido. tente inserir uma das letras à esquerda para X e lembre de colocar espaços");
		scanf("%s", &tempx);
		tempfinx();
		
	}




}

bool direcionais(int dir){
	dirresult = 0;
	bool ret = false;
	switch(dir){
		case 87:
			if(A[players[pergunta].A - 10] == ' ' && ( (players[pergunta].A - 10) <= 40 || (players[pergunta].A - 10) >50 )){
			ret = true ;	
			dirresult = players[pergunta].A - 10;
			}	
		break;
		case 65:
			if(A[players[pergunta].A - 1] == ' ' and players[pergunta].Y != 1 ) {
				ret = true;
				dirresult = players[pergunta].A -1 ;
			}
			
		break;
		case 83:
			if(A[players[pergunta].A + 10] == ' ' && ((players[pergunta].A + 10) <= 50 || (players[pergunta].A + 10 )>60 )){
			ret = true;
			dirresult = players[pergunta].A + 10;
		}
			
		break;
		case 68:
		if(A[players[pergunta].A + 1] == ' ' and players[pergunta].Y != 0){
				ret = true;
				dirresult = players[pergunta].A + 1 ;
			}
			
		break;
		default:
			ret = false;}
			
		return ret ;
			
	}
	
	

bool check(int loc ,char b){
	if(A[loc] == 'b'){
		return true;
	}else{
	return false;
}	
}



void getcoord(int playID ){
	int tempvar = players[playID].A; 
	
	players[playID].Y = 0;
	if(tempvar%10 == 0){
	players[playID].Y = 0;
	players[playID].X = 63+tempvar/10;
	}else{
	while(1){
		if(tempvar % 10 == 0){
			break;
		}else{
			tempvar = tempvar - 1;
			players[playID].Y++;
		}
		}players[playID].X = 64+ tempvar/10   ;	}
		
		
	}


bool wall(int guess, int directi){
	
	if( (guess == 90 || guess == 80 || guess == 70 || guess == 60 || guess == 50 || guess == 40 || guess == 30 || guess == 20 || guess == 10)  && directi == 1 ){
		return true;
	}else if((guess == 81 || guess == 71 || guess == 61 || guess == 51 || guess == 41 || guess == 31 || guess == 21 || guess == 11)  && directi == 0){
		return true;
	}else{
		return false;
	}
	

}	
	
	
	
	


