# Algoritmos

## Sumário
- 
- 
- 
- 
- 
- 
- 
- 
- 
- 
- 


## O computador
#### Antes de falarmos sobre algoritmos, linguagens de programação, e desenvolvimento de software, é necessária uma breve explicação sobre como computadores funcionam, e principalmente o que eles são, afinal, eles são a base que nos permite escrever código.

### Um computador é uma máquina que a partir de uma lista de instruções, manipula dados a fim de gerar um resultado.

Que é um jeito chique de dizer que é uma calculadora com esteróides.


![Entrada->Processamento->Saída imagem de cs50-Harvard](imagens/input_output.png)[^1]
[^1]: Imagem de cs50-Harvard-Course

Um computador no geral pode ser representado como a imagem ilustra, uma máquina que recebe um input(entrada de dados) faz uma série de ações desconhecidas e devolve um resultado como output. <br>
O trabalho de um desenvolvedor de software é em suma, escrever as instruções de como os dados de entrada devem ser processados a fim de gerar o resultado esperado.



### Introdução a arquitetura de computadores

Geralmente o computador é representado por duas partes principais. Os dispositivos de entrada e saída(teclado, mouse, monitor, speakers e etc), e as partes internas que normalmente são resumidas ao processador e a memória.

Atualmente os componentes de um computador podem conter diversos componentes diferentes especializados em um tipo de operação. Porém, esses componentes podem ser generalizados como processador ou memória, por exemplo uma placa de vídeo é um processador (normalmente com memória imbutida) especializado no processamento de recursos gráficos. 

### Processador
Resumidamente, um processador é a parte responsável pelos calculos e operações lógicas do computador.<br>
**Cada Operação do processador é representada pela seguinte lista de procedimentos:**
- Busca de Instruções na memória
- Interpretação de uma instrução
- Execução da instrução intepretada
- gravação de eventuais resultados do processamento
- Reinicio do processo caso necessário

### Memória Ram[^2]
[^2]: Existem outros tipos de memória, mas normalmente, preocupa-se apenas com a memória ram, pois é de lá que são retirados os dados para o processamento.

Memória Ram pode ser visualizada como uma grande tabela com duas colunas. Endereço e dado:

| Endereço | Dado |
|----------|------|
|0x00000001|     0|
|0x00000002|     1|
|0x00000003|     1|
|0x00000004|     1|
|0x00000005|     0|
|0x00000006|     0|
|...|     ...|

Onde cada endereço é um local de registro de dados na memória e cada bloquinho pode armazenar um valor binário(0 ou 1). <br>
Mais a frente falaremos sobre estruturas de dados e como se manipulam esses endereços, por quê é importante entender bem a memória entre outros assuntos.

## Algoritmos - Definição, exemplo e contextualização
Um algoritmo pode ser definido como uma sequência finita de passos a fim de resolver um problema. <br>
Ou seja, programar, é é sobre buscar soluções computacionais para problemas. É muito comum existirem comparações entre programar e resolver charadas, ou quebra cabeças, pois intrinsecamente são o mesmo. Quando se busca codificar um programa, você está na verdade buscando uma sequência lógica de etapas que devem ser seguidas pelo seu computador para solucionar o problema.<br>
Mas algoritmos não são algo que pertence apenas ao mundo dos computadores. Na realidade, são uma forma computacional de representar aquilo que todos têm feito durante toda a sua vida, resolver situações problema.

### O exemplo clássico, a receita de bolo:
**Problema: Preparar um bolo**<br>
**Algoritmo de solução:**
```
- Pegar os ingredientes
- Colocar os ingredientes na mesa
- Pegue o liquidificador e a forma
- Coloque o forno para preaquecer na temperatura indicada
- Bata os ingredientes no liquidificador
- Coloque a massa formada na forma
- Leve a forma ao forno
- Espere o tempo indicado
- Desligue o forno
- Com uma luva, retire a forma com o bolo pronto
```

