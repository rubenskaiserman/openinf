# Algoritmos

## O que são algoritmos
De maneira direta, algoritmos são definidos como uma sequência de passos para a solução de um problema. <br>
Computacionalmente, chamamos de algoritmos, sequências lógicas construídas a partir de uma línguagem de programação para a solução de um problema computavel.
Como por exemplo, escrever "Olá, mundo!" no terminal.
```
./codigos/hello/hello.c

#include <stdio.h>

int main(void){
    printf("Olá, mundo!\n");

    return 0;
}
```
Acima vemos escrito o exemplo citado anteriormente, escrever "Olá, mundo!" no terminal. Vamos quebrar aos poucos o que está escrito, mas uma sugestão válida para esse e para todos os exemplos que virão é, caso não compreenda uma palavra, pesquise a tradução dela, isso pode ajudar a decifrar o seu significado no código. 

1. No inicio está descrito o endereço relativo do arquivo onde o código está escrito nesse repositório. Ou seja, o arquivo hello.c, está dentro de uma pasta chamada hello, que por sua vez está dentro de uma pasta chamada codigos que por sua vez está no mesmo diretório que esse notebook. (Fique a vontade para checar e ter um ponto de vista gráfico)

2. Podemos notar que o arquivo possui uma extensão ".c", ou seja, ele é um arquivo de código escrito na linguagem de programação C. 

3. Algo está sendo "incluido". Esse algo é uma biblioteca da línguagem C que nos permite fazer acesso a um conjunto de recursos externos. Falaremos mais sobre isso depois, no momento entenda apenas que é uma linha para que você possa usar comandos que não vêm direto com a línguagem.

4. Existe algum tipo de estrutura definida, a qual por enquanto vamos ater como a definição do nosso algoritmo. Basicamente a línguagem C vai rodar tudo que estiver entre "int main(void){" e "return 0;}". Falaremos melhor sobre o que são todas essas coisas no tópico sobre funções.

5. É feito um comando chamado printf(), que de algum modo imprime no terminal o texto que estiver escrito entre os parenteses. Dentris dos parenteses, nota-se que existe um padrão de escrever o texto entre aspas e é encerrado por um \n. Esse \n é um padrão interno dos textos que significa um sinal para quebrar a linha. Ou seja, o printf() não está apenas escrevendo "Olá, mundo!" no terminal, mas também pulando uma linha depois de fazer isso. Por fim, o comando é encerrado por ";", que é o modo de dizer ao C que a linha de comando chegou ao fim. Ou seja, aquele "return 0;" no final é algum tipo de linha de comando, dado que é encerrado com ";".

6. Por fim, sobre o espaçamento estranho. Nota-se que tudo que está entre "{" e "}" está espaçado para a direita. Isso é chamado de identação, utilizada para representar que o código está dentro do bloco, na linguagem C ele é utilizado para melhorar legibilidade do código tanto para a pessoa que o está escrevendo quanto para futuras pessoas que venham a o ler. Além de ser uma boa prática de escrita em linguagens como Python é a estrutura que define um bloco de código ao invés de "{" e "}".

## Variáveis e tipos de dados
Ao escrever código existe a necessidade de fazer dados persistirem, ou seja registrar informações. Variaveis são resumidamente um apelido dado à um pedaço da memória que pode ser usado para registrar informações uteis para o algoritmo sendo rodado.

### Tipos de dados
Para salvar um dado na memória, é primeiro importante saber quanto espaço será necessário e como o dado será interpretado. Por isso são definidos os tipos de dados. Existêm 5 tipos de dados principais: inteiros, reais, caracteres, booleanos e vetores. Falaremos mais sobre eles logo a seguir. Porém é claro que tipos reais exigem no geral mais memória do que tipos inteiros, pois eles preciam registrar a mesma quantidade de informação que um inteiro somado aos valores decimais do número. Também é necessário para o computador saber que existe um valor decimal, o que não é obvio afinal tudo que ele está lendo é uma sequência de zeros e uns, até onde a máquina sabe aquilo poderia ser um vídeo de um unicornio girando um bombolê. A frente explicaremos sobre cada tipo e serão dados exemplos demonstrando cada um, assim ficarão mais claros os aspectos citados.

