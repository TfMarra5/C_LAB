# Etapa 3: controle de fluxo e funções

## Sequência sugerida

| Sessão | Conteúdo | Prática |
|---|---|---|
| 1 | `if`, `else`, blocos com chaves | Desafios 13–15 |
| 2 | `switch`, `break` em `switch` | Desafio 16 |
| 3 | Leitura com `scanf`, validação | Desafios 17–18 |
| 4 | `while`, `do...while`, acumuladores | Desafios 19–20 |
| 5 | `break`, `continue`, `for` | Desafios 21–22 |
| 6 | Protótipos, parâmetros, retorno | Desafio 23 |
| 7 | Escopo e duração de armazenamento | Desafio 24 e Projeto 03 |

Os desafios novos pedem entrada no terminal quando indicado. Um caractere de retorno diferente de 1 em `scanf` sinaliza que a leitura não correspondeu ao formato esperado. Use formatos compatíveis: `%d` com `int`, `%f` com `float` e `%lf` com `double` em `scanf`. Para ler um char depois de um número, use espaço antes de `%c`, como `" %c"`. `scanf` retorna quantos itens leu com sucesso; confira esse retorno antes de usar os dados.

Use chaves em todo `if` e laço com mais de uma instrução, e também em instruções de uma linha para deixar o bloco explícito. Prefira `for` quando a contagem de passos é clara; `while` quando a repetição depende de uma condição; `do...while` quando o corpo deve executar ao menos uma vez.

Uma função tem tipo de retorno, nome, parâmetros e corpo. O protótipo avisa o compilador sobre a função antes da chamada. Variáveis locais só existem dentro do bloco onde foram declaradas. Uma variável local `static` preserva o valor entre chamadas, mas continua invisível fora da função.

Evite `goto` nesta etapa. Aprenda primeiro a expressar a repetição com laços e a seleção com condicionais.
