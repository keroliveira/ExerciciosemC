# Exercicios em C 🤖
Repositório com exercícios em C, focados em entrada e saída de valores, operações básicas, estruturas condicionais e manipulação de strings.

## Índice
. [a) Calculadora de operações básicas]
. [b) Impressão de 1 até 100]
. [c) Calcula a soma de um número até 100]
. [d) Calculo das tabuadas]
. [e) Função: Par ou Ímpar]
. [f) Função de soma]
. [g) Soma de Vetor com Tamanho Fixo]
. [h) Exercicio de ponteiro: Modificando Variavel de Fora]

## a) Calculadora de operações básicas: 
Programa que funciona como uma mini calculadora. O usuário informa um **código de operação** e **dois números**, e o programa executa a operação correspondente e exibe o resultado.

O programa lê três valores inteiros digitados pelo usuário:

1. Um **código de operação** (1 a 4)
2. O **primeiro número**
3. O **segundo número**

Com base no código informado, ele escolhe qual operação matemática realizar e imprime o resultado no terminal.

## b) Impressão de 1 até 100:
Programa que imprime na tela todos os números inteiros de **1 até 100**, um por linha, utilizando uma estrutura de repetição `for`.

O programa percorre um intervalo numérico crescente começando em `1` e terminando em `100`. A cada iteração, imprime o número atual seguido de uma quebra de linha.

Não há entrada de dados - o programa apenas **gera e exibe** a sequência automaticamente ao ser executado.

## c) Calcula a soma de um número até 100:
Programa que calcula a soma de todos os números inteiros de **1 até 100** e exibe o resultado final na tela.

O programa percorre os números de `1` a `100` usando um laço `for` e, a cada iteração, adiciona o valor atual a uma variável acumuladora chamada `soma`. Ao final do laço, imprime o total obtido.

Não há entrada de dados - o intervalo é fixo no código.

## d) Calculo das tabuadas:
Programa que gera a tabuada de um número inteiro informado pelo usuário, mostrando as multiplicações de **0 até 10**.

O programa pede ao usuário um número inteiro, lê esse valor e, em seguida, percorre os multiplicadores de `0` a `10`, imprimindo cada linha no formato `N x i = resultado`.

## e) Função: Par ou Ímpar:
Função que recebe um número inteiro e retorna **1** se ele for **par** e **0** se for **ímpar**. Foi projetada para ser usada como bloco reutilizável dentro de outros programas.

A função calcula o **resto da divisão** do número por `2`. Se o resto for `0`, o número é par; caso contrário, é ímpar. O resultado é retornado como um inteiro, seguindo o padrão típico de C de usar `1` para verdadeiro e `0` para falso.

## f) Função de soma:
Conjunto de duas funções que realizam somas de formas diferentes: uma **soma dois números e devolve via ponteiro**, outra **soma um vetor de inteiros e retorna o total**. Servem como blocos reutilizáveis em programas maiores.

## g) Soma de Vetor com Tamanho Fixo:
Função que recebe um vetor de **exatamente 10 inteiros** e retorna a soma de todos os seus elementos. Serve como bloco reutilizável dentro de outros programas.

A função percorre os 10 elementos do vetor com um laço `for`, acumulando cada valor em uma variável `total`, e devolve esse total ao final. O tamanho é **fixo em 10**, definido diretamente na assinatura e no corpo da função.

## h) Exercício de ponteiro: Modificando Variavel de Fora:
Programa que demonstra, na prática, como **ponteiros** funcionam: uma função chamada `calcula` recebe o **endereço** de uma variável e **modifica o valor original** dela. Também imprime o valor e o endereço em cada etapa, para tornar o efeito visível.O programa segue este fluxo:

1. Declara uma variável `c` com valor `10` no `main`.
2. Imprime o valor e o **endereço** de `c`.
3. Chama a função `calcula`, passando `&c` (o endereço de `c`).
4. Dentro de `calcula`, imprime o valor apontado e o endereço, **incrementa o valor** e imprime de novo.
5. De volta ao `main`, imprime novamente `c` - que agora vale `11`.