### Char (Caracteres)
Caracteres são tipos de dados que podem conter uma letra. Por exemplo 'a', 'b', 'c', '\n', '/' e todos os outros valores dentro da tabela ASCII. Existêm duas caracteristicas que devem ser enfatizadas sobre o tipo char. Ele é um tipo inteiro, porém seus valores são lidos como caracteres da tabela ascii, e seu espaço no armazenamento é exatamente 1 Byte, ou 8 bits justamente porque ele é feito para armazenar exatamente um caracter. 
```
./codigos/char/char.c

#include <stdio.h>

int main(void){

    char a = 43;
    char b = 'b';

    return 0;
}
```
Acima vemos um exemplo de instância de variável e atribuição de valor a mesma. No caso às mesmas. A variável de nome **a**, do tipo char, esté tendo o valor 43 sendo atribuído a ela, enquanto que a variavel **b**, também do tipo char, está tendo o valor 'b' sendo atribuído a ela. Porém, ambas as ações são possíeveis. Caso se confira na tabela ASCII, o número 43 representa o caracter "+", e portanto a variavel **a** está recebendo o valor "+". <br>
Caso se modifique o código, é possível imprimir os valores no terminal e verificar, como será demonstrado a seguir
```
./codigos/char/char2.c

#include <stdio.h>

int main(void){

    char a = 43;
    char b = 'b';

    printf("A variavel a é: %c\n", a); //Linha adicionada
    printf("A variavel b é: %c\n", b); // Linha adicionada

    return 0;
}

```
```
Terminal

codigos/char$ make char2
cc     char2.c   -o char2
codigos/char$ ./char2
A variavel a é: +
A variavel b é: b
codigos/char$
```

Passando rápido pelo que acabou de ser feito: Foram adicionadas duas linhas no código original, ambas são printfs, que como sabemos imprimem texto no terminal. Esses printfs estão imbuídos de um texto declarando que a variavel **a** e a variavel **b** têm ambas o valor %c. Porém esse %c é o que podemos chamar de placeholder, algo que diz onde determinado valor deve ser inserido. No caso o valor %c é um placeholder que também determina que o que estará ali é um caracter. Após o \n e uma "," é inserido o valor que deve substituir o placeholder, no caso as respectivas variaveis a e b. <br>
Agora no terminal. Antes de rodar o código escrito, é necessário compilar ele, ou seja, traduzir para linguagem de máquina, e em alguns sistemas operacionais o make é um utilitário que automatiza essa tarefa. Falaremos mais sobre compilação quando nos aprofundarmos em linguagens de programação, por enquanto é apenas um detalhe. <br>
Feita a compilação, para rodar o arquivo basta dizer ao terminal para rodar o arquivo presente no diretório atual(./) chamado char2, que é o nome dado a versão compilada do char2.c. Depois disso é mostrado é imprimido no terminal o que foi solicitado, demonstrando que o valor da variavel **a** é sim "+" e da variavel **b** é sim 'b'. <br> <br>
Um ultimo detalhe a ser comentado sobre o tipo caracter, é que como tipo numérico, podem ser realizadas operações matemáticas com esse valor, assim como poderiam ser feitas com qualquer outro número, e esse é inclusive um jeito de por exemplo transformar uma letra minuscula em uma letra maiuscula. afinal 'b' = 98 e 'B' = 66, portanto 'B' = 'b' - 32. (Nesse caso =, é no sentido matemático e não como operador de atribuição)

### short, int e long (Inteiros)
Valores inteiros são capazes de armazenar valores numéricos positivos e negativos que não contenham casas decimais. Os diferentes tipos inteiros variam no aspecto de tamanho de armazenamento. 

|  Tipo  |  Tamanho  |          Valor min to max            |
|--------|-----------|--------------------------------------|
|short| 2 Bytes | - 32,768 até  32,767 |
| int | 4 Bytes | - 2,147,483,648 até 2,147,483,647
| long| 8 bytes | - 9,223,372,036,854,775,808 até 9,223,372,036,854,775,807

Normalmente utiliza-se apenas o int, pois não se necessita de números tão grandes quanto os suportados pelos long, e não é necessário se preocupar com desperdicios de memória para usar short, até porque memórias ram hoje em dia possuem bilhões de Bytes, economizar algumas dezenas ou até centenas de bytes verdadeiramente não causa melhoramentos de performance notaveis em quase nenhum caso.

```
./codigos/int/int.c

#include <stdio.h>

int main(void){
    short num1 = -32768;
    int num2 = 2147483647;
    long num3 = 9223372036854775807;

    printf("%d, %d, %ld\n", num1, num2, num3);

    return 0;
}
```
```
Terminal 

codigos/int$ make int
cc     int.c   -o int
codigos/int$ ./int
-32768, 2147483647, 9223372036854775807
codigos/int$ 
```
Ok, nesse exemplo podemos ver a instância de três variáveis inteiras, uma short contendo o menor valor permitido para ela, uma int contendo o maior valor permitido para ela e uma long também com o maior valor permitido a ela. Depois, podemos ver que esses valores estão sendo imprimidos no terminal através de um printf(). Só que dessa vez ele têm três placeholders, duas virgulas e um "quebra linha", e esses placeholders estão recebendo num1, num2 e num3 respectivamente, ou seja, short, int e long. short e int podem utilizar o mesmo placeholder %d para representar que ali haverá um valor inteiro, porém %ld é para representar que o local será utilizado por um inteiro muito grande, um long inteiro. <br>
No terminal podemos observar que o programa foi compilado e rodado sem problemas. <br>
Um pensamento válido é: "O que acontece se eu diminuir o valor short ou aumentar um dos outros dois?". A resposta para essa pergunta é, o código não sería compilado e iria apresentar um erro.
```
Terminal

codigos/int$ make int
cc     int.c   -o int
int.c: In function ‘main’:
int.c:6:17: warning: integer constant is so large that it is unsigned
    6 |     long num3 = 9223372036854775808;
      |                 ^~~~~~~~~~~~~~~~~~~
codigos/int$ 
```
O erro apresentado acima demonstra o que acontece caso tente inserir a um long um valor maior do que seu máximo. "Aviso: O valor inteiro é tão grande que não pode ser salvo na variavel do tipo long" Foi uma tradução livre e mais gentil do que o que estava escrito mas o sentido é o mesmo.

