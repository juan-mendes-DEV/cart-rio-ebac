#include <stdio.h>//biblioteca de comunica��o com o usuario
#include <stdlib.h>//biblioteca de aloca��o de espa�o em memoria
#include <locale.h>//biblioteca de linguagem
#include <string.h>//biblioteca de strings

int registro()//fun��o responsavel por cadastrar os usuarios no sistema

{	    //inicio cria��o de variaveis/strings-s�o conjunto de variaveis
		char arquivo[40];
		char cpf[40];
		char nome[50];
		char sobrenome[50];
		char cargo[40];
		//final da cria��o de variaveis
		
	printf("digite o cpf a ser cadastrado:");//coletando informa��o do usuario
		scanf("%s", cpf);//%s referese a strings
	
		strcpy(arquivo,cpf);//responsavel por copiar os valores das strings
	
		FILE *file;//cria o arquivo
		file = fopen(arquivo,"w");//cria o arquivo e abre para escrever
		fprintf(file,cpf);//salva o valor da variavel
		fclose(file);//fecha o arquivo
	
		file = fopen(arquivo,"a");//cria o arquivo e abre ele para ser atualizado
		fprintf(file,",");//salva o arquivo com o que esta entre aspas duplas
		fclose(file);//fecha o arquivo
	
	printf("digite o nome a ser cadastrado:");//coletando informa�oes do usuario
		scanf("%s",nome);//%s referese a strings
	
		file = fopen(arquivo,"a");//cria o arquivo e abre ele para ser atualizado
		fprintf(file, nome);//salva o valor da variavel
		fclose(file);//fecha o arquivo
	
		file = fopen(arquivo,"a");//cria o arquivo e abre ele para ser atualizado
		fprintf(file,",");//salva o valor da variavel
		fclose (file);//fecha o arquivo
	
	printf("digite o sobrenome a ser cadastrado,em caso de mais de um sobrenome ulilizar o - para separar os sobrenomes:");//coletando informa�oes do usuario
		scanf("%s", sobrenome);//%s referese a strings
	
		file = fopen(arquivo, "a");//cria o arquivo e abre ele para ser atualizado
		fprintf(file,sobrenome);//salva o valor da variavel
		fclose(file);//fecha o arquivo
	
		file = fopen(arquivo,"a");//cria o arquivo e abre ele para ser atualizado
		fprintf(file,",");//salva o valor da variavel
		fclose (file);//fecha o arquivo
	
	printf("digite o cargo a ser cadastrado:");//coletando informa�oes do usuario
		scanf("%s",cargo);//%s referese a strings
	
		file = fopen(arquivo, "a");//cria o arquivo e abre ele para ser atualizado
		fprintf(file,cargo);//salva o valor da variavel
		fclose(file);//fecha o arquivo
	
	
	//inicio do desenho--printf imprimi uma mensagem na tela  
	printf("        _______________________\n");
	printf("       |   ___________________   |\n");
	printf("       |  |                   |  |\n");
	printf("       |  | hello world!!...  |  |\n");
	printf("       |  |                   |  |\n");
	printf("       |  |                   |  |\n");
	printf("       |  |                   |  |\n");
	printf("       |  |cadastro realizado |  |\n");
	printf("       |  |com sucesso!       |  |\n");
	printf("       |  |pressione qualquer |  |\n");
	printf("       |  |tecla para         |  |\n");
	printf("       |  |continuar!         |  |\n");
	printf("       |  |___________________|  |\n");
	printf("  |----|_________________________|---\n");
	printf("  |          ____________________   |\n");
	printf("  ----------|q w e r t y u i o p|   |\n");
	printf("            |a s d f g h j k l �|   |\n");
	printf("            |z x c v b n m      |  (O)\n");
	printf("            --------------------     \n");
	printf("cadastro realizado com sucesso!\n\n");
	
		system("pause");//pausa a tela ate o usuario apertar alguma tecla
	
}//fim da variavel

