
/*
Explicaçao dos numeros na matriz:

Background:
Numero 0: Local de contruçao das torres

Caminho dos monstros:
Numero 1 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para baixo;
Numero 2 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para cima;
Numero 3 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para esquerda;
Numero 4 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para direita;
Numero 5 representa a parede que ir� beirar o caminho dos inimigos;
Numero 6 representa o local onde os monstros ser�o criados (o local de spawn);


***** Padrao de numeraçao das torres ******

    Multiplos de 10 sao os botoes para a compra das torres e a desena representao tipo da respectiva torre.
        Ex. 10 compra o torre do tipo 1
            20 a torre do tipo 2
    Continuaçao da contagem retorna a torre colocada no mapa.
        Ex. 11 - Torre do tipo 1
            21 - Torre do tipo 2
    Segunda continuaçao da contagem sao os botoes para upgrade da torre.
        Ex. 12 - Upgrades para a torre do tipo 1
            22 - Upgrades para a torre do tipo 2
    Terceira continuaçao é o botao de venda das torres
        Ex. 13 - Vende torre do tipo 1
            23 - Vende torre do tipo 2        
Numero 90 representa o sistema

*/

int mapa[A][B] = {
  //                     1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 2 3 3
  // 0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1
    {0,0,0,0,0,0,0,0,5,5,5,5,5,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //0
    {5,5,5,5,5,5,5,0,5,4,4,4,4,4,4,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //1
    {6,4,4,4,4,1,5,0,5,2,5,5,5,5,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //2
    {5,5,5,5,5,1,5,0,5,2,5,0,0,0,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //3
    {0,0,0,0,5,1,5,0,5,2,5,0,0,0,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //4
    {0,0,0,0,5,1,5,0,5,2,5,0,0,0,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //5
    {0,0,0,0,5,1,5,5,5,2,5,0,0,0,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //6
    {0,0,0,0,5,4,4,4,4,2,5,0,0,0,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //7
    {0,0,0,0,5,5,5,5,5,5,5,0,0,0,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //8
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //9
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //10
    {0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //11
    {0,0,0,0,0,0,0,0,0,0,5,1,3,3,3,3,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //12
    {0,0,0,0,0,0,0,0,0,0,5,1,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, //13
    {0,0,0,0,0,0,0,0,0,0,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,90},//14
    {0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, //15
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //16
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //17
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //18
    {0,10,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//19
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //20
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //21
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //22
 };