### float e double (reais)
Os tipos reais diferem dos tipos inteiros na sua capacidade de suportar valores com casas decimais. Como consequência, eles são geralmente consomem maior armazenamento, por isso não é eficiênte representar todos os números utilizando esse tipo de dados, porém são necessários em muitos casos.

|  Tipo  |  Tamanho  |          Valor min to max            | Precisão decimal |
|--------|-----------|--------------------------------------|------------------|
|float| 4 Bytes | 1.2E-38 to 3.4E+38 | 6 casas decimais |
| double| 8 Bytes | 2.3E-308 to 1.7E+308 | 15 casas decimais |
| long double | 10 bytes | 3.4E-4932 to 1.1E+4932 | 19 casas decimais |

Os valores minimos e máximos estão reduzidos a fim de serem vísiveis, mas em resumo, são valores muito grandes ou muito pequenos. Uma característica notável é que o valor double possui o dobro de armazenamento que um valor float, daí seu nome "double".

```
./codigos/double/double.c

#include <stdio.h>

int main(void){
    const double PI = 3.14159;
    double raio;
    raio = 4;
    double area = PI * raio * raio; 

    printf("A área do circulo é: %f\n", area);

    return 0;
}
```
```
Terminal 

codigos/double$ make double
cc     double.c   -o double
codigos/double$ ./double
A área do circulo é: 50.265440
codigos/double$ 
```
No exemplo acima podemos ver um uso de valores decimais em C usados para calcular a área de um circulo. <br>
Primeiramente é instanciado uma variavel **const**ante, ou seja, que não pode ter seu valor modificado, do tipo double, chamada PI, que recebe uma aproximação do valor de <img src="https://render.githubusercontent.com/render/math?math={\pi}#gh-light-mode-only">
<img src="https://render.githubusercontent.com/render/math?math={\color{white}\pi}#gh-dark-mode-only">.
Em seguida é instanciada mais uma variável do tipo double, chamada raio. <br> 
Nota-se uma característica ainda não citada: variáveis não constantes podem ser instânciadas sem valor atribuído a elas, e seu valor pode ser atribuído posteriormente. Leia-se, você pode reservar um espaço na memória com aquela variável, e só ocupar esse espaço depois. Porém, isso não pode ser feito com variáveis constantes, pois por definição a const define que aquele espaço não pode ser modificado depois da criação. <br>
A seguir no código é criada uma terceira variável do tipo double, que recebe o resultado da multiplicação entre PI e o quadrado do raio, consequêntemente a área do circulo. <br>
E por fim, esse resultado é imprimido no terminal através de um printf. Esse código em específico não está na melhor estrutura possível, por razões didáticas, mas voltaremos a esse mesmo algoritmo quando entrarmos no tópico sobre funções.


### Booleanos
Tipos booleanos são provavelmente os tipos de variáveis mais simples, ao mesmo tempo que mais utilizados no dia a dia. Esse tipo de dado pode representar apenas dois valores "True" ou "False", verdadeiro ou falso, normalmente são utilizados em expressões condicionais representando se uma afirmação é verdadeira ou falsa. <br>
Na linguagem C em específico não existe um tipo de dados booleanos, ao invés disso eles são representados como números, onde 0 representa false e qualquer outro número representa true. <br>
Falaremos mais sobre tipos booleans quando entrarmos nos próximos dois tópicos onde discutiremos sobre estruturas de decisão e operadores ternários e expressões booleanas.

## Condicionais
Estruturas condicionais são uma forma de "tomar decisões" no código. Em resumo é dado um valor booleano, se o valor for true, o código dentro do bloco condicional será rodado, se o valor for false, o bloco não será rodado.

```
#include <stdio.h>

int main(void){
    if(1) // if(valor booleano)
    { // Código se o valor não for 0
        printf("É verdadeiro\n");
    }
    else 
    { //Código se o valor for 0
        printf("É falso\n");
    }
    printf("Esse é rodado de qualquer forma\n"); // Código que é rodado independente do bloco

    return 0;
}
```

