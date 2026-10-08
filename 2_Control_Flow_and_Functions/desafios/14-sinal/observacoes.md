# Minhas observações

## Previsão antes de executar

- Entrada `5`: espero que diga que é positivo.
- Entrada `-3`: espero que diga que é negativo.
- Entrada `0`: espero que diga que é zero.
- Entrada `x`: espero que mostre `Invalid input` e encerre.

## Resultados dos casos

- `5` → `5 is positive`
- `-3` → `-3 is negative`
- `0` → `0 is zero`
- `x` → `Invalid input`

## O que aprendi e dúvidas

`scanf("%d", &number)` tenta ler um inteiro e armazená-lo em `number`. Se a leitura falhar, o programa mostra uma mensagem e encerra com `return 1`. A estrutura `if / else if / else` escolhe entre positivo, negativo e zero.
