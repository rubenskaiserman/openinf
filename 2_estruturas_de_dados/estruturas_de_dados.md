# Estruturas de dados

## Memória
Antes de falarmos sobre estruturas de dados em si, relembre-mos como funciona a memória de um computador. <br>
A memória de um computador, pode ser abstraída em formato de uma grande grade.
| coluna1 | coluna2 | coluna3 |    ...  | colunaN-1 | colunaN |
|---------|---------|---------|---------|---------|-----------|
| linha1  |  0x123  |  0x976  |     ... |  0x439  |  0x127    |
| linha2  |  0x888  | 0x863   |     ... |  0x909  |  0x900    |
| linha3  |  0x136  | 0x121   |     ... |  0x120  |  0x001    |
|   ...   |  ...    | ...     |     ... |  ...    |  ...      |
| linhaM-1|  0x2e0  | 0x111   |     ... |  0x8d9  |  0x065    |
| linhaM  |  0xeee  | 0x989   |     ... |  0x1a1  |  0xaf2    |

## O que são estruturas de dados
Até agora vimos o registro de informações através de variáveis, porém, esse método não é eficiente para o registro de grandes coleções de dados. Por exemplo, caso seja desejado guardar todas as notas de uma turma escolar, sería necessário criar um nome para cada nota, tornando assim o processo nada eficiente. <br>
Portanto, estruturas de dados são coleções de informações. Abaixo serão explicadas e representadas as mais conhecidas e utilizadas como arrays, matrizes, linked lists, stacks, queues e etc.

## Arrays
A primeira estrutura de dados e a mais simples são os arrays. Também chamados de vetores, os arrays são uma estrutura de tamanho definido que permite o armazenamento de dados de um mesmo tipo. <br>
Ou seja, é possível ter um array int, um array float, um array double, um array char, ou qualquer outro tipo. Porém, não se pode misturar os tipos de dados, em um array de ints não se pode colocar um double, em um array de char não se pode colocar um float e etc. <br>
```
./codigos/arrays.c

#include <stdio.h>

int main(void){
    int arrayInts[5] = {0, 1, 2, 3, 4};
    double arrayDouble[4] = {9.2, 1.3, 1.111, 3.14159};
    char arrayChar[9] = {'O', 'l', 'a', ' ', 'm', 'u', 'n', 'd', 'o'};

    for(int i = 0; i < 5; i++){
        printf("%d, ", arrayInts[i]);
    }
    printf("\n");
    for(int i = 0; i < 4; i++){
        printf("%f, ", arrayDouble[i]);
    }
    printf("\n");
    for(int i = 0; i < 9; i++){
        printf("%c", arrayChar[i]);
    }
    printf("\n");

    return 0;
}
}
```
Acima vemos um exemplo de código com arrays. São instânciados três arrays. um do tipo int, um do tipo double e um do tipo char. Com tamanhos 5, 4 e 9 respectivamente. Ou sejam o array de ints pode armazenar 5 ints, o array de double pode armazenar 4 doubles e o array de char pode armazenar 9 caracteres. Logo na criação são definidos os valores de cada array, com um enfoque especial para o array de caracteres que possuí em si uma mensagem, contendo inclusive um espaço como um dos valores do array. <br>
Depois disso é feita autilização de um loop **for** para imprimir todos os valores. Nota-se uma caracteristica importante nesses loops for, o acesso a um valor dentro de um array é feito a partir da posição do valor, e a posição é definida a partir de um indice que é iniciado em 0. No array de caracteres por exemplo, os valores são 
```
0: 'O'
1: 'l'
2: 'a'
3: ' '
4: 'm'
5: 'u'
6: 'n'
7: 'd'
8: 'o'
```
Chamamos essa posição dos valores, de indíce. Para fazer acesso a qualquer valor dentro de um array, basta fazer referência ao array da seguinte maneira:
```
nomeDoArray[indice]
```
Abaixo vemos apresentado o resultado do código exemplificado anteriormente.
```
Terminal

codigos/arrays$ make arrays
cc     arrays.c   -o arrays
codigos/arrays$ ./arrays
0, 1, 2, 3, 4, 
9.200000, 1.300000, 1.111000, 3.141590, 
Ola mundo
codigos/arrays$
```
Nos loops é feita uma lógica para escrita da lista separada por virgula, com exceção do array de caracteres, que é escrito sem modificações. O array de caracteres, por ser muito utilizado principalmente na construção de textos, possuí um nome especial **"String"**.

## Strings
Como dito acima, strings são arrays de caracteres. Porém, devido ao sua alta utilização foram definidas algumas características para ele, como por exemplo em sua instância, não é necessário escrever cada caracter separadamente.
```
char string[7] = "Lasanha";
```
Além disso, muitas funções utilizam strings, como por exemplo o printf() que está sendo utilizado tantas vezes. O primeiro parâmetro, deve obrigatoriamente se uma string, assim como tem sido feito até então sem muito enfoque. <br>
Além de uma estrutura de dados bem comum, em muitas linguagens strings são considerados não estruturas de dados, mas sim tipos de dados por si só, como por exemplo em python e javascript. 
```
./codigos/strings/strings.c

#include <stdio.h> 

int main(void){
    char string[7] = "Lasanha";
    for(int i = 0; i < 7; i++){
        printf("%c", string[i]);
    }
    printf("\n")
    printf("%s\n", string);
}
```

```
codigos/strings$ make strings
cc     strings.c   -o strings
codigos/strings$ ./strings
Lasanha
Lasanha
codigos/strings$ 
```
Acima podemos ver um exemplo de implementação de um código utilizando uma string. É definido um array de caracteres com 7 posições, e a partir dele são feitas duas lógicas para a impressão da string no terminal. <br>
## Ponteiros e Manipulação de memória