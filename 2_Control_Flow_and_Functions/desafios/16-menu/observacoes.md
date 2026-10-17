# Minhas observações

## Previsão antes de executar

- Entrada `8 3 +`: espero resultado `11`.
- Entrada `8 3 -`: espero resultado `5`.
- Entrada `8 3 *`: espero resultado `24`.
- Entrada `8 3 %`: espero resultado `2`.
- Entrada `8 0 %`: espero uma mensagem de erro de divisão por zero.
- Entrada `8 3 /`: espero uma mensagem de operação inválida.
- Entrada `a 3 +`: espero uma mensagem de entrada inválida.

## Resultados dos casos

- `8 3 +` → `11`
- `8 3 -` → `5`
- `8 3 *` → `24`
- `8 3 %` → `2`
- `8 0 %` → erro de divisão por zero
- `8 3 /` → operação inválida
- `a 3 +` → entrada inválida

## O que aprendi e dúvidas

`scanf` lê os dois inteiros e o caractere da operação. O `switch` escolhe o cálculo pelo caractere, como `'+'` ou `'%'`. Cada `break` encerra o caso escolhido. Antes de calcular o resto com `%`, preciso verificar se o divisor é zero.
