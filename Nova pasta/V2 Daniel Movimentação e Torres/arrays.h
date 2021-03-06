
char letras[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

/*
Explica��o dos numeros na matriz:
Numero 0 representa um caminho onde os monstros nao mudar�o sua rota, continuarao com o movimento anterior;
Numero 1 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para baixo;
Numero 2 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para cima;
Numero 3 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para esquerda;
Numero 4 representa uma mudan�a na dire��o, o monstro ir� come�ar a ir para direita;
Numero 5 representa a parede que ir� beirar o caminho dos inimigos, nao ser� possivel criar torres nestes locais;
Numero 6 representa o local onde os monstros ser�o criados (o local de spawn);
Numero 7 representa o local onde torres poder�o ser constru�das;
Numero 8 representa que existe uma torre naquele local;
*/
int mapa[A][B] = {
   //A B C D E F G H I J K L M N O P Q R S T
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
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //0
    {0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //1
    {0,0,0,0,0,0,0,0,0,0,5,1,3,3,3,3,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //2
    {0,0,0,0,0,0,0,0,0,0,5,1,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, //3
    {0,0,0,0,0,0,0,0,0,0,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4}, //4
    {0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, //5
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //6
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //7
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //8
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //9
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //0
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0}, //1
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //2
 };
