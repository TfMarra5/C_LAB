# Minhas observações

## Regra

A pessoa pode participar se tiver 18 anos ou mais e estiver com a matrícula ativa. Usei `&&` porque as duas condições precisam ser verdadeiras ao mesmo tempo.

## Casos testados

| Idade | Matrícula ativa | Pode participar |
|---:|:---:|:---:|
| 18 | true | 1 |
| 17 | true | 0 |
| 20 | false | 0 |
| 17 | false | 0 |

## O que aprendi e dúvidas

A comparação `age >= 18` verifica a idade mínima. A expressão combinada com `isStudent` resulta em verdadeiro somente quando a idade é suficiente e a matrícula está ativa.
