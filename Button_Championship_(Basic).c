/*                                    6/21/2015 9:36 PM
* Name: Button Championship
* Copyright: Ip
* Author: Gabriel Yago Moreira
* Date: 6/21/2015 9:04 PM
* Description: This codigo will make a simulates of a button of championship, where
* the user will enter with the results of the game and this software present the final
* result, with a chart informing the yield from each team, as well as the number of
* points made, wins, goal difference and average of goals per match, will present
* the end result of championship, ie, the team champion. As already occurred
* twenty (20) editions will repeat until the 21 (twenty-first) edition.
*/

#include <stdio.h> // Suporta E/S com arquivos

int main(void){
 int rep;
 // descrição do campeonato
 printf("Este programa serve para computar as estat%csticas de um campeonato mirim de\n\
futebol de bot%co. A competi%c%co %c bem simples. Re%cne cinco times de futebol de\n\
bot%co: Bahia, Feirense, Fluminense, Juazeirense e Vit%cria. Todos os times jogam\n\
contra todos e o campe%co %c o time com maior n%cmero de pontos. Para cada partida\n\
disputada, o vencedor ganha 3 (tr%cs) pontos e o perdedor n%co ganha ponto. Em\n\
caso de empate, os dois times ganham 1 (um) ponto cada. O time campe%co %c aquele\n\
que obtiver maior n%cmero de pontos na competi%c%co. Em caso de empate, o campe%co\n\
%c o time com maior n%cmero de vit%crias. Caso o empate persista, o campe%co %c o\n\
time com maior n%cmero de gols. Como j%c ocorreram 20 edi%c%ces o programa repetir%c\n\
21 (vinte e uma) vezes. Para cada competi%c%co, o programa mostrar%c, o n%cmero de\n\
pontos, vit%crias, o n%cmero de gols feitos no campeonato e a media de gols por\n\
partida. E o time vencedor.\n\n\n", 161, 198, 135, 198, 130, 163, 198,162, 198, 130, 163, 136, 198, 198, 130, 163, 135, 198, 198, 130, 163,162, 198, 130, 163, 160, 135, 228, 160, 135, 198, 160, 163, 162, 163,162,163);

 for(rep=1; rep<22; rep++){ // Estrutura de Repetição

	// Variaveis Zeradas

	/*ba = time do bahia, g= gols do time, m= media do time, p=ponos
	 * do time, v= vitorias do time;*/
	int ba=0, gba=0, mba=0, pba=0, vba=0;
	/*fe = time do feirense, g= gols do time, m= media do time,
	 * p= ponos do time, v= vitorias do time;*/
	int fe=0, gfe=0, mfe=0, pfe=0, vfe=0;
	/*fl = time do fluminense, g= gols do time, m= media do time,
	 * p= ponos do time, v= vitorias do time;*/
	int fl=0, gfl=0, mfl, pfl=0, vfl=0;
	/*ju = time do juazeirense, g= gols do time, m= media do time,
	 * p= ponos do time, v+time = vitorias do time;*/
	int ju=0, gju=0, mju=0, pju=0, vju=0;
	/*vi = time do vitoria, g= gols do time, m= media do time,
	 * p= ponos do time, v= vitorias do time;*/
	int vi=0, gvi=0, mvi=0, pvi=0, vvi=0;
	int pa,pe,pl,pu,pi;
	pa=pe=pl=pu=pi=0;

	// Edição
    printf("                       %d%c Edi%c%co do Campeonato                                  \n\n", rep, 166, 135, 198);
    printf(" Resultado do jogo entre: Bahia x Feirense\n");// 1ª Rodada de jogos
    printf("\nBahia:\n");
    scanf("%d",&ba);

    printf("\nFeirense:\n");
    scanf("%d",&fe);

    gba += ba;// gols feitos e calculo para média
    gfe += fe;

    if(ba>fe){
      pba += 30000;//soma da pontuação e vitória
      pba += 3;//soma da pontuação e vitória
      vba += 1;
    }
    else if(ba<fe){
      pfe += 30000;
      pe += 3;
      vfe += 1;
    }
    else{
      pba += 1000;//Caso de empate
      pfe += 1000;
      pa += 1;//Caso de empate
      pe += 1;
    }

    printf("\n Resultado do jogo entre: Bahia x Fluminense\n");
    printf("\nBahia:\n");
    scanf("%d",&ba);

    printf("\nFluminense:\n");
    scanf("%d",&fl);

    gba += ba;// gols feitos e calculo para média
    gfl += fl;

    if(ba>fl){
      pba += 30000;//soma da pontuação e vitória
      vba += 1;
      pa += 3;//soma da pontuação e vitória
    }
    else if(ba<fl){
      pfl += 30000;
      vfl += 1;
      pl += 3;
    }
    else{
      pba += 1000;//Caso de empate
      pfl += 1000;
      pa += 1;//Caso de empate
      pl += 1;
    }

    printf("\n Resultado do jogo entre: Bahia x Juazeirense\n");

    printf("\nBahia:\n");
    scanf("%d",&ba);
    printf("\nJuazeirense:\n");
    scanf("%d",&ju);

    gba += ba;// gols feitos e calculo para média
    gju += ju;

    if(ba>ju){
      pba += 30000;//soma da pontuação e vitória
      pa += 3;//soma da pontuação e vitória
      vba += 1;
    }
    else if(ba<ju){
      pju += 30000;
      pu += 3;
      vju += 1;
    }
    else{
      pba += 1000;//Caso de empate
      pju += 1000;
      pa += 1;
      pu += 1;
    }

    printf("\n Resultado do jogo entre: Bahia x Vit%cria\n", 162);

    printf("\nBahia:\n");
    scanf("%d",&ba);
    printf("\nVit%cria:\n",162);
    scanf("%d",&vi);

    gba += ba;// gols feitos e calculo para média
    gvi += vi;

    if(ba>vi){
      pba += 30000;//soma da pontuação e vitória
      pa += 3;
      vba += 1;
    }
    else if(ba<vi){
      pvi += 30000;
      pi += 3;
      vvi += 1;
    }
    else{
      pba += 1000;//Caso de empate
      pvi += 1000;
      pa += 1;
      pi += 1;
    }

    // 2ª Rodada de jogos
    printf("\n Resultado do jogo entre: Feirense x Fluminense\n");

    printf("\nFeirense:\n");
    scanf("%d",&fe);
    printf("\nFluminense:\n");
    scanf("%d",&fl);

    gfe += fe;// gols feitos e calculo para média
    gfl += fl;

    if(fe>fl){
      pfe += 30000;//soma da pontuação e vitória
      vfe += 1;
      pe += 3;
    }
    else if(fe<fl){
      pfl += 30000;
      pl += 3;
      vfl += 1;
    }
    else{
      pfe += 1000;//Caso de empate
      pfl += 1000;
      pe += 1;
      pl += 1;
    }

    printf("\n Resultado do jogo entre: Feirense x Juazeirense\n");

    printf("\nFeirense:\n");
    scanf("%d",&fe);
    printf("\nJuazeirense:\n");
    scanf("%d",&ju);

    gfe += fe;// gols feitos e calculo para média
    gju += ju;

    if(fe>ju){
      pfe += 30000;//soma da pontuação e vitória
      pe += 3;
      vfe += 1;
    }
    else if(fe<ju){
      pju += 30000;
      pu += 3;
      vju += 1;
    }
    else{
      pfe += 1000;//Caso de empate
      pju += 1000;
      pe += 1;
      pu += 1;
    }

    printf("\n Resultado do jogo entre: Feirense x Vit%cria\n", 162);

    printf("\nFeirense:\n");
    scanf("%d",&fe);
    printf("\nVit%cria:\n",162);
    scanf("%d",&vi);

    gfe += fe;// gols feitos e calculo para média
    gvi += vi;

    if(fe>vi){
      pfe += 30000;//soma da pontuação e vitória
      pe += 3;
      vfe += 1;
    }
    else if(fe<vi){
      pvi += 30000;
      pi += 3;
      vvi += 1;
    }
    else{
      pfe += 1000;//Caso de empate
      pvi += 1000;
      pe += 1;
      pi += 1;
    }

    // 3ª Rodada de jogos
    printf("\n Resultado do jogo entre: Fluminense x Juazeirense\n");

    printf("\nFluminense:\n");
    scanf("%d",&fl);
    printf("\nJuazeirense:\n");
    scanf("%d",&ju);

    gfl += fl;// gols feitos e calculo para média
    gju += ju;

    if(fl>ju){
      pfl += 30000;//soma da pontuação e vitória
      pl += 3;
      vfl += 1;
    }
    else if(fl<ju){
      pju += 30000;
      pu += 3;
      vju += 1;
    }
    else{
      pfl += 1000;//Caso de empate
      pju += 1000;
      pl += 1;
      pu += 1;
    }

    printf("\n Resultado do jogo entre: Fluminense x Vit%cria\n", 162);

    printf("\nFluminense:\n");
    scanf("%d",&fl);
    printf("\nVit%cria:\n",162);
    scanf("%d",&vi);

    gfl += fl;// gols feitos e calculo para média
    gvi += vi;

    if(fl>vi){
      pfl += 30000;//soma da pontuação e vitória
      pl += 3;
      vfl += 1;
    }
    else if(fl<vi){
      pvi += 30000;
      pi += 3;
      vvi += 1;
    }
    else{
      pfl += 1000;//Caso de empate
      pvi += 1000;
      pl += 1;
      pi += 1;
    }

    // 4ª e Ultima Rodada de jogos
    printf("\n Resultado do jogo entre: Juazeirense x Vit%cria\n", 162);

    printf("\nJuazeirense:\n");
    scanf("%d",&ju);
    printf("\nVit%cria:\n",162);
    scanf("%d",&vi);

    gju += ju;// gols feitos e calculo para média
    gvi += vi;

    if(ju>vi){
      pju = pju + 30000;//soma da pontuação e vitória
      pu += 3;
      vju = vju + 1;
    }
    else if(ju<vi){
      pvi = pvi + 30000;
      pi += 3;
      vvi = vvi + 1;
    }
    else{
      pju = pju + 1000;//Caso de empate
      pvi = pvi + 1000;
      pu += 1;
      pi += 1;
    }

    //P1 ( Tabela de Rendimentos dos Times )
    printf("\n\n\n                  Tabela de Desempenho dos Times da %d%c Edi%c%co\n\n\n",rep,166, 135, 198);

    printf(" Time\t     Pontos\t  Vitorias\tGols no Campeonato\tMedia de gols\n");
    printf("\n Bahia      %5d         %5d               %5d                 %2.2f\n", pa, vba, gba,(float) gba/4);
    printf(" Feirense   %5d         %5d               %5d                 %2.2f\n", pe, vfe, gfe, (float) gfe/4);
    printf(" Fluminense %5d         %5d               %5d                 %2.2f\n", pl, vfl, gfl, (float) gfl/4);
    printf(" Juazeirense%5d         %5d               %5d                 %2.2f\n", pu, vju, gju, (float) gju/4);
    printf(" Vit%cria    %5d         %5d               %5d                 %2.2f\n\n\n\n", 162, pi, vvi, gvi, (float) gvi/4);

	/*Vencedor por Pontos( o único que tiver maior pontos vencerá caso
	 * isso não aconteça vai pra criterio de desempate)*/
	if((pba > pfe) && (pba > pfl) && (pba > pju) && (pba > pvi)){
	  printf("            Bahia %c o novo Vencedor!\n\n\n",130);
	}
	else if((pfe > pba) && (pfe > pfl) && (pfe > pju) && (pfe > pvi)){
	  printf("            Feirense %c o novo Vencedor!\n\n\n",130);
	}
	else if((pfl > pba) && (pfl > pfe) && (pfl > pju) && (pfl > pvi)){
      printf("            Fluminense %c o novo Vencedor!\n\n\n",130);
    }
    else if((pju > pba) && (pju > pfe) && (pju > pfl) && (pju > pvi)){
      printf("            Juazeirense %c o novo Vencedor!\n\n\n",130);
    }
    else if((pvi > pba) && (pvi > pfe) && (pvi > pfl) && (pvi > pju)){
	  printf("            Vit%cria %c o novo Vencedor!\n\n\n", 162, 130);
	}

	/*Criterio de desempate: Vencedor por Vitórias( o único que tiver
	 * maior vitórias vencerá caso isso não aconteça vai pro outro
	 * criterio de desempate)*/
	else if((vba+pba > vfe+pfe) && (vba+pba > vfl+pfl) && (vba+pba > vju+pju) && (vba+pba > vvi+pvi)){
      printf("           Bahia %c o novo Vencedor!\n\n\n",130);
    }
    else if((vfe+pfe > vba+pba) && (vfe+pfe > vfl+pfl) && (vfe+pfe > vju+pju) && (vfe+pfe > vvi+pvi)){
      printf("            Feirense %c o novo Vencedor!\n\n\n",130);
    }
    else if((vfl+pfl > vba+pba) && (vfl+pfl > vfe+pfe) && (vfl+pfl > vju+pju) && (vfl+pfl > vvi+pvi)){
      printf("            Fluminense %c o novo Vencedor!\n\n\n",130);
    }
    else if((vju+pju > vba+pba) && (vju+pju > vfe+pfe) && (vju+pju > vfl+pfl) && (vju+pju > vvi+pvi)){
      printf("            Juazeirense %c o novo Vencedor!\n\n\n",130);
    }
    else if((vvi+pvi > vba+pba) && (vvi+pvi > vfe+pfe) && (vvi+pvi > vfl+pfl) && (vvi+pvi > vju+pju)){
      printf("            Vit%cria %c o novo Vencedor!\n\n\n", 162, 130);
    }

    /*Criterio de desempate: Vencedor por Gols (o único que tiver o
     * saldo maior ou igual de gols vencerá caso isso não aconteça vai
     * pro outro criterio de desempate). */


    vba*=10000;
    mba= pba+vba+gba;

	vfe*=10000;
    mfe= pfe+vfe+gfe;

    vfl*=10000;
    mfl= pfl+vfl+gfl;

   vju*=10000;
    mju= pju+vju+gju;

    vvi*=10000;
    mvi= pvi+vvi+gvi;

	if((mba >= mfe) && (mba >= mfl) && (mba >= mju) && (mba >= mvi)){
	  printf("            Bahia %c o novo Vencedor!\n\n\n",130);
	}
	else if((mfe >= mba) && (mfe >= mfl) && (mfe >= mju) && (mfe >= mvi)){
	  printf("            Feirense %c o novo Vencedor!\n\n\n",130);
	}
	else if((mfl >= mba) && (mfl >= mfe) && (mfl >= mju) && (mfl >= mvi)){
      printf("            Fluminense %c o novo Vencedor!\n\n\n",130);
    }
    else if((mju >= mba) && (mju >= mfe) && (mju >= mfl) && (mju >= mvi)){
      printf("            Juazeirense %c o novo Vencedor!\n\n\n",130);
    }
    else if((mvi >= mba) && (mvi >= mfe) && (mvi >= mfl) && (mvi >= mju)){
      printf("            Vit%cria %c o novo Vencedor!\n\n\n", 162, 130);
    }

	/*ULTIMO CRITERIO DE DESEMPATE (Caso aja falha! o programa
	 * escolherar o vensedor por ordem alfabetica).*/
	else if((gba == gfe) || (gba == gfl) || (gba == gju) || (gba == gvi) || (pba > 5)){
	  printf("           Bahia %c o novo Vencedor por Ordem Alfabetica\n\n\n",130);
	}
	else if((gfe == gba) || (gfe == gfl) || (gfe == gju) || (gfe == gvi) || (pfe > 5)){
	  printf("            Feirense %c o novo Vencedor por Ordem Alfabetica\n\n\n",130);
	}
	else if((gfl == gba) || (gfl == gfe) || (gfl == gju) || (gfl == gvi) || (pfl > 5)){
	  printf("            Fluminense %c o novo Vencedor por Ordem Alfabetica\n\n\n",130);
	}
	else if((gju == gba) || (gju == gfe) || (gju == gfl) || (gju == gvi) || (pju > 5)){
	  printf("            Juazeirense %c o novo Vencedor por Ordem Alfabetica\n\n\n",130);
	}
	else if((gvi == gba) || (gvi == gfe) || (gvi == gfl) || (gvi == gju) || (pvi > 5)){
	  printf("            Vit%cria %c o novo Vencedor por Ordem Alfabetica\n\n\n", 162, 130);
	}

	//Se tudo falhar!!! ( isso servirar para uma Blindagem Extra! ).
	else{
	  printf(" Por sorteio VIT%cRIA %c o novo Vencedor\n\n\n", 224, 130);
	}

    //fim de uma Edição
	printf(" Aperte uma Tecla se Deseja Continuar...\n\n                                      Caso queira sair feche o programa!!! \n\n\n");

    //Pois só fecharar depois da 21 (vigésima primeira) Edição.
  }

  printf(" Obrigado por utilizar o Ip software%c\n\n :) Tchau!!!\n\n", 184);
  return(0);
}