***Notam-se duas caracteristicas importantes dos algoritmos nesse exemplo.***
1. Existe uma sequência lógica na ordem das ações. <br>
    - Não se coloca a massa na forma sem antes pegar a forma
    - Não se coloca a forma no forno sem a massa
2. Algoritmos podem ser mais ou menos eficientes dependendo da lógica aplicada
    - Se você não ligar o forno enquanto prepara a massa, terá que esperar ele pré aquecer antes de levar a forma ao forno, o que acarretaria na perda de tempo de execução.

Vejamos um outro exemplo de algoritmo. <br>
**Problema: Pegar Onibus**
```
Ir até a parada
Enquanto (Onibus não chega) faça {
    esperar onibus
}
Subir no onibus
Se (Tem cartão de onibus) faça {
    Pegar cartão do onibus
    Passar o cartão na máquina
} 
Senão faça {
    Pegar dinheiro
    Pagar Passagem
    troco <-- dinheiro - passagem
    Guardar troco 
}
Passar pela Catraca
Enquanto (Não chegar no ponto) faça{
    Se (Existe lugar lazio) faça{
        Sentar no lugar vazio
        Esperar chegar no ponto
    }
    Senão {
        Esperar em pé até alguém sair ou até chegar no ponto
    }
}
Sair do onibus
```
[^3]
[^3]: Problema retirado de "Introdução a Algoritmos e Programação"(Editado)

***Notam-se mais algumas caracteristicas importantes dos algoritmos nesse exemplo.***
1. Um algoritmo pode realizar decisões
    - Se você não tem cartão de onibus, não podes passar na máquininha, então essa parte do código pode ser ignorada. Uma vez que você não tem esse cartão, terá que pagar com dinheiro.
    - Se não tem lugar no onibus, não tem como sentar, então vai ter que esperar alguém levantar.
2. Você pode repetir uma mesma tarefa de novo e de novo até que uma condição seja satisfeita. 
    - Enquanto o onibus não chega, você espera por ele
3. Você pode relacionar essas duas coisas a partir de uma lógica.
    - Enquanto você não chega no ponto, se tiver lugar disponível, sente e espere chegar no ponto. Se não tiver, fique em pé e espere alguém sair liberando um lugar, ou até chegar no ponto.
    - NOTA: O inverso, mesmo que não representado, também é possível. Podes realizar um loop, a partir de uma condição satisfeita ou não satisfeita.
4. É possível realizar operações matemáticas no código
    - Troco <- dinheiro - passagem
    - Nota: É possível realizar qualquer tipo de operação matemática no computador. Afinal, como dito antes, ele é uma calculadora com esteróides.
5. É possível salvar informações
    - A variavel troco recebeu o resultado da operação dinheiro - passagem. 
6. Nota-se uma grande quantidade de "{}" no código. Essa é uma notação comum em linguagens de programaçao para blocos de código. Que é basicamente uma forma explicita de separar seu código em partes. Nota-se que elas são usadas nas estruturas de repetição de ações e nas estruturas de condições. Ou seja, o que está dentro das chaves, está dentro da estrutura. 
7. Nota-se que o código que está dentro das chaves também possui um espaçamento a cada quebra de linha. Esse espaçamento é chamado identação, da mesma forma que as chaves, é um meio de organizar seu código, porém, as chaves são uma forma de organizar para que o computador consiga interpreta-lo, enquanto que a identação normalmente é feita para o desenvolvedor conseguir le-lo mais eficientemente.
8. Existe também no exemplo uma operação de comparação relacional. um "Ou".
    - Esperar em pé até alguém sair **ou** até chegar no ponto
    - Chamado de operador comparativo ou binário, ele compara duas afirmativas e se pelo menos uma delas for verdadeira, ele retorna uma resposta positiva. 


### A estrutura de um algoritmo

Após analizar alguns exemplos de algoritmo, foram citadas diversas caracteristicas sobre a estrutura deles. A partir dessas notas, sejam feitas as definições formais dessas caracteristicas percebidas.

