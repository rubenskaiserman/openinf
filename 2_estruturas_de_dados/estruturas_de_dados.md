# Estruturas de dados

## O que são estruturas de dados
Estruturas de dados são formas padronizadas para o armazenamento de coleções de dados na memória. Leia-se: formas de armazenar dados na memória mais eficientemente do que criar centenas de variáveis. <br>

## Memória
Antes de falarmos sobre estruturas de dados em si, relembre-mos como funciona a memória de um computador. <br>
A memória de um computador, pode ser abstraída em formato de uma grande grade.
| coluna1 | coluna2 | coluna3 |    ...  | colunaN-1 | colunaN |
|---------|---------|---------|---------|---------|-----------|
| 0x987  |  0x123  |  0x976  |     ... |  0x439  |  0x127    |
| 0xabc  |  0x888  | 0x863   |     ... |  0x909  |  0x900    |
| 0xab2  |  0x136  | 0x121   |     ... |  0x120  |  0x001    |
| 0xbff  |  0xa11  | 0x565   |     ... |  0x987  |  0x876    |
| 0xafe  |  0xfff  | 0x908   |     ... |  0x543  |  0x432    |
| ...    |  ...    | ...     |     ... |  ...    |  ...      |

Cada célula da tabela é um endereço na memória, que pode armazenar uma quantidade de informação. <br>
Não entremos nos detalhes de hardware sobre como funciona a memória. Mas uma informação importante é sobre como é armazenada uma variável na memória e como ela é acessada. <br>
Vamos supor que a memória armazena em cada célula um byte de informação. Se quisermos armazenar um int, precisariamos utilizar 4 células. Assim é feito. Porém, quando fazemos isso, utilizamos as células próximas uma da outra.
```
int variavel = 19;
```
| coluna1 | coluna2 | coluna3 |coluna4  |    ...  | colunaN-1 | colunaN |
|---------|---------|---------|---------|---------|---------|-----------|
| 00000000|00000000 |00000000 |00010011 |  ...| valor  |  valor    |
| valor  |  valor  | valor   | valor   |     ... |  valor  |  valor    |
| valor  |  valor  | valor   | valor   |     ... |  valor    | valor |
| valor  |  valor  | valor   | valor   |     ... |  valor    | valor |
| valor  |  valor  | valor   | valor   |     ... |  valor    | valor|
| ...    |  ...    | ...     | ...  |     ... |...      | ...|

Assim, e para acessar, basta que se olhe o endereço do primeiro byte do inteiro, e siga até o ultimo. <br>

Porém, seguindo essa mesma lógica, ao invés de armazenar sequências de bytes, podemos armazenar sequências de sequências, por exemplo uma lista de inteiros {9, 18, 7, 14, 18...}, se começa no endereço do primeiro valor, e a cada 4 bytes, sabe-se que o valor visto é outro.<br>
A partir dessa ideia de armazenar mais valores e fazer acesso a eles de maneira padronizada, surgem as estruturas de dados. <br>
A estrutura de lista lado a lado citada acima é chamada de array, e é a primeira estrutura de dados que será comentada abaixo.


## Arrays
A primeira estrutura de dados e a mais simples são os arrays. Também chamados de vetores. Arrays são uma estrutura de tamanho definido que permite o armazenamento de dados de um mesmo tipo. <br>
Ou seja, é possível ter um array int, um array float, um array double, um array char, ou qualquer outro tipo. Porém, não se pode misturar os tipos de dados, em um array de ints não se pode colocar um double, em um array de char não se pode colocar um float e etc. <br>
Arrays são sequências de valores de mesmo tipo, e portanto é fácil de determinar quando se termina de ler um valor e se passa para o próximo, afinal todos têm o mesmo tamanho.
```
./codigos/arrays.c

#include <stdio.h>

int main(void){
    int arrayInts[5] = {0, 1, 2, 3, 4};
    double arrayDouble[4] = {9.2, 1.3, 1.111, 3.14159};
    char arrayChar[9] = {'O', 'l', 'a', ' ', 'mfor(int i = 0; i < 3; i++){
    novoArray[i] = array[i];
}
', 'u', 'n', 'd', 'o'};

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
Uma característica ainda não citada dos arrays, e consequêntemente das strings, é que o final de todo array é determinado por um caractere especial, "NUL" ou '\0', o valor 0 na tabela ASCII. <br>
Essa é uma característica muito importante para strings, porque diferente de números, difícilmente será utilizado o valor 'NUL' nelas, enquanto que em array de inteiros é razoavelmente comum encontrar o valor 0. <br>
Por exemplo, caso seja desejado medir o tamanho de uma string, é possível simplesmente percorrer ela e contar.

```
./codigos/comprimento_string/stringLength.c -linha 10

