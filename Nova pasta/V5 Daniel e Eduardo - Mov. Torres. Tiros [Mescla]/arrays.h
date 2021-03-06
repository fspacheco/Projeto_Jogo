
/*
Explicaçaoo dos numeros na matriz:

Background:
Numero 0: Local de contruçao das torres

Caminho dos monstros:
Numero 1 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para baixo;
Numero 2 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para cima;
Numero 3 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para esquerda;
Numero 4 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para direita;
Numero 5 representa a parede que ir� beirar o caminho dos inimigos;
Numero 6 representa o local onde os monstros ser�o criados (o local de spawn);

Compra e posicionamento das torres:
Numero 9 indica o local de compra da torre do tipo 1
Numero 10 indica que há uma torre do tipo 1 construída -- Dinamico

Numero 90 representa o sistema


*/
int mapa[A][B] = {
   //                                                    A A A A A A
   //A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F
   //0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1
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
    {0,0,0,0,0,0,0,0,0,0,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,90}, //14
    {0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, //15
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //16
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //17
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //18
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //19
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //20
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0}, //21
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //22
 };
