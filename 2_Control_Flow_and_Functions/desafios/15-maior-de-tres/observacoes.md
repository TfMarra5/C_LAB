# Minhas observações

## Previsão antes de executar

- Entrada `4 9 2`: espero que o maior seja `9`.
- Entrada `-1 -1 -5`: espero que o maior seja `-1`.
- Entrada `6 2 6`: espero que o maior seja `6`.
- Entrada `1 2 x`: espero que apareça `Invalid input`.

## Resultados dos casos

- `4 9 2` → maior: `9`
- `-1 -1 -5` → maior: `-1`
- `6 2 6` → maior: `6`
- `1 2 x` → `Invalid input`

## O que aprendi e dúvidas

Usei `scanf` para ler três inteiros e verifiquei se ele conseguiu ler os três. Comecei considerando `x` como o maior e comparei `y` e `z` com esse valor, atualizando `maior` quando necessário. Valores repetidos também funcionam.