>- Algoritmos funcionam com base em entrada e saída de dados
>- Algoritmos necessitam de uma sequência lógica bem definida de passos
>- Existem formas melhores e piores de se resolverem um problema computacionalmente
>- Algoritmos possuem estruturas de decisão
>- Algoritmos podem colocar um bloco de código em loop até que uma condição seja satisfeita
>- Algoritmos podem registrar dados na memória a partir das chamadas váriaveis, que são nomes dados a informação salva.
>- Ao programar, clareza do código, ou seja, o quão legível ele é para outras pessoas, importa.
>- Existem diferentes tipos de operadores, incluindo comparativos, atributivos e matemáticos.

### A lógica de programação e a postura de um programador
Programação, por muitos é imaginada como uma profissão repetitiva e com passos bem definidos, mas na realidade, o desenvolvimento de software é um trabalho que exige muita criatividade dos profissionais. <br>
Um programador é aquele que recebe uma situação problema abstrata, e a partir de uma lógica computacional desenvolvida durante seus estudos e sua carreira, traduz esse problema em código computacional que resulta na solução desse problema. A criatividade do programador é escencial justamente na etapa de tradução, afinal é importante juntar diversas partes que inicialmente aparentam não se conectar e criar algo que antes não existia. <br>
A postura de um programador por outro lado, deve antes de tudo, ser a de uma pessoa paciente. Não importa a quantidade de estudo ou pratica que um engenheiro ou engenheira de software tenha, ele sempre irá encontrar problemas na codificação, os tão chamados bugs. A consciência de que isso é natural, e que por mais irritante e desencorajador que isso seja, deve-se buscar a solução para que no final, consiga-se a gratificação de solucionar o problema e entregar o projeto.



### Entrada e Saída de dados
**De volta ao funcionamento do computador.**<br> 
Foi falado sobre como computadores são sistemas que recebem uma entrada de dados, realizam um processamento desses dados, e depois entregam uma saída dos dados processados. Porém, podem existir algoritmos que não recebem entrada mas entregam uma saída, podem existir algoritmos que recebem a entradamas não apresentam saída, e podem existir algoritmos que não recebem entrada nem apresentam uma saída. <br>
Por exemplo um algoritmo que realiza a soma 1 + 2. Ele não mostra que o resultado é 3, e esses números não foram inseridos por ninguém (Além do desenvolvedor que construiu o algoritmo). Portanto não existe entrada nem saída. Assim como Você pode inserir os valores da soma mas não receber saída com o resultado. Assim, como você pode receber o resultado da soma sem ter colocado os números.

**Exemplo de algoritmo que recebe entrada, realiza processamento e entrega uma saída de dados**<br>
algoritmo para o calculo da área de um circulo recebendo seu raio. (A = pi * r²)

```
pi <- 3.14159...
r <- input do usuário
A <- pi * r * r
imprima(A)
```

**Notas Sobre o algoritmo exemplificado**
1. O raio é definido a partir da inserção do valor pelo usuário, se caracterizando assim como input(Entrada).
2. imprima() é um recurso que mostra ao usuário o resultado calculado (output)
3. Esse é um algoritmo muito mais próximo do que veremos a frente, pois é composto por simples operações de entrada e/ou saída. Estando assim muito mais próximo do que um computador pode realizar naturalmente.


## Linguagens de programação e padrões computacionais

### Código binário, a linguagem dos computadores
É conhecimento comum de que computadores funcionam a partir de código binário. Ou seja, computadores se comunicam e funcionam a partir de sequências de bits(zeros e uns). Onde cada 1 representa a existência de pulso elétrico e cada 0 a não existência de pulsos elétricos.[^4]
[^4]: bits são definidos como a menor unidade de informação possível, uma resposta para uma pergunta de sim ou não. 1 sendo sim(verdadeiro) e 0 sendo não(falso).
<br>
Então uma pergunta válida sería, "Como escrever um texto em um computador se ele apenas aceita dois caractéres numéricos?"<br>
Uma resposta válida sería "Assim: 01001111 01101100 11100001 00100000 01101101 01110101 01101110 01100100 01101111"("Olá mundo" em binário). Ou seja, criando padrões binários que representam letras, e a combinação desses padrões formáriam palavras e textos.<br>
Que é bem próximo da forma que escrevemos e transmitimos informações em computadores, a partir de padrões de códigos binários definidos que representam determinado valor abstrato do mundo real.
Um exemplo desse tipo de padrão é a tabela ASCII que representa o alfabeto estadunidense junto de um conjunto de pontuações e caracteres especiais como pode ser visto no exemplo abaixo. <br>