```
Terminal

codigos/condicional_1$ make condicional
cc     condicional.c   -o condicional
codigos/condicional_1$ ./condicional
É verdadeiro
Esse é rodado de qualquer forma
codigos/condicional_1$ 
```
Acima vemos um exemplo comentado explicando sobre como funciona uma estrutura condicional. Em tese existe o inicio marcado por if() onde dentro dos parenteses é inserido um valor booleano, caso o valor booleano seja True(diferente de zero) o primeiro bloco de código é rodado. Porém, se o valor booleano inserido for false, o bloco de código do else que será rodado. O else é basicamente uma determinação do que fazer se o valor booleano não for verdadeiro <br>
Depois dos blocos condicionais, é rodado um comando que não será rodado independente das condicionais, como esperado. <br>
Um comentário válido a respeito do exemplo, é que ele apresenta comentários sobre o que está acontecendo em cada etapa iniciadas por "//" Essas barras representam que o que vêm depois delas naquela linha é um comentário e deve ser completamente ignorada pela máquina. São basicamente um meio de se comunicar com quem quer que esteja lendo o código fonte. <br> <br>

Agora um pouco mais sobre a sintaxe da linguagem C. "{" e "}" como comentado no inicio desse caderno é um modo de definir um bloco para a máquina, basicamente se define que o conteúdo dentro das chaves está separado do restante do código ao redor dele. Pode-se interpretar o que está dentro das chaves como um grande comando composto por vários comandos. Portanto a sintaxe a seguir é uma sintaxe válida.
```
./codigos/condicional_2/condicional.c

#include <stdio.h>

int main(void){
    if(1) printf("É verdadeiro\n");
    else printf("É falso\n");
    printf("Esse é rodado de qualquer forma\n");

    return 0;
}
```
```
Terminal

codigos/condicional_2$ make condicional
cc     condicional.c   -o condicional
codigos/condicional_2$ ./condicional
É verdadeiro
Esse é rodado de qualquer forma
codigos/condicional_2$ 
```

Acima vemos que mesmo sem os blocos de código, o resultado é exatamente o mesmo. Porém, o código descrito está um pouco mal construído, é mais difícil de visualizar que a operação de printar per "É verdadeiro" pertence ao if. Mais a frente iremos falar sobre operadores ternários, que são uma maneira concisa de realizar pequenas operações condicionais. <br>
Porém, compreender que blocos de código permite que se compreenda o código a seguir:

```
./codigos/condicional_3/condicional.c

#include <stdio.h>

int main(void){
    if (3 > 5){
        printf("3 é maior que 5... Estranho\n");
    }
    else if(3 == 2 + 1){
        printf("Bom, 3 é sim igual a 3\n");
    }
    else 
    {
        printf("Agora você já está brincando...\n");
    }

    return 0;
}
```

```
codigos/condicional_3$ make condicional
cc     condicional.c   -o condicional
codigos/condicional_3$ ./condicional
Bom, 3 é sim igual a 3
codigos/condicional_3$ 
```

No código acima existem duas coisas a serem comentadas:
1. Ao invés de determinar numéricamente se a afirmativa era verdadeira ou falsa, foi entregue uma expressão booleana para que o resultado viesse consequentemente. O que acontece é que o operador ">", verifica se o valor do lado esquerdo é maior do que o valor do lado direito, e se isso for verdade ele retorna 1, e se isso não for verdade ele retorna zero. Esse operador, assim como "<", ">=", "<=", "==" e "!=" são o que chamamos de operadores binários.
    - "==" Retorna verdadeiro se ambos os lados forem iguais do contrário retorna falso
    - "<" Retorna verdadeiro se o lado esquerdo tiver um valor menor que o lado direito, do contrário retorna falso
    - ">" Retorna verdadeiro se o lado esquerdo tiver um valor maior do que o lado direito, do contrário retorna falso
    - "<=" Retorna verdadeiro se o lado esquerdo tiver um valor menor ou igual ao lado direito, do contrario retorna falso
    - ">=" Retorna verdadeiro se o lado esquerdo tiver um valor maior ou igual ao lado direito, do contrário retorna falso
    - "!=" Retorna verdadeiro se o lado esquerdo tiver um valor não igual ao lado direito, do contrário retorna falso

2. Pode-se notar a existência de uma divisão de possibilidades não binária. Leia-se, tem mais de duas opções. isso é feito porque o primeiro "else" ao invés rodar um comando ou um bloco, rodou um novo if, que por sua vez têm um diferente else. Essa concatenação de ifs  elses permite a criação de estruturas lógicas muito mais complexas, e é uma funcionalidade importante de se ter conhecimento sobre.

### Operador ternário
Em casos de operações binárias, ou seja, dada uma afirmativa, se ela for verdadeira, realize uma ação e caso seja falsa, execute outra ação, existe uma estrutura mais comprimida para tal formulação. A chamada operação ternária, que leva esse nome pois existêm três partes na operação:
1. Afirmativa: Um valor booleano
2. Operação caso o valor seja True
3. Operação caso o valor seja False

