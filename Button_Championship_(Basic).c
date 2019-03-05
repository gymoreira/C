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
#include <stdlib.h>

int main(void){
  int held, h; //competitions was held

  
  
  // competition description
  printf("\n\n\n");
  printf("This program serves to compute the statistics of a football championship\n\
football button. The competition is very simple. It gathers five football teams\n\
of button: Bahia, Feirense, Fluminense, Juazeirense and Vitoria. All teams play\n\
against each other and the champion is the team with the highest number of\n\
points. For each game played, the winner gets three (3) points and the loser\n\
does not get point. In case of a tie, both teams get one (1) point each. \n\
The champion team is the one that obtains the highest number of points in \n\
the competition. In case of a tie, the champion is the team with the highest\n\
number of victories. If the tie persists, the champion is the team with the\n\
highest number of goals. Since there were 20 editions, the program would \n\
repeat 21 (twenty-one) times. For each competition, the program will show\n\
the number of points, victories, the number of goals scored in the league\n\
and the average number of goals per match. And the winning team.\n\n\n");

  printf("How many competitions was held?\n");
  scanf("%d", &h);
  printf("\n\n\n");
  held = h;
  while(held >0){// Estrutura de Repetição
    char take[2];
    int repeat = 1;
    int lot = random() % 5;
    // Variaveis Zeradas
    /*ba = time do bahia, g= gols do time, m= media do time, p=ponos
    * do time, v= vitorias do time;*/
    int ba=0, gba=0, vba=0;
    /*fe = time do feirense, g= gols do time, m= media do time,
    * p= ponos do time, v= vitorias do time;*/
    int fe=0, gfe=0, vfe=0;
    /*fl = time do fluminense, g= gols do time, m= media do time,
    * p= ponos do time, v= vitorias do time;*/
    int fl=0, gfl=0, vfl=0;
    /*ju = time do juazeirense, g= gols do time, m= media do time,
    * p= ponos do time, v+time = vitorias do time;*/
    int ju=0, gju=0, vju=0;
    /*vi = time do vitoria, g= gols do time, m= media do time,
    * p= ponos do time, v= vitorias do time;*/
    int vi=0, gvi=0, vvi=0;
    int pa=0, pe=0, pl=0, pu=0, pi=0;
    // Edição
    printf("                       %d%c Edi%c%co do Campeonato                                  \n\n", repeat, 166, 135, 198);
    printf(" Result of the match between: Bahia x Feirense\n");// 1ª Rodada de jogos
    printf("\nBahia:\n");
    scanf("%s", take);
    ba = atoi(take);

    printf("\nFeirense:\n");
    scanf("%s", take);
    fe = atoi(take);

    gba += ba;// gols feitos e calculo para média
    gfe += fe;

    if(ba>fe){
      pa += 3;//soma da pontuação e vitória
      vba += 1;
    }
    else if(ba<fe){
      pe += 3;
      vfe += 1;
    }
    else{
      pa += 1;//Caso de empate
      pe += 1;
    }

    printf("\n Result of the match between: Bahia x Fluminense\n");
    printf("\nBahia:\n");
    scanf("%s", take);
    ba = atoi(take);

    printf("\nFluminense:\n");
    scanf("%s", take);
    fl = atoi(take);

    gba += ba;// gols feitos e calculo para média
    gfl += fl;

    if(ba>fl){
      vba += 1;
      pa += 3;//soma da pontuação e vitória
    }
    else if(ba<fl){
      vfl += 1;
      pl += 3;
    }
    else{
      pa += 1;//Caso de empate
      pl += 1;
    }

    printf("\n Result of the match between: Bahia x Juazeirense\n");

    printf("\nBahia:\n");
    scanf("%s", take);
    ba = atoi(take);
    printf("\nJuazeirense:\n");
    scanf("%s", take);
    ju = atoi(take);

    gba += ba;// gols feitos e calculo para média
    gju += ju;

    if(ba>ju){
      pa += 3;//soma da pontuação e vitória
      vba += 1;
    }
    else if(ba<ju){
      pu += 3;
      vju += 1;
    }
    else{
      pa += 1;
      pu += 1;
    }

    printf("\n Result of the match between: Bahia x Vit%cria\n", 162);

    printf("\nBahia:\n");
    scanf("%s", take);
    ba = atoi(take);
    printf("\nVit%cria:\n",162);
    scanf("%s", take);
    vi = atoi(take);

    gba += ba;// gols feitos e calculo para média
    gvi += vi;

    if(ba>vi){
      pa += 3;
      vba += 1;
    }
    else if(ba<vi){
      pi += 3;
      vvi += 1;
    }
    else{
      pa += 1;
      pi += 1;
    }

    // 2ª Rodada de jogos
    printf("\n Result of the match between: Feirense x Fluminense\n");

    printf("\nFeirense:\n");
    scanf("%s", take);
    fe = atoi(take);
    printf("\nFluminense:\n");
    scanf("%s", take);
    fl = atoi(take);

    gfe += fe;// gols feitos e calculo para média
    gfl += fl;

    if(fe>fl){
      vfe += 1;
      pe += 3;
    }
    else if(fe<fl){
      pl += 3;
      vfl += 1;
    }
    else{
      pe += 1;
      pl += 1;
    }

    printf("\n Result of the match between: Feirense x Juazeirense\n");

    printf("\nFeirense:\n");
    scanf("%s", take);
    fe = atoi(take);
    printf("\nJuazeirense:\n");
    scanf("%s", take);
    ju = atoi(take);

    gfe += fe;// gols feitos e calculo para média
    gju += ju;

    if(fe>ju){
      pe += 3;
      vfe += 1;
    }
    else if(fe<ju){
      pu += 3;
      vju += 1;
    }
    else{
      pe += 1;
      pu += 1;
    }

    printf("\n Result of the match between: Feirense x Vit%cria\n", 162);

    printf("\nFeirense:\n");
    scanf("%s", take);
    fe = atoi(take);
    printf("\nVit%cria:\n",162);
    scanf("%s", take);
    vi = atoi(take);

    gfe += fe;// gols feitos e calculo para média
    gvi += vi;

    if(fe>vi){
      pe += 3;
      vfe += 1;
    }
    else if(fe<vi){
      pi += 3;
      vvi += 1;
    }
    else{
      pe += 1;
      pi += 1;
    }

    // 3ª Rodada de jogos
    printf("\n Result of the match between: Fluminense x Juazeirense\n");

    printf("\nFluminense:\n");
    scanf("%s", take);
    fl = atoi(take);
    printf("\nJuazeirense:\n");
    scanf("%s", take);
    ju = atoi(take);

    gfl += fl;// gols feitos e calculo para média
    gju += ju;

    if(fl>ju){
      pl += 3;
      vfl += 1;
    }
    else if(fl<ju){
      pu += 3;
      vju += 1;
    }
    else{
      pl += 1;
      pu += 1;
    }

    printf("\n Result of the match between: Fluminense x Vit%cria\n", 162);

    printf("\nFluminense:\n");
    scanf("%s", take);
    fl = atoi(take);
    printf("\nVit%cria:\n",162);
    scanf("%s", take);
    vi = atoi(take);

    gfl += fl;// gols feitos e calculo para média
    gvi += vi;

    if(fl>vi){
      pl += 3;
      vfl += 1;
    }
    else if(fl<vi){
      pi += 3;
      vvi += 1;
    }
    else{
      pl += 1;
      pi += 1;
    }

    // 4ª e Ultima Rodada de jogos
    printf("\n Result of the match between: Juazeirense x Vit%cria\n", 162);

    printf("\nJuazeirense:\n");
    scanf("%s", take);
    ju = atoi(take);
    printf("\nVit%cria:\n",162);
    scanf("%s", take);
    vi = atoi(take);

    gju += ju;// gols feitos e calculo para média
    gvi += vi;

    if(ju>vi){
      pu += 3;
      vju = vju + 1;
    }
    else if(ju<vi){
      pi += 3;
      vvi = vvi + 1;
    }
    else{
      pu += 1;
      pi += 1;
    }

    //logic for the comparison of score, wins and goal balance.
    int saldop=pa;

    if (pe>saldop){
      saldop=pe;
    }
    if (pl>saldop){
      saldop=pl;
    }
    if (pu>saldop){
      saldop=pu;
    }
    if (pi>saldop){
      saldop=pi;
    }

    int saldov=vba;

    if (vfe>saldov){
      saldov=vfe;
    }
    if (vfl>saldov){
      saldov=gfl;
    }
    if (vju>saldov){
      saldov=vju;
    }
    if (vvi>saldov){
      saldov=vvi;
    }

    int saldo=gba;

    if (gfe>saldo){
      saldo=gfe;
    }
    if (gfl>saldo){
      saldo=gfl;
    }
    if (gju>saldo){
      saldo=gju;
    }
    if (gvi>saldo){
      saldo=gvi;
    }

    //P1 ( Tabela de Rendimentos dos Times )
    printf("\n\n\n                  Tabela de Desempenho dos Times da %d%c Edi%c%co\n\n\n", repeat, 166, 135, 198);

    printf(" Time\t     Pontos\t  Vitorias\tGols no Campeonato\tMedia de gols\n");
    printf("\n Bahia      %5d         %5d               %5d                 %2.2f\n", pa, vba, gba,(float) gba/4);
    printf(" Feirense   %5d         %5d               %5d                 %2.2f\n", pe, vfe, gfe, (float) gfe/4);
    printf(" Fluminense %5d         %5d               %5d                 %2.2f\n", pl, vfl, gfl, (float) gfl/4);
    printf(" Juazeirense%5d         %5d               %5d                 %2.2f\n", pu, vju, gju, (float) gju/4);
    printf(" Vit%cria    %5d         %5d               %5d                 %2.2f\n\n\n\n", 162, pi, vvi, gvi, (float) gvi/4);

    /*Vencedor por Pontos( o único que tiver maior pontos vencerá caso
     * isso não aconteça vai pra criterio de desempate)*/
    if((pa > pe) && (pa > pl) && (pa > pu) && (pa > pi)){
      printf("            Bahia %c o Vencedor por pontos!\n\n\n",130);
    }
    else if((pe > pa) && (pe > pl) && (pe > pu) && (pe > pi)){
      printf("            Feirense %c o Vencedor por pontos!\n\n\n",130);
    }
    else if((pl > pa) && (pl > pe) && (pl > pu) && (pl > pi)){
      printf("            Fluminense %c o Vencedor por pontos!\n\n\n",130);
    }
    else if((pu > pa) && (pu > pe) && (pu > pl) && (pu > pi)){
      printf("            Juazeirense %c o Vencedor por pontos!\n\n\n",130);
    }
    else if((pi > pa) && (pi > pe) && (pi > pl) && (pi > pu)){
      printf("            Vit%cria %c o Vencedor por pontos!\n\n\n", 162, 130);
    }

  	/*Criterio de desempate: Vencedor por Vitórias( o único que tiver
  	 * maior vitórias vencerá caso isso não aconteça vai pro outro
  	 * criterio de desempate)*/
  	else if((vba > vfe) && (vba > vfl) && (vba > vju) && (vba > vvi) && (saldop==pa)){
      printf("           Bahia %c o Vencedor por vitorias!\n\n\n",130);
    }
    else if((vfe > vba) && (vfe > vfl) && (vfe > vju) && (vfe > vvi) && (saldop==pe)){
      printf("            Feirense %c o Vencedor por vitorias!\n\n\n",130);
    }
    else if((vfl > vba) && (vfl > vfe) && (vfl > vju) && (vfl > vvi) && (saldop==pl)){
      printf("            Fluminense %c o Vencedor por vitorias!\n\n\n",130);
    }
    else if((vju > vba) && (vju > vfe) && (vju > vfl) && (vju > vvi) && (saldop==pu)){
      printf("            Juazeirense %c o Vencedor por vitorias!\n\n\n",130);
    }
    else if((vvi > vba) && (vvi > vfe) && (vvi > vfl) && (vvi > vju) && (saldop==pi)){
      printf("            Vit%cria %c o Vencedor por vitorias!\n\n\n", 162, 130);
    }

    /*Criterio de desempate: Vencedor por Gols (o único que tiver o
     * saldo maior ou igual de gols vencerá caso isso não aconteça vai
     * pro outro criterio de desempate).*/
  	else if((gba > gfe) && (gba > gfl) && (gba > gju) && (gba > gvi) && (saldop==pa) && (saldov==vba)){
  	  printf("            Bahia %c o Vencedor por gols!\n\n\n",130);
  	}
  	else if((gfe > gba) && (gfe > gfl) && (gfe > gju) && (gfe > gvi) && (saldop==pe) && (saldov==vfe)){
  	  printf("            Feirense %c o Vencedor por gols!\n\n\n",130);
  	}
  	else if((gfl > gba) && (gfl > gfe) && (gfl > gju) && (gfl > gvi) && (saldop==pl) && (saldov==vfl)){
        printf("            Fluminense %c o Vencedor por gols!\n\n\n",130);
    }
    else if((gju > gba) && (gju > gfe) && (gju > gfl) && (gju > gvi) && (saldop==pu) && (saldov==vju)){
        printf("            Juazeirense %c o Vencedor por gols!\n\n\n",130);
    }
    else if((gvi > gba) && (gvi > gfe) && (gvi > gfl) && (gvi > gju) && (saldop==pi) && (saldov==vvi)){
        printf("            Vit%cria %c o Vencedor por gols!\n\n\n", 162, 130);
    }

  	/*ULTIMO CRITERIO DE DESEMPATE (o programa
  	 * escolherar o vencedor por sorteio).*/
    else{
      int chosen = 1;

      do {
        if ((lot == 0) && (saldop == pa) && (saldo == gba)){
          printf(" Por sorteio o Bahia %c o Vencedor\n\n\n", 130);
          chosen=0;
        }
        if ((lot == 1) && (saldop == pe) && (saldo == gfe)){
          printf(" Por sorteio o Feirense %c o Vencedor\n\n\n", 130);
          chosen=0;
        }
        if ((lot == 2) && (saldop == pl) && (saldo == gfl)){
          printf(" Por sorteio o Fluminense %c o Vencedor\n\n\n", 130);
          chosen=0;
        }
        if ((lot == 3) && (saldop == pu) && (saldo == gju)){
          printf(" Por sorteio o Juazeirense %c o Vencedor\n\n\n", 130);
          chosen=0;
        }
        if ((lot == 4) && (saldop == pi) && (saldo == gvi)){
          printf(" Por sorteio o VIT%cRIA %c o novo Vencedor\n\n\n", 224, 130);
          chosen=0;
        }
        lot = random() % 5;
      } while(chosen ==1);
    }
    held--;
    repeat++;

    //fim de uma Edição
    //printf(" Aperte uma Tecla se Deseja Continuar...\n\n\n");
    //Pois só fecharar depois da 21 (vigésima primeira) Edição.
  }

  printf(" Obrigado por utilizar o software%c\n\n :) Bye!!!\n\n", 184);
  
  return(0);
}
