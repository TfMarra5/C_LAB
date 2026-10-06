# Menu de operações

Base: Aula 3, slides 12–13.

## Desafio

Leia dois inteiros e uma opção de caractere (+, -, * ou %). Use switch para escolher operação. Antes de %, detecte divisor zero. Informe operação inválida para opção desconhecida. Valide scanf.

## Critério de conclusão e casos

8, 3, +: 11. 8, 3, %: 2. 8, 0, %: erro de divisão por zero. 8, 3, /: opção inválida.

<details>
<summary>Pista, se precisar</summary>

Use scanf(" %c", &operacao) para pular espaços antes de ler o caractere. Cada case termina com break.

</details>
