## 2.6) Qual é a diferença entre um 'fork' e um 'branch'?

 - Fork: Comando que gera para um usuário uma cópia  independente do projeto original elaborado pelo seu desenvolvedor, que pode ser manipulada e alterada de forma separada
 
Exemplo: o comando abaixo realiza um fork
    git clone https://github.com/DougFeliipe/ATVD2_LP1.git


 - Branch: Comando que gera uma ramificação do projeto original, permitindo ao detentor da branch colaborar com o projeto realizando alterações sem alterar o código principal para ao final solicitar um merge ao main do projeto

Exemplo: O comando abaixo cria uma branch

    git checkout -b ATVD2_LP1
 

## 2.4) O que é o "HEAD" no Git?
 O comando HEAD funciona como uma espécie de ponteiro que indica a a branch atual na qual está sendo trabalhada, ou seja, aponta para o commit mais recente em uma determinada branch, as condições de uso são quando é necessário saber a branch em que se está trabalhando ou referenciar um determinado commit ao realizar merge, checkout e outras operações na branch.
 
 Exemplo: O comando abaixo retorna o hash do commit mais recente da branch atual
 

    git rev-parse HEAD

## 2.8) O que é um 'stash'?
Em Git o stash atua como uma funcionalidade que permite ao usuário salvar alterações no projeto, gerando um "stash" temporário, permitindo transitar entre diretórios do projeto sem que haja perda das alterações realizadas em outras partes

Exemplo: O comando abaixo cria uma stash no repositório da atividade

    git stash save "Alteração no Readme.md da Q2"