| Caracter |   bin   | 	 Dec 	| Oct 	| Hex|
|----------|---------|----------|-------|----|
|...       | ...     |   ...    |  ...  | ...|
|@         |01000000 |	 64     | 0100  |0x40|
|A         |01000001 |	 65     | 0101  |0x41|
|B         |01000010 |	 66     | 0102  |0x42|
|C         |01000011 |	 67     | 0103  |0x43|
|D         |01000100 |	 68     | 0104  |0x44|
|E         |01000101 |	 69     | 0105  |0x45|
|F         |01000110 |	 70     | 0106  |0x46|
|G         |01000111 |	 71     | 0107  |0x47|
|H         |01001000 |	 72     | 0110  |0x48|
|I         |01001001 |	 73     | 0111  |0x49|
|J         |01001010 |	 74     | 0112  |0x4a|
|K         |01001001 |	 75     | 0113  |0x4b|
|L         |01001100 |	 76     | 0114  |0x4c|
| ...      |  ...    |    ...   | ...   | ...|[^5][^5]: trecho da tabela ascii.

A partir dessa ideia de padronização de determinados objetos em sequências de bits, define-se base para manipulação de informações em computadores. <br>
Porém, computadores continuam apenas interpretar bits. Por isso existem programas executáveis diferentes para a interpretação de tipos de arquivos diferentes. Um reprodutor de vídeos por exemplo, é um interpretador de arquivos de vídeo que traduz o código do vídeo em imagem na tela.etando uns e zeros, portanto, para que possamos ver textos, vídeos, imagens e etc, precisamos traduzir esses bits em conteúdo consumivel a partir de um interpretador de padrões, um tradutor de bits para conteúdo, basicamente. <br>
Por isso existem programas executáveis diferentes para a interpretação de tipos de arquivos diferentes. Um reprodutor de vídeos por exemplo, é um interpretador de arquivos de vídeo que traduz o código do vídeo em imagens na tela. <br>

### Linguagens de programação
No tópico anterior, foi falado sobre como o código binário é interpretado por diferentes interfaces a fim de mostrar ao usuário determinado tipo de informação. Porém, essas interfaces têm que ter sido construídas por alguém, e sendo o ser humano essa criatura péssima na interpretação de código binário, é difícil imaginar que alguém construíria um sistema tão complexo utilizando zeros e uns. Por isso não fizeram. <br>
Bom, alguém fez, mas não foi para sistemas como esses, os primeiros desenvolvedores, decidiram utilizar uma estratégia mais inteligente. Ainda na ideia de modelagem de padrões, foi decidida a construção de linguagens mais fáceis de serem interpretadas por seres humanos, como por exemplo, assembly. <br>
Assembly é por muitos definida como código de máquina legível pelo ser humano, o que significa que de um ponto de vista franco, ela é mais legivel que código binário, ao mesmo tempo que é extremamente difícil de compreender por ainda estar muito distante da linguagem natural. Além do que, para coda arquitetura de computador possui uma linguagem assembly diferente, ou seja, para programar para máquinas diferentes era necessário aprender linguagens muito distintas uma da outra, portanto, não existia portabilidade de software. Porém, com o passar do tempo, se desenvolveram linguagens mais modernas, que se aproximam mais da linguagem natural, e que são portáveis para diferentes máquinas, como por exemplo Pascal, Fortran, C e etc. C por exemplo é carinhosamente chamada como mãe das linguagens de programação modernas, pois sua sintaxe foi muito difundida, podendo ser vista similaridades a ela em quase todas as linguagens mais utilizadas, como Python, JavaScript e Rust.
Como a origem dos computadores e linguagens de programação se deu principalmente em países falantes da lingua inglesa, convencionou-se que as linguagens de programação utilizariam inglês para a sua sintaxe. Consequêntemente até hoje as palavras reservadas das linguagens, assim como a maioria dos códigos abertos estarão escritos em inglês.[^6]
[^6]: Por mais que os códigos estejam escritos em inglês, o idioma não é uma barreira para o aprendizado de programação, pois é muito mais sobre os padrões do uso, do que sobre o texto em si. Dito isso, a maior parte do conteúdo sobre esse tema está em inglês, então saber esse idioma é uma ferramenta muito util nesse meio.


