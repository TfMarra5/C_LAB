# Rastrear escopo e chamadas

Base: Aula 3, slides 38–41.

## Desafio

Escreva uma função mostrar_chamada que contém uma variável local contagem e uma static int chamadas. Incremente ambas e imprima seus valores. Chame a função três vezes em main. Em comentário, explique por que os valores diferem.

## Critério de conclusão e casos

contagem local reinicia em 1 em cada chamada; chamadas static mostra 1, depois 2, depois 3.

<details>
<summary>Pista, se precisar</summary>

static preserva o valor entre chamadas; a variável local comum começa uma nova vida a cada chamada.

</details>
