# Algoritmos

## Sumário

- ### [O que são algoritmos](##O-que-são-algoritmos)
- ### [Variaveis e Tipos de dados](##Variaveis-e-tipos-de-dados)
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