## Ferramentas e técnologias para programação
A seguir, antes da introdução da linguagem C, serão apresentadas algumas ferramentas que facilitam o desenvolvimento, algumas tecnologias que permitem o software funcionar e algumas noções iniciais sobre a linguagem C e linguagens em geral. 

### IDEs e Editores de Texto
Uma IDE(Ambiente de desenvolvimento integrado)[^7] ou editores de texto especializados, tem o objetivo de facilitar e acelerar o desenvolvimento de software, apresentando diversas ferramentas e integrações, que manualmente trariam uma grande perda de tempo. Uma das caracteristicas mais uteis de um editor de texto é a identificação de problemas na sintaxe durante o desenvolvimento. Como por exemplo, esquecer o ponto e virgula no final do comando.
Sincronização com ferramentas de versionamento de código como Git e o próprio Github. Entre diversas outras ferramentas. <br>
Existe uma grande variedade de editores de texto no mercado, tanto gratuitos quanto pagos. Segundo o StackOverflow Survey de 2021, o Visual Studio Code é o mais popular, e ele é justamente o recomendado para o estudo desse Notebook, assim como de todos os próximos. <br>
Recomenda-se o uso do VSCode porque foi o utilizado no desenvolvimento de todo esse repositório, e também pois é uma ferramenta extremamente intuitiva e por ser muito utilizada terá uma vasta gama de conteúdo na internet para eventuais problemas que podem ser encontrados.
[^7]: Do inglês Integrated Development Enviroment

### Compiladores
Como dito anteriormente, computadores não compreendem nada exceto código de máquina, leia-se código binário. Portanto, o programa que se escreve em uma linguagem de programação, precisa, antes de rodar, ser traduzido para código de máquina, e generalizando o processo, a tradução do código é chamada de compilação, realizada por um compilador. <br>
Ou seja, contrário aos programas que transformam dados em binário, em informação interpretável por humanos, um compilador transforma o código compreensível por humanos, em linguagem de máquina, leia-se bits. Logo, conclui-se que para escrever código em uma linguagem de programação, no caso desse notebook, C, é necessário primeiro ter o compilador da linguagem instalado na máquina.[^8] <br>
Nesse notebook, recomendamos que seja utilizado um sistema linux, seja o sistema operacional em si, ou um Windows Subsystem for Linux, que pode ser feito o download na microsoft store. No VSCode, existem integrações com WSL que uma vez instaladas, permitem a programação sem problemas. A recomendação do sistema linux é devida a grande quantidade de ferramentas já inbutidas no sistema, inclusive um compilador da linguagem C, até porque o sistema operacional linux foi construido em C. As outras razões para o uso de linux serão abordadas a frente, mas caso seja o desejo do leitor, é possível a instalação de um compilador de C em outros sistemas operacionais. Existem diversos tutoriais na internet explicando o processo.
[^8]: Existem também ferramentas online que compilam o código em servidores, mas o compilador têm que ser rodado em algum lugar, seja na máquina local ou em um servidor externo.

