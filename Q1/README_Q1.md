## Os arquivos na pasta correspondem a implementação do algoritmo de tribonacci de forma recursiva e iterativa

Como exemplo de entrada e saída foi testado o número 10 em ambos os algoritmos, retornando 81
## Respostas das questões teóricas

## b)  

 1. O que é recursão de cauda?

Resposta: A recursão em cauda é definia como aquela cuja chamada recursiva é a ultima operação da função.

 2. Quais as implicações da recursão em cauda na execução do programa?

A recursão em cauda implica diretamente na memória utilizada durante a execução da função recursiva, ou seja, a cada chamada recursiva os valores são empilhados na memória até que o algoritmo finalize, a recursão em cauda contorna esse passo eliminando as chamadas adicionais a recursão

 3. Qual a solução para a recursão em cauda?
A depender do tamanho da entrada, uma solução/alternativa para a recursão em cauda de ser a implementação de um algoritmo iterativo para o mesmo problema, podendo ser mais eficiente em termos de desempenho e consumo de memória

## c) 

 1. A função recursiva que você implementou gera recursão de cauda? Justifique
 
Devido ao fato de serem realizadas operações aritméticas com o resultado da função recursiva, não podemos considerar ela uma recursão de cauda

## d) 

 1. Em alguns casos, quando estamos trabalhando com funções recursivas, ocorre o Stack Overflow. Explique o que é e porque ocorre esse overflow.

O erro "stack overflow" ocorre quando alguma operação está sendo realizada e seus resultados sendo armazenados na memória stack, uma vez que não haja mais espaço nesse tipo de memória esse erro é retornado. No caso de uma função recursiva, os valores são armazenados na memória stack até que seja finalizada a operação e dependendo do tamanho da entrada ou das chamadas sucessiva a função, o espaço na memória satck é totalmente preenchido impedindo novas chamadas a função.
 
