#include <stdio.h>
  #include <string.h>
  #include <math.h>
  #include <conio.h>
  #include <time.h>

void menu() {
    
	int jogo;
	///int jogo1, jogo2, jogo3;
	int sair;
	
	printf("Bem-vindo ao multi-jogos.\n\n");
	printf("Aqui voce encontrara 3 minijogos para sua diversao\n\n");
	printf("agora chega de enrolacao, escolha algum dos jogos: \n\n 1-perguntas e respostas\n 2-adivinhe o numero\n 3-olho de cobra\n 4-sair\n");
	scanf("%d", &jogo);
	
	switch(jogo) 
	{
		case 1:
		 jogo1();
		printf("jogo1");
		break;
	
		case 2:
		 jogo2();	
		printf("jogo2");
		break;
	    
	    case 3:
	     jogo3();	
		printf("jogo3");
		break;
		
		case 4:
		printf("sair");
		break;
		
		default:
		printf("valor invalido");	
	}
}
void jogo1(){
  	
 
  int sair;
  int pergunta1, pergunta2, pergunta3;
  int resposta1, resposta2, resposta3;
 
  printf("Vamos comecar com o jogo1: \n");
  printf("A pegunta em questao eh: \n");
  printf("quem descobriu o brasil? \n\n");
  printf("1 = pedro alvares cabral \n");
  printf("2 = isaac newton \n");
  printf("3 = cristovao colombo \n\n");
  scanf("%d", &resposta1);
 
 
 
  switch(resposta1)
{
	case 1:
	printf("1 = pedro alvares cabral \n");
	printf("resposta correta!\n\n");
	break;

	case 2:
	printf("2 = isaac newton \n");
	printf("resposta incorreta!\n");
	printf("a resposta correta eh pedro alvares cabral!\n\n");
	break;
   
   case 3:
	printf("3 = cristovao colombo \n");
	printf("resposta incorreta!\n");
	printf("a resposta correta eh pedro alvares cabral!\n\n");
	break;
  	default:
	printf("resposta invalido");
  }

 
  printf("A pegunta em questao eh: \n");
  printf("qual foi o maior cientista do mundo, em relacao as suas descobertas? \n\n");
  printf("1 = Isaac Newton \n");
  printf("2 = Albert Einstein \n");
  printf("3 = Galileo Galilei \n\n");
  scanf("%d", &resposta2);
 
 
 
  switch(resposta2)
{
	case 1:
	printf("isaac newton \n");
	printf("resposta incorreta!\n");
	printf("a resposta correta eh Galileo Galilei\n !");
	break;

	case 2:
	printf(" Albert Einstein\n");
	printf("resposta incorreta!\n");
	printf("a resposta correta eh Galileo Galilei \n !");
	break;
   
   case 3:
	printf(" Galileo Galilei \n");
	printf("resposta correta!\n");
	break;
  	default:
	printf("resposta invalido");
  }
 
 
   
   
  printf("A pegunta em questao eh: \n");
  printf("A teoria da relatividade geral foi desenvolvida por qual cientista ?\n\n");
  printf("1 = Albert Einstein\n");
  printf("2 = Stephen Hawking\n");
  printf("3 = Marie Curie\n\n");
  scanf("%d", &resposta3);
 
 
 
  switch(resposta3)
{
	case 1:
	printf("Albert Einstein \n");
	printf("resposta correta!\n");
	break;

	case 2:
	printf("Stephen Hawking \n");
	printf("resposta incorreta!\n");
	printf("a resposta correta eh Albert Einstein!\n");
	break;
   
   case 3:
	printf("Marie Curie \n");
	printf("resposta incorreta!\n");
	printf("a resposta correta eh Albert Einstein!\n");
	break;
  	default:
	printf("resposta invalido");
  }
     printf("voce deseja continuar jogando, ir para outro jogo ou sair\n\n 1-repetir\n 2-sair\n?");
  	scanf("%d\n", &sair);
    fflush(stdin);
    
  switch (sair)
  {
    case 1 :
    jogo1();	
   printf("repetir");
   break;
    
	case 2 :
	  menu();	
    printf("sair!");
    break;
    
	
	default:
	printf("Valor invalido");
}
}
  