```
./codigos/ternario/ternario.c

#include <stdio.h>

int main(void){
    2 > 1 ? printf("Verdadeiro\n") : printf("Falso\n");

    return 0;
}
```

```
Terminal

codigos/ternario$ make ternario
cc     ternario.c   -o ternario
codigos/ternario$ ./ternario
Verdadeiro
codigos/ternario$ 
``` 

Acima vemos um código que verifica se 2 > 1, e se essa afirmativa for verdadeira, imprime no terminal o texto "Verdadeiro", e se essa afirmativa for falsa, imrpime no terminal "Falso". <br>
Como é de se esperar o cvalor "Verdadeiro" é imprido no terminal. Com isso podemos definir que o formato de um operador ternário é:
```
condição ? operação caso verdadeiro : operação caso falso
```
O valor de operadores ternários vêm na redução do espaço consumido pelo código, e são uma excelente opção para realizar ações simples com base em operações booleanas. Contudo, estruturas que possuem maior complexidade são mais legíveis em estruturas if/else comuns. portanto, operadores ternários devem ser usados com cautela, apenas quando irão diminuir o código sem causar o detrimento da legibilidade do código.

### Switch Case
Switch case é outra estrutura de decisões. Porém, opostamente ao operador ternário, ela é dirigida para situações onde existe uma série de possibilidades catalogadas. Por exemplo, para um menu de opções, cada opção que o usuário pode selecionar é um caso diferente para o switch.

```
./codigos/switch/case.c

#include <stdio.h>

int main(void){
    int variavel;

    variavel = 3;
    switch (variavel)
    {
    case 1 :
        printf("O valor é: 1\n");
        break;
    case 2 :
        printf("O valor é: 2\n");
        break;
    case 3 :
        printf("O valor é: 3\n");
        break;
    case 4 :
        printf("O valor é: 4\n");
        break;
    default:
        printf("O valor não é nem 1, nem 2, nem 3 e nem 4\n");
        break;
    }
}
```

```
Terminal

codigos/switch$ make case
cc     case.c   -o case
kaiserman@dev:~/Dev/informatica_open_source/1_algoritmos/codigos/switch$ ./case
O valor é: 3
kaiserman@dev:~/Dev/informatica_open_source/1_algoritmos/codigos/switch$ 
```
Acima vemos uma estrutura switch construída. E a partir dela podemos perceber sua estrutura:
```
switch(valor) {
    case x:
        operação;
        operação;
        ...
        break;
    case y:
        operação;
        operação;
        ...
        break;
    case z:
        operação;
        operação;
        ...
        break;
    ...
    default:
        operação;
        operação;
        ...
        break;
}
```
Então a partir dessa estrutura podemos determinar que o switch recebe uma "variavel" externa, e cada possibilidade de valor para ela é representada por um case, e por fim, caso nenhuma das possibilidades seja satisfeita o caso padrão é chamado(default). <br>
Uma versão dessa estrutura usando if/else sería menos direta, como podemos ver abaixo:

```
if(valor == x){
    operação;
    operação;
    ...
} 
else if(valor == y) {
    operação;
    operação;
    ...
} 
else if(valor == z) {
    operação;
    operação;
    ...
}
...
else {
    operação;
    operação;
    ...
}
```
Portanto switch é uma opção válida para operações repetitivas como essa. Em alguns casos essa estrutura é considerada mais legível e portanto mais fácil de se realizar manutenção no longo termo. <br>
Contudo, algumas linguagens como Python e Rust não têm suporte ao switch case por ser considerado de certo modo desnecessário devido a possibilidade da utilização de else ifs, portanto o considerando redundante. Todavia, o conhecimento a respeito dessa estrutura ainda é importanta dado que pode ser encontrada em código legado, ou usada em código novo de línguagens que suportem esse tipo de estrutura.

## Funções
Funções, podem ser vistas como blocos de código com nome. Assim como variáveis, porém ao invés de guardar dados, guardam instruções. A organização do código através da separação em diversas funções é um método eficaz para tornar o código mais legível e organizado. <br>
Escrever o código linearmente torna-se inviável conforme o tamanho do código cresce, por isso foi desenvolvida esse método, onde você pode escrever um código separado que será "chamado" em algum momento. <br>
As funções possuem duas caracteristicas principais:
1. Parâmetros: basicamente variáveis externas a função que são passadas para ela, a fim de que a partir delas a função realize uma série de operações.
2. Retorno: Essa é uma caracteristica presente na maioria das funções, retorno é basicamente o resultado que a função gera, sendo esse valor o definidor do tipo da função. Por exemplo, uma função que retorna um valor inteiro, é uma função do tipo int, uma função que retorna um caracter, é uma função do tipo caracter, e assim por diante.<br>