### Terminal
Hoje, computadores têm interfaces gráficas que permitem a interação mais intuitiva com o sistema operacional, porém, no inicio da popularização dos computadores pessoais, não existia potência de processamento para essas interfaces, e toda a interação era realizada a partir de comandos de texto em um terminal. <br>
Ainda hoje, é possível interagir com o terminal do computador e a partir dele fazer tudo que é feito com interfaces gráficas, e as vezes de maneira mais rápida. O windows têm o powershell, o Linux Ubuntu têm o bash, e existem muitas outras opções que podem ser instaladas. <br>
O terminal é util principalmente para desenvolvedores, pois podem a partir de comandos simples, realizar ações mais eficiêntes, e também testar seu código com mensagens internas. Mas principalmente nos estágios iniciais de programação, o terminal é o principal ponto de interação do desenvolvedor com seu código, seja para testar uma parte do código, inserir dados, ou até rodar um sistema. Terminais são excenciais para o aprendizado. E nesse repositório a maioria dos códigos serão compilados e rodados em um terminal bash, então para seguir os passos e testar por si mesmo, é recomendado o uso do mesmo. 

### Linux
Linux é um sistema operacional assim como Windows e MacOS, porém, no mundo da programação, diferente do mundo dos computadores pessoais, linux é um sistema muito mais utilizado, seja na web para hospedar sites em servidores, para rodar sistemas cloud, em celulares com o android que é baseado em um sistema linux, entre diversas outras aplicações. Por isso mesmo que não no desenvolvimento, programadores e programadoras, acabarão em algum momento utilizando linux, provavelmente multiplas vezes. Portanto é lógico que se acostume logo de inicio com sistema, e com opções como o ubuntu que possuem uma interface tão intuitiva quanto um Windows ou MacOS. <br>
Além de ser muito usado para sistemas completos, linux é também imbuido de diversas ferramentas que facilitam e aceleram o desenvolvimento de software, como por exemplo uma sintaxe mais simples no terminal, e gerenciadores de pacotes, leia-se instaladores de programas muito mais rápidos e simples. 




## Linguagem C

Até aqui, esse notebook se focou na construção teórica das bases computacionais por trás da programação. Mas agora, com a introdução da linguagem C, junto das tecnicalidades da construção de um software, esse notebook irá se basear na utilização de exemplos práticos com explicações detalhadas a fim de apresentar as informações de forma melhor contextualizada. Assim dando uma visão mais clara de como funciona a construção de soluções computacionais na vida real. <br>
Antes do primeiro exemplo, serão definidos melhor alguns ultimos conceitos de programação, utilizando a linguagem C como base.

### Tipos primitivos
Como dito antes, computadores entendem apenas código binário, então se fazem necessários jeitos de diferênciar tipos de dados, afinal tanto números quanto letras são representados por bits. Portanto, ao utilizar dados no código é necessário passar para o computador qual é o tipo de dado ele deve esperar. <br>
Inicialmente falaremos sobre quatro tipos de dados: int para valores inteiros(...-2, -1, 0, 1, 2...), double para valores reais(...-1.0, -0.5, 0.0, 0.5, 1.0...), char para caracteres('a', 'b', 'c', 'd'...) e booleanos para verdadeiro ou falso(1 ou 0). <br>
Mais a frente explicaremos melhor sobre tipos de dados, mas por enquanto, entenda que são apenas uma forma de dizer ao computador como interpretar a informação que está sendo inserida e que cada tipo de dado tem intrinseco a si uma quantidade de informação que pode aguentar, por exemplo uma String é composta por uma sequência de caracteres, portanto um char só precisa guardar uma fração da informação necessária para uma string, então a fim de otimizar o uso da memória um char vai utilizar apenas uma fração do espaço que uma string utilizaria.