int str_len(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
```
Acima podemos ver a implementação dessa ideia. <br>
É definida a função str_len() que recebe como parâmetro um array de caracteres de tamanho não definido. <br>
Dentro da função é iniciado o valor de i como 0. Inicia-se um loop while onde para cada valor que não for 'NUL', ou seja, para cada caracter da string, se adiciona 1 unidade ao valor de i. Uma vez que o valor 'NUL' for alcançado, ou seja, a string tiver terminado. O loop é quebrado e o valor de i é retornado pela função, assim devolvendo o comprimento da string. <br>

Vejamos o resultado dessa função
```
./codigos/comprimento_string/stringLength.c

#include <stdio.h>

int str_len(char str[]);


int main(void){
    printf("%d\n", str_len("Eu nao valho nada - Lagum"));
}

...
```
```
Terminal

codigos/comprimento_string$ make stringLength
cc     stringLength.c   -o stringLength
codigos/comprimento_string$ ./stringLength
25
codigos/comprimento_string$ 
```
Podemos ver que funcionou corretamente. Porém, essa é uma função bem comum de se desejar, afinal ela pode ser utilizada nas mais diversas lógicas. Logo, deve haver código pronto que permita realizar a mesma ação de modo que não se precise escrever essa mesma função toda vez. <br>
Acontece que a própria linguagem C, assim como muitas outras, dispõe de uma biblioteca que permite acessar uma função chamada strlen() que faz o mesmo que a função str_len().

```
./codigos/comprimento_string/bibliotecas.c

#include <stdio.h>
#include <string.h>

int main(void){
    printf("%d\n", strlen("Eu nao valho nada - Lagum"));
}
```
```
Terminal

codigos/comprimento_string$ make bibliotecas
cc     bibliotecas.c   -o bibliotecas
codigos/comprimento_string$ ./bibliotecas
25
codigos/comprimento_string$ 
```
Acima vemos que a biblioteca "string.h" foi adicionada ao arquivo em questão, assim como a biblioteca "stdio.h". Em algum momento a frente bibliotecas serão comentadas mais a fundo. Porém, é interessante pensar que existe um mundo de funcionalidades prontas que permitem a criação de estruturas muito complexas sem a necessidade de criar tudo do zero. <br>
É importante entender como as coisas funcionam no nível baixo, pois permite controlar o código e otimiza-lo de modo muito mais eficiente. Todavia, não há porque perder tempo com esses pequenos detalhes senão por aprendizado ou tarefas muito específicas. <br>
Online podem ser encontradas documentações oficiais e extra-oficiais para esses códigos externos, caso exista curiosidade, é possível pesquisar e saber o que está disponível para uso na internet. Normalmente esses guias estão escritos em inglês e em uma línguagem razoavelmente técnica, porém é possível encontrar versões em português e versões mais amigáveis, por assim dizer, principalmente se tratando de documentações extra-oficiais. <br>
Uma vez que temos acesso a strlen, por exemplo, podemos realizar algumas tarefas mais complexas, como por exemplo, transformar uma string com caracteres maiusculos e minusculos em uma string apenas com caracteres minusculos.
```
./codigos/lower/lower.c

#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "aMOr da MiNha VidA";
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] += 32;
        }
    }
    printf("%s\n", str);
}
```

```
Terminal

codigos/lower$ make lower
cc     lower.c   -o lower
codigos/lower$ ./lower
amor da minha vida
codigos/lower$ 
```
Acima vemos a implementação desse código. Primeiro é fedinida uma string de tamanho indeterminado. Esse valor foi inserído manualmente mas poderia vir de um banco de dados, interação com o usuário ou o que seja. <br>
Em seguida é iniciado um loop for, que vai de 0 até o comprimento da string dado por strlen() incrementando de um em um. <br>
Dentro do loop é feita uma checagem se o valor atual da string é maiusculo. Na tabela ASCII pode-se ver que 65 = 'A' e 90 = 'Z'. e o alfabeto maiusculo está contido entre esses valores, ou seja, se o valor do caracter sendo verificado for maiusculo, adicione 32 à ele. <br>
De novo, na tabela ASCII, cada letra minuscula é exatamente 32 unidades maior que sua respectiva versão maiuscula. Portanto ao adicionar 32 a uma letra maiuscula obtem-se sua versão minuscula. <br>
A mesma lógica poderia ser refletida para transformar todos os valores minusculos em maiusculos, bastaria subtrair 32 ao invés de somar. <br>
Depois que o loop se encerra, a string em minusculo é imprimida no terminal. <br>
Existem diversas outras maneiras de realizar essa mesma operação, mas essa é uma demonstração bem direta do que está sendo realizado. <br>
A manipulação de strings é um dos tópicos mais importantes quando se tratando de algoritmos, pois são a chave da criptografia moderna. Seja para encriptar mensagens em aplicativos móveis, ou esconder as senhas de uma empresa bancária, a manipulação de strings é extremamente importante. <br>
A própria programação como à conhecemos nasceu com Alan Turing tentando criar uma máquina capaz de decriptar as mensagens Nazistas que eram transmitidas por rádio durante a segunda guerra mundial. <br>
<br>
Até agora falamos de arrays. Porém, arrays têm um problema óbvio, uma vez definidos, seus tamanhos não podem ser modificados. Mesmo arrays que não têm seus comprimentos definidos explicitamente não podem ter seus tamanhos modificados uma vez instânciados. <br>
Portanto para adicionar um valor a um array, sería preciso definir um novo array, passar os valores do antigo array e adicionar o valor novo no novo array.
```
int array[3] = {1, 2, 3};
int novoArray[4] = array;

for(int i = 0; i < 3; i++){
    novoArray[i] = array[i];
}
novoArray[4] = 4;
```
Assim sendo, sería consumido um grande volume de memória conforme fosse necessário aumentar e diminuir um array. Portanto foram feitas necessárias diferentes estruturas de dados e estratégias de código para circundar esse problema. A frente nos aprofundaremos nessas estratégias com Linked Lists, Stacks e Queues.

## Ponteiros e Manipulação de memória