A linguagem C, que temos utilizado até agora, é intrinsecamente uma línguagem funcional, o que significa que todo o funcionamento dela gira em torno de funções. Tanto é que em todos os exemplos foram utilizadas funções. 
```
int main(){

    return 0;
}
```
Acima vemos uma estrutura presente em todos os exemplos. Essa é a função main. Ela basicamente define o escopo do algoritmo. Analizando a estrutura podemos ter uma melhor noção de como são algoritmos de modo geral.
Como dito antes, funções são blocos de código com nomes, portanto nada mais justo do que definir o nome da função e em seguida definir o bloco de código ao que ela se refere.
```
main(){

}
```
Dentro de todas as funções main escritas até o momento está presente um comando em comum.
```
return 0;
```
O que o return faz, é retornar o resultado da função. Porém, a função main() de um código C não será chamada em nenhuma outra parte do código, portanto o retorno dela não é normalmente utilizado diretamenre, é apenas uma convenção retornar 0 se o código faz como é esperado, e retornar 1 se o código fizer algo de errado. Como até o momento não houve possibilidade do código dar errado, com exceção de erro do programador, até então apenas retornamos 0. <br>
Mas de modo geral, em toda função que gera retorno, é necessário utilizar o comando return, e determinar o valor que será retornado. <br>
Mais uma coisa importante sobre o return, é que ele determina o tipo da função. A função main por exemplo, retorna 0 ou 1, e portanto, ela se caracteriza como uma função do tipo int.
```
int main(){
    return 0;
}
```
Por isso int é escrito antes do nome, da mesma forma que se faz com variáveis. <br>

Porém, existe uma parte faltando no código acima. Em todos os códigos escritos até aqui a estrutura era exatamente como mostrada abaixo:
```
int main(void){
    return 0;
}
```
O "void" entre os parenteses, é um sinal para a função de que não serão passados parâmetros, ou seja, não serão entregues variáveis externas para serem utilizadas dentro da função. Porém, na maioria das vezes serão utilizadas, como por exemplo em uma função do tipo inteiro que realize a soma entre dois inteiros **a** e **b**.
```
./codigos/soma/soma.c -linha 3

int soma(int a, int b) {
    return a + b
}
```
E se quisermos usar essa função, para por exemplo calcular a soma de 2 e 3, podemos chama-la dentro da função main e printar o resultado.

```
./codigos/soma/soma.c -linha 8

int main(void){
    int s = soma(2, 3);
    printf("Soma de 2, e 3: %d\n", s);

    return 0;
}
```
```
Terminal

codigos/soma$ make soma
cc     soma.c   -o soma
codigos/soma$ ./soma
Soma de 2, e 3: 5
codigos/soma$ 
```
Acima podemos notar algumas caracteristicas das funções. 
1. Ao chama-las, não é necessário declarar seu tipo, apenas o nome e seus parâmetros entre parenteses.
2. O resultado(retorno) de funções pode ser registrado em variáveis, desde que essas variáveis sejam do mesmo tipo que a função.
3. é necessário declarar o tipo dos parâmetros durante a construção da função. Portanto o valor entregue deve estar de acordo com o declarado na instância da função.
4. É possível chamar uma função dentro de outra função, assim como foi feito chamando a função soma, dentro da função main, mesmo uma estando fora da outra.


Algumas notas importantes sobre funções são:
1. O chamado de funções são definidas por:
```
nomeDaFunção()
```
Ou seja, mesmo que a função não receba parâmetros, os parenteses devem estar inclusos no chamado da função. 

2. Funções podem não ter retorno, são as chamadas funções void, ou funções vazias. 
```
./codigos/funcaoVoid/void.c

#include <stdio.h>

void funcaoSemRetorno(void){
    printf("Eu não tenho retorno\n");
}

int main(void){
    funcaoSemRetorno();

    return 0;
}
```
```
Terminal

codigos/funcaoVoid$ make void
cc     void.c   -o void
codigos/funcaoVoid$ ./void
Eu não tenho retorno
codigos/funcaoVoid$ 
```
Portanto, funções podem ter utilidade mesmo que não gerem nenhum retorno. Funções que mostram imagem na tela por exemplo, não necessáriamente precisam retornar nenhum valor, mas mesmo assim geram um resultado desejavel.

3. Funções devem ser instanciadas antes de seu chamado, ou seja, antes de chamar a função, ela deve ser escrita, como por exemplo a função soma, que é descrita antes de seu chamado na função main. Porém, é possível definir uma função depois de sua instância. Como mostrado no exemplo abaixo de uma função que calcula a área de um círculo:
```
./codigos/circulo/circulo.c

#include <stdio.h>

double areaCirculo(double r);

int main(void){
    double area = areaCirculo(2);
    printf("Area: %f\n", area);

    return 0;
}

double areaCirculo(double r){
    const double PI = 3.14159;
    return PI * r * r;
}
```
```
Terminal

codigos/circulo$ make circulo
cc     circulo.c   -o circulo
/circulo$ ./circulo
Area: 12.566360
codigos/circulo$ 
```
Acima podemos ver que é possível chamar uma função antes da definição do escopo dela, desde ela tenha sido declarada antes. Ou seja, é como se fosse possível avisar ao computador que em algum momento abaixo no código a função será definida.