### Funções 
Falaremos mais sobre funções no tópico sobre paradigmas de programação, mas inicialmente o que é preciso entender, é que funções são algoritmos contidos em um bloco de código separado de seu código principal. Essas funções podem ser chamadas a partir de um nome, e realizar as operações contidas nelas. <br>
Funções podem receber dados e retornar resultados. Os dados recebidos são chamados de parâmetros, que usualmente são definidos dentro de "()", e os resultados são chamados de retorno. O retorno em especial, define o tipo da função, se uma função retorna um número inteiro, a função é do tipo int, se a função retorna um tipo de texto, a função é do tipo String, e se a função não retorna nada, ela é do tipo void(vazio). <br>
No momento determina-se a separação do código em funções, um meio de melhor organizar seus arquivos de programa. <br>
Em C e várias outras linguagens, uma função é criada, ou como chamamos, declarada, a partir da seguinte sintaxe: tipo nomeDaFunção(tipo parâmetro1, tipo parâmetro2 ...){}. Ou seja, uma função recebe parâmetros dentro de parênteses, e limita seu código dentro de {}.
```
//Exemplo

int nomeFuncao(int numero1, int numero2, double numeroReal, String texto){
    //código
    return algumValorInteiro;
}
```
Uma vez criadas, para utiliza-las, ao invés de ter que escrever todo o bloco de código contido nelas, basta "chamar" o nome da função, e dar a ela os parâmetros necessários, e o código será rodado. 


### Bibliotecas e importações
O reuso de código é uma coisa comum no mundo da programação. Afinal, se fosse necessária a reimplementação de um mesmo código a cada programa que o desenvolvedor escreve, sería perdida uma grande quantidade de tempo que poderia ser utilizada desenvolvendo códigos novos necessários. <br>
Quando os códigos são organizados em um "pacote" contendo vários programas externos ao arquivo principal, chamamos esse "pacote" ou conjunto de "pacotes" de biblioteca. Similarmente, chamamos o conjunto de adição de diferentes bibliotecas ou códigos externos a um arquivo de importações. <br>
Por padrão, adicionam-se todas as importações utilizadas em um arquivom no topo de seu código, tanto por organização quanto por funcionalidade em alguns casos. <br>
Algumas bibliotecas vêm disponiveis junto da linguagem de programação, e basta fazer sua importação no arquivo desejado. Porém também existem bibliotecas externas aos montes, que consistêm de código desenvolvido por outras pessoas, mas que pode ser feito o download, e depois o uso do código externo. <br>
E é claro que você pode reutilizar seu próprio código em diferentes arquivos a partir da importação do código desejado.

### Sintaxe da linguagem C
Cada linguagem de programação têm suas particularidades na escrita de código, e essas particularidades são chamadas de sintaxe. <br>
Na linguagem C, como nos exemplos anteriores, os blocos de código são separados por "{" e "}", e esses caracteres mostram ao computador onde começa e onde termina uma sequência de instruções. <br>
Cada instrução em C precisa ser terminada com ";", para que o computador compreenda que ali é o ponto onde ele executa uma instrução, para que ele possa partir para a próxima.
As importações são feitas a partir da inclusão no inicio do código, a partir do comando #include.
O código principal de um arquivo C é definido dentro dos limites de uma função, a chamada função main().

