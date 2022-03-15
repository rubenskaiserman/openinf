# Resumão da massa

## Meta-Explicação
Como esse é o primeiro resumo, é válido tomar um espaço para explicar como eles serão organizados. 
- Primeiro, no final de cada resumo terão links indicando para fontes de aprofundamento nos temas tratados.
- Segundo é importante ressaltar que aqui serão priorizadas informações objetivas e como o próprio nome diz, resumidas. Portanto, o conteúdo não será coberto em sua integridade. Caso queira se aprofundar nos temas, é interessante que você leia o pdf ou acesse os conteúdos indicados ao final do resumo.
- Terceiro, já bebeu água? hidrate-se e tenha bons estudos :)

## Capitulo 1 - O computador
### Antes de falar dos algoritmos, linguagens de programação e toda essa coisa maravilhosa, é claro que é necessário entender como isso tudo funciona. Afinal, não são feitiços que você escreve e o computador faz mágica (Por mais que fosse ser bem mais legal se fosse assim).

### "Um computador é uma máquina que manipula dados a partir de uma lista de instruções."
Leia-se, uma calculadora com esteróides. Um computador nada mais é do que uma calculadora inconcebivelmente potente, que recebe uma série de instruções, leia-se código binário, e faz uma série de contas com isso, e depois devolve um ou mais resultados.
A partir daqui já podemos chegar a uma definição resumida do que é o computador.
![Entrada->Processamento->Saída imagem de cs50-Harvard](imagens/input_output.png)[^1]
[^1]: Imagem de cs50-Harvard-Course

A imagem acima demonstra bem a ideia, do lado esquerdo nós temos um input, leia-se entrada de dados, do lado direito nós temos o output, leia-se saída de dados, e no meio dessas duas coisas temos um quadrado mágico conhecido como computador.

### 1.2 A arquitetura básica[^2]
[^2]: 1.1 A história dos computadores não é um tópico muito relevante para a compreensão dos algoritmos então, pulamos direto para a arquitetura dos computadores digitais eletrônicos.

O computador é representado por duas partes principais. Os dispositivos de entrada e saída(teclado, mouse, monitor, speakers e etc), e as partes internas que normalmente são resumidas ao processador e a memória.

Uma versão mais complexa e específica de uma arquitetura pode conter placa mãe, memória ram, memória rom, armazenamento interno, placa de vídeo e etc. Porém, para o funcionamento de um computador, é necessário um processador para fazer as contas, leia-se processar os dados, e os próprios dados, que são dados a partir da memória. A placa mãe faz a união dessas partes, mas são o processador e a memória que realizam o trabalho.

### 1.2.1 Processador
**Cada Operação do processador é representada pela seguinte lista de procedimentos:**
- Busca de Instruções na memória
- Interpretação de uma instrução
- Execução da instrução intepretada
- gravação de eventuais resultados do processamento
- Reinicio do processo caso necessário

Em uma estrutura de algoritmo simples isso poderia ser representado como:

```
função processar(memória){
    enquanto tiver operações pra realizar na memória faça o seguinte{
        Interpreta o que a memória tá te mandando fazer
        Agora faz o que ela mandou
        Agora responde o que ela pediu
    }
}
```

### 1.2.2 Memória Ram[^3]
[^3]: O tópico era mais generalizado para memória no geral. Mas memória Rom e memória secundária não são de grande importância no momento.

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

Onde cada bloquinho pode armazenar um bit. Mais a frente falaremos sobre estruturas de dados e como se manipulam esses endereços, por que é importante entender bem a memória entre outros assuntos.

## Capitulo 2 - Algoritmos
### 2.1 Conceito de algoritmo
Um algoritmo pode ser definido como uma sequência finita de passos a fim de resolver um problema.

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