4. Variáveis possuem um escopo. Ou seja, uma variável só pode ser acessada dentro do mesmo bloco de código onde ela foi criada. Ou seja, se é criada uma variável qualquer dentro da função main, ela não pode ser acessada normalmente na função soma, a não ser que seja passada por parâmetro, como vimos anteriormente.
```
./codigos/escopo/escopo.c -linha 3

void randomFunction();
char outraFuncao();

int main(void){
    char variavelInacessivel = 'a';
    printf("%c", outraFuncao());

    return 1;
}

char outraFuncao(void){
    return variavelInacessivel;
}
```
```
Terminal

codigos/escopo$ make escopo
cc     escopo.c   -o escopo
escopo.c: In function ‘outraFuncao’:
escopo.c:14:12: error: ‘variavelInacessivel’ undeclared (first use in this function)
   14 |     return variavelInacessivel;
      |            ^~~~~~~~~~~~~~~~~~~
escopo.c:14:12: note: each undeclared identifier is reported only once for each function it appears in
make: *** [<embutido>: escopo] Erro 1
codigos/escopo$ 
```
Como podemos ver acima, ao tentar compilar o código houve um erro. O problema está na tentativa de acessar a variável "variavelInacessivel" dentro da função que está fora do escopo dela. 
```
"Erro dentro da função 'outraFuncao'"
linha 14: erro: 'return variavelInacessivel'
14 | return variavelInacessivel;
   |        ^~~~~~~~~~~~~~~~~~~
...
```

### Recursividade
Um dos tópicos mais importantes da programação funcional é a recursividade. Falaremos mais sobre ela no módulo sobre estruturas de dados. Porém, esse recurso se trata de chamar a função dentro de si mesma. Por exemplo, imagine que você quer imprimir no terminal uma contagem regressiva. Ao invés de escrever a mensagem 10 vezes, é possível escrever uma função que recebe como parâmetro o valor atual, imprima ele, e dentro da função chame ela mesma porém passando o valor inicial menos 1. Vejamos esse exemplo abaixo:

```
./codigos/recursividade_1/regressiva.c -linha 3

void contagemRegressiva(int num);

int main(void){
    contagemRegressiva(10);
    return 0;
}

void contagemRegressiva(int num){
    if(num == 0){
        printf("%d\n", num);
    }
    else{
        printf("%d\n", num);
        contagemRegressiva(num - 1);
    }
}

```
```
Terminal

codigos/recursividade_1$ make regressiva
cc     regressiva.c   -o regressiva
codigos/recursividade_1$ ./regressiva
10
9
8
7
6
5
4
3
2
1
0
codigos/recursividade_1$ 
```
Basicamente é feita uma verificação condicional simples: Se o numero passado por parâmetro for 0, então a contagem acabou, apenas imprima zero no terminal. Se não for 0, significa que ainda estamos contando, imprima o valor atual, e chame a função de contagem regressiva de novo passando o mesmo valor num - 1. <br>
Quando chamada de novo, a função repetira o processo. Ou seja, a função chamará a si mesma até que o valor seja 0. Quando tratamos de estruturas de dados, muitas vezes será necessário utilizar recursividade para acessar as informações dentro delas, pois de outros modos sería muito custoso computacionalmente. <br>
Uma nota sobre recursividade é que deve-se tomar cuidado de não criar um processo de recursão infinita. Ou seja, a função chama ela mesma de novo e de novo sem nunca parar. Por exemplo, o que impede o codigo acima de entrar em recursão infinita, é que primeiro, quando num é 0, a função não se chama de novo, e segundo, sempre que não é zero, é passado o num -1 para o próximo chamado, ou seja, sendo o num inicial um inteiro positivo, em algum momento num será igual a zero. Contudo, caso inserido um número negativo como num inicial, o programa entrará em recursão infinita e deverá ser parado a força, do contrário consumirá toda a memória disponível no computador.

```
./codigos/recursividade_2/recursao_infinita.c

int main(void){
    contagemRegressiva(-1);

    return 1;
}

```

```
Terminal

codigos/recursividade_2$ make recursao_infinita
cc     recursao_infinita.c   -o recursao_infinita
codigos/recursividade_2$ ./recursao_infinita
-1
-2
-3
-4
...
-261688
-261689
-261690
-261691
Falha de segmentação (imagem do núcleo gravada)
codigos/recursividade_2$ 
```
Acima vemos o exemplo de recursão infinita citado. O valor num inicial é definido como -1, e portanto a função irá chamar a si mesma até não conseguir mais. Como visto no terminal abaixo, a função chamou a si mesma 261690 vezes, até que o computador onde o código foi rodado parasse ela a força após uma falha de segmentação. <br>
O problema acima pode ser facilmente evitado fazendo uma verificação se o valor inicial num é negativo assim como se verificou se ele é zero. Porém, esse exemplo foi apenas para demonstrar um dos cuidados necessários ao utilizar recursividade.