int consulta()//inicio da variavel consulta do usuario
{
	
setlocale(LC_ALL, "portuguese");//tipo de linguagem
		//inicio das variaveis /strings
		char cpf[40];
		char conteudo[200];
		//fim das variaveis
	printf("digite o cpf a ser consultado:");//obtendo informa��o do usuario a ser consultado
		scanf("%s", cpf);//salvando o que foi escrito pelo usuario na variavel string assim como os outros
	
		FILE *file;//cria o arquivo
		file = fopen(cpf,"r");//cria o arquivo e abre para ler

	if (file==NULL)//se ==NULL se as informa�oes n�o foren certas n�o abre o arquivo
	{
	printf("n�o foi possivel abrir o arquivo, n�o localizado\n\n");//printf imprimi mensagem na tela
	}
	
	while(fgets(conteudo,200,file)!=NULL)//ja se forem imprime outra mensagem na tela confirmando e mostrando as informa�oes
{
	printf("essas s�o as informa��es do usuario:");
	printf("%s", conteudo);//informa�oes do usuario
	printf("\n\n");//pular linhas
}
		system("pause");//pausa a tela
	
		fclose(file);//fecha o arquivo
}//fim da variavel
	

int deletar()//variavel deletar informa�oes do usuario 
{		//inicio das variaveis
		char cpf[40];
		//fim das variaveis
	printf("digite o cpf a ser deletado:");//obtendo informa�oes para deletar usuario
		scanf("%s",cpf);//salvando informa�oes digitadas pelo usuario
	
		remove(cpf);//removendo usuario do sistema

		FILE* file;//criando arquivo
		file=fopen(cpf,"r");//abrindo arquivo para deletar
	
	if(file==NULL)//se deletar a mesma resposta se n�o deletar
{
	printf("o usuario n�o se encontra mais no sistema!!\n");//imprimindo resultado quanto para um quanto para outro
		system("pause");//pausa tela
}	
}//fim da variavel
int sobre()//inicio da variavel sobre , sobre a EBAC
{
	printf("EBAC\n\n");//pula linhas
	//imprimindo texto sobre um pouco da EBAC
	printf("A Escola Brit�nica de Artes Criativas & Tecnologia (EBAC) � uma institui��o de ensino inovadora que oferece cursos online\n"
	"al�m de programas presenciais e h�bridos de "
	"especializa��o e gradua��o, validados internacionalmente.\n"
	"A Escola possui parceria com a University of Hertfordshire, uma das mais renomadas"
	"do Reino Unido. Como a �nica institui��o da Am�rica Latina a oferecer diploma brit�nico"
	" validado no Reino Unido Uni�o Europeia e nos Estados Unidos," 
	"os alunos t�m a oportunidade de obter o t�tulo internacional de bacharel em diversas �reas" 
	"como design e anima��o 3D, estudando no \nBrasil."
	"Em um ambiente de ensino inovador, a EBAC contribui com o aprendizado \ne com a troca de conhecimento,"
	"e constitui a vanguarda na economia digital, oferecendo o ensino de \ndisciplinas que envolvem "
	"criatividade, tecnologia, marketing, audiovisual"
	"e neg�cios. Constantemente, a escola desenvolve metodologias e \nimplementa tecnologias de ponta" 
	"com o objetivo de enriquecer a experi�ncia dos alunos."
	"Sempre atenta �s mudan�as que ocorrem ao nosso redor, as boas \nideias e solu��es que reforcem nossa"
	"miss�o ser�o sempre bem-vindas. A EBAC � uma comunidade vibrante em \nque o conhecimento, a experi�ncia"
	"e as conex�es nos elevam a um patamar totalmente inovador, contribuindo \npara o pleno desenvolvimento pessoal e" 
	"profissional, tornando ideias arrojadas em realidade.\n"
	"Localizada no bairro da Vila Buarque, regi�o central de S�o Paulo, \na escola tem a melhor infraestrutura e recursos de �ltima gera��o"
	"para que seus alunos aprendam com o que h� de mais atual.\n"
	"\n\nCURSOS OFERECIDOS\n\n"
	"A EBAC possui cursos nas �reas de Design, Audiovisual, Marketing, Games, \nPrograma��o e Ci�ncia de Dados, Softwares e Neg�cios."
	"A Escola oferece educa��o em cursos de gradua��o, especializa��o e inicia��o, de forma \nonline, h�brida ou presencial. Nosso corpo docente"
	"� formado por profissionais do Brasil e do exterior.\n"
	"Alunos que escolhem a gradua��o / bacharelado brit�nico, \nestudam de 3 a 4 anos,"
	"dependendo de sua qualifica��o e experi�ncia. Outra forma de estudar na EBAC � nescolher um dos cursos online, "
	"ideais tanto para profissionais atuantes no mercado quanto para aqueles que desejam mudar de carreira ou se aproximar de suas �reas de interesse.\n\n"
	"entre em contato: 55 11 3030-3200\n"
	"nosso site: www.ebaconline.com.br\n"
	"rede sociais: instagram e.b.a.c\n"
	"n�o fique de fora junte-se a n�s!!!\n\n");
	//fim do texto ---inicio do desenho
	printf(" _______\n");
	printf("|       |\n");
	printf("| o   o | chomp!chomp! \n");
	printf("|   >   |\n");
	printf("|       |\n");
	printf("|   V   |\n");
	printf(" -------\n");
	//fim do desenho
		system("pause");//pausa tela	
}//fim da variavel
int alguns(){
	printf("Cursos mais populares da ebac\n"
	"\nProfiss�o Interior Designer. Design. ...\n"
	"\nProfiss�o Designer Gr�fico. Design. ..."
	"\nProfiss�o Analista de Dados. Programa��o & Data. ...\n"
	"\nProfiss�o UX/UI designer. Design. ..."
	"\nProfiss�o Desenvolvedor Full Stack Python. Programa��o & Data. ...\n"
	"\nProfiss�o Social Media Manager. ...\n"
	"\nPersonal Stylist. ...\n"
	"\nProfiss�o Marketing de Performance.\n"
	"\nvenha fazer parte da nossa familia para saber mais entre na op��o sobre no menu\n");
	
	system("pause");
}
int sair()//inicio da variavel sair
{
	printf("digite qualquer tecla para finalizar programa!\n\n");//digite qualquer tecla para finalizar programa
	//inico desenho
	printf(" _______\n");
	printf("|       |\n");
	printf("| ~   ~ | BU�� !!\n");
	printf("| * >   |\n");
	printf("| *     |\n");
	printf("|   O   |\n");
	printf(" -------\n");
	//fim desenho
		system("pause");//pausa a tela
		exit(0);//encerra o programa
}
int main()//A main fun��o serve como ponto de partida para a execu��o do programa. Em geral, ela controla a execu��o direcionando as chamadas para outras fun��es no programa.
{   
//inicio das variaveis
int laco=1;
int opcao=0;
//fim das variaveis	
	
	//inicio do la�o para ele sempre voltar daqui dps de ter executado uma das op�oes do menu
	for (laco=1;laco=1;)
{
		system("cls");//limpa a tela
		
setlocale(LC_ALL, "portuguese");//tipo de linguagem
//menu de escolha da ebac
	printf("********\n");
	printf("*#EBAC#*\n");
	printf("********\n\n");
	printf("\n*Bem vindo ao cartorio da EBAC \n\n");
	printf("Escolha a op��o desejada no menu a baixo:\n\n");
	printf("\t1-registrar nomes:\n\n");
	printf("\t2-consultar nomes:\n\n");
	printf("\t3-deletar nomes:\n\n");
	printf("\t4-para saber mais sobre n�s:\n\n");
	printf("\t5-mais alguns cursos populares da EBAC:\n\n");
	printf("\t6-fechar programa:\n\n");
	printf("op��o:");
//fim do menu de escolha	
		scanf("%d", &opcao);//armazena o que foi digitado pelo usuario o levando para uma das op�oes do menu
	
		system("cls");//limpa a tela
	

	switch(opcao)//inicio do switch case 
{
	 case 1:
	registro();//leva para a op��o de registro do usuario
	 	break;//quebra de linha fecha a case 1	
	
	 case 2:
	consulta();//leva para a op��o de consulta do usuario
	 	break;//quebra de linha fecha a case 2
		
	 case 3:
	deletar();//leva para a op��o de deletar usuario
		break;//quebra de linha fecha a case 3
	 	
	 case 4:
	sobre();//leva para op��o sobre a EBAC	
		break;//quebra de linha fecha a case 4
	
	 case 5:
	alguns();
	    break;
	
	 case 6:
	sair();//encerra o programa
		break;//quebra de linha fecha a case 5 
	
	default://default se nenhuma escolha for a do menu mostra mensagem de op��o indisponivel
	printf("op��o indisponivel, tente novamente!\n\n");//imprimi mensagem na tela
		system("pause");//pausa tela
		system("cls");//limpa tela
		break;//quebra de linha fecha default	
		
		//fim do for e fun��o main
}		
}
}
