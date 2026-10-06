# Minhas observações

## Previsão antes de executar
- Entrada `-4`: espero que diga que é par.
- Entrada `0`: espero que diga que é par.
- Entrada `7`: espero que diga que é ímpar.
- Entrada `x`: espero que diga `Entrada invalida`.

## Resultados dos casos
- `-4` → `It is even`
- `0` → `It is even`
- `7` → `It is odd`
- `x` → `Entrada invalida`
- 
## O que aprendi e dúvidas
`scanf("%d", &a)` tenta ler um inteiro e guardá-lo em `a`. Se não consegue, o programa mostra uma mensagem de erro e encerra. O operador `% 2` verifica o resto da divisão por 2: se for 0, o número é par; caso contrário, é ímpar.
