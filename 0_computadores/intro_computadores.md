# Introdução a computadores eletrônicos
#### Antes de falarmos sobre algoritmos, linguagens de programação, e desenvolvimento de software, é necessária uma breve explicação sobre como computadores funcionam, e principalmente o que eles são, afinal, eles são a base que nos permite escrever código.

## O que é um computador
Um computador é uma máquina que a partir de um conjunto de instruções, manipula dados a fim de gerar um resultado.<br>
Os computadores que são utilizados no desenvolvimento de software, são os chamados computadores baseados em componentes eletrônicos. Por exemplo desktops e notebooks.
<br>

## Código de binário e linguagens de programação
É conhecimento comum que computadores funcionam com base em código binário, mas pouco se fala além disso. <br>
O código binário é na realidade uma forma de representar dois valores de pulso elétrico, se resumindo à, "Existe pulso" e "Não existe pulso". 1 e 0 respectivamente. Cada unidade do código binário é chamada de bit, definidos como a menor unidade de informação possível, a resposta para uma pergunta de sim ou não. 0 e 1 sendo Não e Sim, respectivamente. <br>
O sistema de númeração binário é assim como o decimal, que utilizamos no dia a dia, um sistema válido, onde uma sequência de bits representa um valor numérico inteiro. Por exemplo 1001011 representa o número 75.
Esse sistema foi escolhido não por ser fácil do humano de escrever código em, mas sim porque era fácil do computador compreender. Por isso mais a frente foram desenvolvidas linguagens mais compreensíveis ao ser humano, começando pela segunda geração de línguagens, com o Assembly, que por muitos é definido como código de máquina interpretável por humanos. Porém essa linguagem ainda é difícilmente compreensível além de ser diferente para cada tipo de processador devido a sua funcionalidade estar intrinsecamente baseada na arquitetura eletrônica da máquina. Por esse tipo de problema se desenvolveram as linguagens de terceira geração, também chamadas de linguagens de scripting. Exemplos são C, Pascal e Basic. Por serem escritas em inglês, linguagens de terceira geração possuem uma sintaxe muito mais próxima da humana, sendo portanto mais compreensíveis além de rodarem em sistemas diversos, assim não necessitando de códigos diferentes para cada máquina. <br>
Existêm também linguagens de quarta geração, como por exemplo SQL, uma linguagem utilizada para manipulação de bases de dados. Porém para programação ainda nos baseamos nas línguagens de terceira geração.

## Representação de estruturas com código binário
Como dito no tópico anterior, computadores compreendem apenas código de máquina, ou seja, sequências de bits. Porém, esses bits são utilizados para representar coisas muito mais complexas, como por exemplo uma imagem, um vídeo, ou simplesmente um texto escrito. Para fazer isso determinam-se diversas sequências de bits representando um determinado padrão. Como falado anteriormente, sequências de bits representam números maiores, portanto, para representar sistemas mais complexos, como o alfabeto, atribui-se a cada caracter um valor numérico. Inicialmente para cada caracter do alfabeto estadunidense, junto de pontuações e alguns caracteres especiais, foi atribuido um valor definido por exatamente 8 bits, como mostrado na tabela ASCII abaixo.

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
| ...      |  ...    |    ...   | ...   | ...|

Hoje em dia existem diferentes sistemas padronizados para alfabetos que incluem mais caracteres e até emojis. Contudo, se a representação de caracteres fosse deterministica, ou seja, se todo 64 em binário representasse o caracter "@", o número 64 tería que ser representado por outra sequência, o que tornaria todo o sistema mais confuso, por isso, para além da representação, é necessário um contexto, ou seja, a sequêncoa 01000000 significa "@" apenas em um contexto de escrita, enquanto que representaria o número 64 em uma calculadora. Portanto, necessita-se de um programa que irá interpretar aquelas sequências de bits corretamente, por isso existêm diferentes extensões de arquivos e diferentes programas para abrir um determinado tipo de arquivo.
<br>

## bits Bytes e Unidades de informação
Foi comentado anteriormente que bits são a menor unidade de informação possível, o que é verdade, e tão pequeno é seu valor, que se torna inviável fazer a medida da quantidade de dados existentes hoje em termos de bits. É comum medir coisas em Mega Bytes, Giga Bytes ou até Tera Bytes. Que são unidades de informação muito maiores. Como na tabela ASCII cada Byte é igual a 8 bits de informação e as unidades seguintes são definidas a partir desse valor.

|     Unidade     |     Bytes     |
|-----------------|---------------|
| 1kB(Kilo Bytes) |1024 Bytes     |
| 1MB(Mega Bytes) |1024 kB        |
| 1GB(Giga Bytes) |1024 MB        |
| 1TB(Tera Bytes) |1024 GB        |

Ou seja, um HD com 1TB de armazenamento é capaz de armazenar aproximadamente 8,8 trilhões de bits. 
<br>

<br>
<br>
Esse é o final do caderno. Espero que tenham sido introduzidas todas as informações necessárias para inicio dos estudos em programação. 

[De volta ao início](#introdução-a-computadores-eletrônicos)