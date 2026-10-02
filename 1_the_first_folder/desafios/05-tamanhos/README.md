# Laboratório de tamanhos

Base: Aula 2, slides 12–14 e 26.

## Desafio

Imprima sizeof de char, int, float, double e long double. Inclua limits.h e imprima CHAR_BIT, INT_MIN e INT_MAX. Anote os resultados em observacoes.md.

## Critério de conclusão e casos

sizeof(char) deve ser 1. Os demais valores são observações do seu ambiente, sem resposta numérica universal. Explique a diferença entre bytes de sizeof e bits de CHAR_BIT.

<details>
<summary>Pista, se precisar</summary>

sizeof produz size_t: imprima com %zu. CHAR_BIT é a quantidade de bits de um byte em C.

</details>