### Primeiro código em C
```
#include <stdio.h>

int main(void){
    printf("Olá, mundo!\n");

    return 0;
}
```
**Rodando o código em um bash ubuntu**
```
algoritmos/codigos/hello$ ls
hello.c
algoritmos/codigos/hello$ make hello 
cc     hello.c   -o hello
algoritmos/codigos/hello$ ls
hello  hello.c
algoritmos/codigos/hello$ ./hello
Olá, mundo!
algoritmos/codigos/hello$
``` 
### Análise do exemplo
Sobre o código C, vemos que existe um arquivo chamado stdio.h sendo importado para o arquivo. Essa é uma biblioteca inicial que vêm junto da linguagem C, e que possui algumas funções de input e output de valores, como por exemplo o printf(). <br>
Mais abaixo é definida a função principal como do tipo inteiro e recebendo void como parâmetro, o que significa que não recebe nenhum parâmetro. A função principal ser do tipo int é um padrão de código, onde o código irá retornar 0 se tudo correr bem ao rodar o programa, ou algum outro número, se existir algum problema. <br>
Logo abaixo a função printf() é utilizada, recebendo como parâmetros apenas uma String contendo o texto "Olá, mundo!\n" onde o \n é um termo especial que é interpretado como um comando para pular uma linha ao final do texto. De modo geral a função printf() imprime uma String no terminal. Um detalhe importante, é que pode-se notar que não é necessário declarar o tipo da função durante o chamado dela, basta chamar o nome seguido de "(" e ")" com os parâmetros necessários entre esses parênteses.<br>
De volta a função main, nota-se que no final é retornado o valor 0, assim, confirmando que tudo correu bem. 
Ou seja, podemos deduzir que ao rodar o programa o terminal imprimirá os dizeres dentro da função printf() como é visto no terminal abaixo.
No terminal exemplificado, vemos que estamos dentro do diretório algoritmos/codigos/hello. Que pode ser visto nesse repositório. O comando ls lista os arquivos e pastas presentes no diretório em que estamos. Ou seja, existe apenas um arquivo chamado hello.c que é onde se encontra o código do exemplo. <br>
Porém, para rodar esse código é necessário antes compila-lo para código de máquina, como dito em tópicos anteriores. make por sua vez, é um programa que automatiza exatamente esse processo, automaticamente criando um arquivo executável com o mesmo nome, ou seja, "hello" sem o ".c", como demonstrado na listagem posterior. Em seguida, basta rodar o código executável, que é feito a partir do ./, que é um jeito de dizer "Na pasta atual, execute o arquivo hello". e Logo abaixo pode-se ver o resultado como sendo o texto "Olá, mundo!"
Abaixo é apenas a linha de comando esperando a próxima instrução.
Uma nota válida para se fazer, é que caso se deseje modificar algo no código fonte, será necessário recompilar o programa para que a mudança tenha efeito, afinal o código executável é uma tradução estática do código que você compilou. <br>
Como por exemplo se ao invés de escrever "Olá, mundo!", fosse desejado escrever "Olá, linguagem C!"

```
#include <stdio.h>

int main(void){
    printf("Olá, linguagem C!\n");

    return 0;
}
```
```
algoritmos/codigos/hello$ ./hello
Olá, mundo!
algoritmos/codigos/hello$ make hello
cc     hello.c   -o hello
algoritmos/codigos/hello$ ./hello
Olá, linguagem C!
algoritmos/codigos/hello$ 
```
Como podemos ver, o código apenas fez o desejado após a recompilação. Também é interessante notar que o arquivo anterior foi "substituido" por uma nova versão com o mesmo nome, assim sendo, para voltar a versão anterior, sería preciso recompilar de novo. <br>
É fortemente recomendado para o aprendizado que sejam feitas diversas práticas, como por exemplo experimentar a modificação do código apresentado aqui, escrever o seu próprio, entre outras. Portanto, caso exista alguma dúvida que não seja suprida na análise do código, sinta-se livre para experimentar no programa e ver o que acontece. <br>
Uma pequena nota de cautela, é que não se deve assustar com erros. Erros vão acontecer muitas vezes, e o processo de programar não é apenas dar instruções, mas corrigir instruções erradas. Portanto, trate os bugs como o que eles são, problemas enfrentados por desenvolvedores em todas as etapas de sua carreira.

### Variáveis
### Operadores


### Próximo exemplo

Bom, vamos voltar em um dos exemplos apresentados anteriormente. Digamos que seja desejado calcular a área de um circulo a partir da inserção de um raio.
Podemos por exemplo construir uma função que recebe um raio por parâmetro e retorna um double área do circulo.
Vamos dividir esse problema em partes.
### $ A = \pi \times r^2 $
Portanto precisamos de pi. Sabemos que pi é uma constante cujo valor é aproximadamente 3.14159. Então devemos usar isso para calcular a área.
```
# include <stdio.h>

double areaCirculo(double r){
    double pi = 3.14159;

    return (pi * r * r); 
}

int main(void){
    printf("Área = %lf\n", areaCirculo(2.0));

    return 0;
}
```
### Análise do exemplo



















































## Fontes
- "INTRODUÇÃO A ALGORITMOS E PROGRAMAÇÃO" de FABRICIO FERRARI e CRISTIAN CECHINEL
- cs50 - Harvard's Introduction to Computer Science
- Tabela ascii: https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm