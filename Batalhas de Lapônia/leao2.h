
int menu () {
	setlocale(LC_ALL, "Portuguese");

	loading ();
	system("cls");
	lapagod ();
	system("pause");
	system("cls");
		FILE *file;
	file = fopen("verificacao.txt", "r + w");

	int verificacao, verificacao1, verificacao2;
	
	fscanf(file, "%d", &verificacao);
	
	if (verificacao == 1){
	printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf ("X                         O                      X\n");
	printf ("X       O      o                  o         o    X\n");
	printf ("X                 B A T A L H A        O         X\n");
	printf ("X   o            L A P O N I C A                 X\n");
	printf ("X          O                                     X\n");
	printf ("X            Recomendamos a leitura do      O    X\n");
	printf ("X             tutorial e a mudança do            X\n");
	printf ("X   O           nomes dos jogadores      O       X\n");
	printf ("X               antes do inicio da               X\n");
	printf ("X           o        partida!                    X\n");
	printf ("X                                          O     X\n");
	printf ("X     O                                o         X\n");
	printf ("X                        o                       X\n");
	printf ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
		fprintf(file,"2");
		fclose(file);
				system("pause");
				TesteMenu ();
	}
	else{
		TesteMenu ();
	}


	return 0;
}
