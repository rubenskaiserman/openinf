# Algoritmos

## Sumário

- ### [O que são algoritmos](##O-que-são-algoritmos)
- ### [Variaveis e Tipos de dados](##Variáveis-e-tipos-de-dados)
- ### [Condicionais](##condicionais)
- ### [Funções](##Funções)
- ### [Loops](##Loops)


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

- Primeiro, no inicio está descrito o endereço relativo do arquivo onde o código está escrito nesse repositório. Ou seja, o arquivo hello.c, está dentro de uma pasta chamada hello, que por sua vez está dentro de uma pasta chamada codigos que por sua vez está no mesmo diretório que esse notebook. (Fique a vontade para checar e ter um ponto de vista gráfico)

- Segundo, podemos notar que o arquivo possui uma extensão ".c", ou seja, ele é um arquivo de código escrito na linguagem de programação C. 

- Terceiro, Algo está sendo "incluido". Esse algo é uma biblioteca da línguagem C que nos permite fazer acesso a um conjunto de recursos externos. Falaremos mais sobre isso depois, no momento entenda apenas que é uma linha para que você possa usar comandos que não vêm direto com a línguagem.

- Quarto, existe algum tipo de estrutura definida, a qual por enquanto vamos ater como a definição do nosso algoritmo. Basicamente a línguagem C vai rodar tudo que estiver entre "int main(void){" e "return 0;}". Falaremos melhor sobre o que são todas essas coisas no tópico sobre funções.

- Quinto, é feito um comando chamado printf(), que de algum modo imprime no terminal o texto que estiver escrito entre os parenteses. Dentris dos parenteses, nota-se que existe um padrão de escrever o texto entre aspas e é encerrado por um \n. Esse \n é um padrão interno dos textos que significa um sinal para quebrar a linha. Ou seja, o printf() não está apenas escrevendo "Olá, mundo!" no terminal, mas também pulando uma linha depois de fazer isso. Por fim, o comando é encerrado por ";", que é o modo de dizer ao C que a linha de comando chegou ao fim. Ou seja, aquele "return 0;" no final é algum tipo de linha de comando, dado que é encerrado com ";".

- Sexto, e por fim sobre o espaçamento estranho. Nota-se que tudo que está entre "{" e "}" está espaçado para a direita. Isso é chamado de identação, utilizada para representar que o código está dentro do bloco, na linguagem C ele é utilizado para melhorar legibilidade do código tanto para a pessoa que o está escrevendo quanto para futuras pessoas que venham a o ler. Além de ser uma boa prática de escrita em linguagens como Python é a estrutura que define um bloco de código ao invés de "{" e "}".

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
Na linguagem C em específico não existe um tipo de dados booleanos, ao invés disso eles são representados como 0 ou 1, sendo falso e verdadeiro respectivamente em um. <br>
Falaremos mais sobre tipos booleans quando entrarmos nos próximos dois tópicos onde discutiremos sobre estruturas de decisão e operadores ternários e expressões booleanas.