void jogo2(){
	srand(time(NULL));
	
  	int escolhaJogador;
  	int X1, k;
    int sair;
  	X1 = rand() % 1000 + 1;
	 
	int numero;
	for(numero = 1; numero <= 5; numero++){
		printf("digite um numero entre o e 1000 para tentar adivinhar o numero que o computador esta pensando\n");
		scanf("%f", &escolhaJogador);
  		fflush(stdin);
	
		if(escolhaJogador > X1){
			printf("seu numero passou!\n");
		}

		else if(escolhaJogador == X1){
			printf("voce acertou!\n");
		}
		
		else if (escolhaJogador < X1)
		{
			printf("seu numero ainda esta abaixo do valor\n");
		}	
	}
	printf("%d \n", X1);
	
	printf("voce deseja continuar jogando, ir para outro jogo ou sair\n\n 1-repetir\n 2-sair\n?");
  	scanf("%d\n", &sair);
    fflush(stdin);
	switch (sair)
  {
    case 1 :
    jogo1();	
   printf("repetir");
   break;
    
	case 2 :
	  menu();	
    printf("sair!");
    break;
    
	
	default:
	printf("Valor invalido");
}
}
void jogo3 (){
  	srand(time(NULL));
  	
  	int numero1, numero2;
  	float nome1;
  	float nome2;
  	int pontosT1 = 0, pontosT2 = 0;
  	int i, s, t, u, f;
  	int continuarjogando;
  	int pontosR1, pontosR2;
  	int sair;
  	printf("nesse jogo eh preciso de dois jogadores e O primeiro jogador que chegar em 50 pontos ganha!\n\n");
  	printf("agora coloque o nome do jogador 1:\n\n");
  	scanf("%f\n", &nome1);
  	fflush(stdin);
  	
	printf("agora colocque o nome do jogador 2:\n\n");
  	scanf("%f\n", &nome2);
  	fflush(stdin);
  	
  	printf("agora escolha o jogador que ira comecar\n\n 1 = jogador\n 2 = jogador\n");
  	scanf("%d", &i);
  	fflush(stdin);
  	
	switch (i)
  	{
  		
  	case 1 :
      printf("1 = jogador\n\n");
	  break;
		  
    case 2 :
	  printf("2 = jogador\n\n");
	  goto jogador2;
	  break;
	}

	jogador1:
  	jogador11:
    printf("agora o computador jogara dois dados e mostrara seus pontos\n");  	
  	
    numero1 = rand()%6 + 1;
    numero2 = rand()%6 + 1;
	pontosR1 = numero1 + numero2;
    
	printf("numero 1 = %d\t", numero1);
	printf("numero 2 = %d\n\n", numero2); 
	
	if(pontosR1 == 0){
	    pontosR1 = 0;
		goto jogador22;
}
	if(numero1 == 1 && numero2 == 1){
		pontosT1 = 0;
		pontosR1 = 0;
	}
	
	else if(numero1 == 1 || numero2 == 1) {
		pontosR1 = 0;
		pontosT1 != 0;
	}
	
	else pontosT1 = pontosT1 + numero1 + numero2;
     
     
	printf("a sua pontuacao total eh %d\n", pontosT1); 
	printf("a sua pontuacao da rodada %d\n", pontosR1);
	
  //jogador 1//
  printf("voce quer continuar seu turno ou encerrar-lo ?\n");
  printf("1 = continuar jogando\n\n2 = encerrar turno\n");
  scanf("%d", &continuarjogando);
  fflush(stdin);
  
  	if(continuarjogando == 1)
  		goto jogador1;
	else
		printf("Encerrar turno\n");
	    
	    
  //jogador 2//
    jogador2:
    jogador22:
	printf("agora eh a vez do outro jogador .\n");
    printf(" o computador jogara dois dados e mostrara seus pontos\n");  	
  	
  	numero1 = rand()%6 + 1;
    numero2 = rand()%6 + 1;

    
	printf("numero 1 = %d\t", numero1);
	printf("numero 2 = %d\n\n", numero2); 
	
	pontosR2 = numero1 + numero2;
	
	if(numero1 == 1 && numero2 == 1){
		pontosT2 = 0;
		pontosR2 = 0;
}
else if(numero1 == 1 || numero2 == 1) {
		pontosR2 = 0;
		pontosT2 != 0;
}
else pontosT2 = pontosT2 + numero1 + numero2;
     
     
	printf("a sua pontuacao total eh %d\n", pontosT2); 
	printf("a sua pontuacao da rodada %d\n", pontosR2);
    
   
   
   
   
   printf("voce quer continuar seu turno ou encerrar-lo ?\n");
   printf("1 = continuar jogando\n\n2 = encerrar turno\n");
   scanf("%d", &continuarjogando);
   fflush(stdin);
   
   switch (continuarjogando)
  	{
  		
  		case 1 :
  			printf("continuar jogando\n");
  			printf("agora o computador jogara dois dados e mostrara seus pontos novamente \n"); 
  			numero1 = rand()%6 + 1;
    numero2 = rand()%6 + 1;

    
	printf("numero 1 = %d\t", numero1);
	printf("numero 2 = %d\n\n", numero2); 
	
	pontosR2 = numero1 + numero2;
	
	if(numero1 == 1 && numero2 == 1){
		pontosT2 = 0;
		pontosR2 = 0;
}
else if(numero1 == 1 || numero2 == 1) {
		pontosR2 = 0;
		pontosT2 != 0;
}
else pontosT2 = pontosT2 + numero1 + numero2;
     
     
	printf("a sua pontuacao total eh %d\n", pontosT2); 
	printf("a sua pontuacao da rodada %d\n", pontosR2);
			break;
  			
  		case 2 :
  			
  			printf("encerrar turno\n");
		  	break;
  		
  		default :
		    printf("opcao invalida");	
	  }
  
   if (continuarjogando == 1) {
	    	goto jogador2;
		}
		
	printf("voce deseja continuar jogando, ir para outro jogo ou sair\n\n 1-repetir\n 2-sair\n?");
  	scanf("%d\n", &sair);
    fflush(stdin);
	switch (sair)
  {
    case 1 :
    jogo1();	
   printf("repetir");
   break;
    
	case 2 :
	  menu();	
    printf("sair!");
    break;
    
	
	default:
	printf("Valor invalido");
}
		
  }

int main(){
	int jogo;
	///int jogo1, jogo2, jogo3;
	int sair;
	menu:
		
	printf("Bem-vindo ao multi-jogos.\n\n");
	printf("Aqui voce encontrara 3 minijogos para sua diversao\n\n");
	printf("agora chega de enrolacao, escolha algum dos jogos: \n\n 1-perguntas e respostas\n 2-adivinhe o numero\n 3-olho de cobra\n 4-sair\n");
	scanf("%d", &jogo);
	
	switch(jogo) 
	{
		case 1:
		 jogo1();
		printf("jogo1");
		break;
	
		case 2:
		 jogo2();	
		printf("jogo2");
		break;
	    
	    case 3:
	     jogo3();	
		printf("jogo3");
		break;
		
		case 4:
			
		printf("sair");
		break;
		
		default:
		printf("valor invalido");	
	}
	
	return 0;
}

