# Explorador de bits

Base: Aula 2, slide 25.

## Desafio

Use unsigned int a=5u e b=6u. Imprima a&b, a|b, a^b, a<<1, a>>1 e (~a)&255u em decimal. Desenhe em observacoes.md os oito bits inferiores de cada resultado.

## Critério de conclusão e casos

Resultados: 4, 7, 3, 10, 2 e 250. Extra: com a=0u e b=6u, obtenha 0, 6, 6, 0, 0 e 255.

<details>
<summary>Pista, se precisar</summary>

Use %u. A máscara 255u mantém apenas os oito bits inferiores; o tipo unsigned int pode ter mais bits.

</details>