## Loops
Como comentado antes, muitas vezes é preciso repetir uma mesma sequência de operações com poucas alterações. Loops são basicamente uma estrutura feita para isso. Basicamente define-se um bloco de código e uma regra para a quebra do loop. Vejamos como sería uma contagem regressiva utilizando loops<br>
```
./codigos/loops_1/regressiva.c

#include <stdio.h>

int main(void){
    int i = 10;
    while(i >= 0){
        printf("%d\n", i);
        i--;
    } 
}
```

```
Terminal
codigos/loops_1$ make regressiva
cc     regressiva.c   -o regressiva
codigos/loops_1$ ./regressiva
10
9
8
7
6
5
4
3
2
1
0
kaiserman@dev:~/Dev/informatica_open_source/1_algoritmos/codigos/loops_1$ 
```
Acima podemos ver que o resultado é exatamente o mesmo do processo recursivo que definimos anteriormente, mas a estrutura é completamente diferente. Primeiro é definida uma variável inteira "i" iniciada com o valor 10. Em seguida é definido o bloco do loop while sob a regra de que deve repetir os comandos do bloco enquanto i for maior ou igual à 0. <br>
Já dentro do bloco a variável i é imprimida no terminal, e na linha abaixo utiliza-se um chamado operador unário "--" que reduz o valor de i em 1 unidade. Daí, quando o valor de i for -1, o loop vai parar de se repetir. <br>
Quanto a diferença entre loops e recursividade. Realizar esse tipo de tarefa utilizando recursão, é algumas vezes um método não muito eficiente por conta do alto custo de memória. Porém, loops são uma estrutura que mesmo consumindo maior poder de processamento, utilizam menos memória, então em muitos casos podem ser a melhor opção. <br>

### While loop vs For loop
Existem dois tipos principais de estruturas de repetição(loops). Os loops "while", e os "loops" for. A diferença entre eles é que o while recebe uma condição (valor booleano) e realizará o loop até que essa condição o diga para parar. Já o for, recebe três coisas, uma variável numérica, uma regra booleana e uma operação, a variável é o valor que será operado, a regra é o que determina se o loop será realizado e a operação modifica a variável determinada. Uma contagem regressiva com loop for sería formulada da seguinte maneira:
```
./codigos/loops_2/regressiva.c

#include <stdio.h>

int main(void){
    for(int i = 10; i >= 0; i--){
        printf("%d\n", i);
    }

    return 0;
}
```
```
codigos/loops_2$ make regressiva
cc     regressiva.c   -o regressiva
codigos/loops_2$ ./regressiva
10
9
8
7
6
5
4
3
2
1
0
codigos/loops_2$ 
```
Como pode-se ver, loops têm uma estrutura mais bem definida que permite muitas vezes reduzir a quantidade de linhas do código, assim tornando-o mais legível. Muitas vezes os loops têm uma quantidade de repetições pré definidas, e portanto for se torna uma opção muito válida na maioria das vezes. Contudo, algumas vezes não se sabe previamente quando se deve parar um loop, portanto o while é uma opção importante também. <br>
No próximo módulo, falaremos sobre estruturas de dados, onde serão utilizadas todas as ferramentas comentadas nesse módulo, portanto, caso alguma definição tenha ficado clara, logo em seguida serão apresentadas diversos exemplos de utilização delas, o que deve esclarecer dúvidas remanecentes.

## Exercícios
Nota 1: Assim como todos os exemplos, os gabaritos estarão escritos na linguagem C.
Nota 2: As respostas dos exercícios estarão todas na pasta "./gabaritos_exercicios"


1. ### Escreva um programa que imprima a mensagem "Olá, mundo!" no terminal e pule uma linha logo depois.
2. ### Escreva um programa que receba um número pelo terminal, e imprima o dobro desse número
>    - dicas: o pacote <stdio.h> que traz a função printf() também contém uma função que consegue ler valores do terminal:
>   ```
>    Formato
>
>    scanf("%placeholder", &variavel)
>    ```
>    ```
>    Exemplo
>
>    int main(void){
>        int numeroInteiro;
>        scanf("%d", &numeroInteiro); // Recebe um número inteiro do terminal e armazena na variável numeroInteiro
>        printf("%d", numeroInteiro); //Imprime a variável numeroInteiro no terminal
>        return 0;
>    }
>    ``` 
<br>

3. Faça um programa que receba 4 valores e imprima no terminal a média aritmética entre eles. <br>
Média aritmética: 
<img src="https://render.githubusercontent.com/render/math?math={\huge \frac{n_1 %2b n_2 %2b n_3... n_m}{m}}#gh-light-mode-only">

<img src="https://render.githubusercontent.com/render/math?math={\color{white} \huge \frac{n_1 %2b n_2 %2b n_3... n_m}{m}}#gh-dark-mode-only">

