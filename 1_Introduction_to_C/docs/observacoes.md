# Observações para acompanhar os slides

As aulas orientam a sequência; as notas abaixo evitam algumas simplificações e erros do material.

## Aula 1

- Slides 5 e 8: assembly precisa de tradução por um assembler; não é executado diretamente como texto pelo processador.
- Slides 8 e 13: C aparece em classificações diferentes. Entenda C como linguagem de alto nível com recursos próximos ao hardware; a comparação adotada muda a descrição.
- Slide 9: “compilada” e “interpretada” descrevem estratégias de implementação. Não use essa classificação para concluir que uma linguagem será sempre mais rápida.

## Aula 2

- Slide 17: `int a = 5;` inicializa na declaração; `a = 5;` depois dela é atribuição.
- Slides 13–14 e 26: tamanhos dependem da implementação; `sizeof(char)` é 1, mas não presuma `int` de 4 bytes ou `double` de 8. Meça com `sizeof` e consulte `<limits.h>`.
- Slide 14: o máximo de um inteiro com sinal de 32 bits é **2147483647**; há um erro de digitação no slide.
- Slide 26: conversão explícita em C usa `(int)valor`. A forma `int(valor)` não é a sintaxe de cast em C.
- Slide 27: `++` e `--` pós-fixados têm precedência alta, acima dos operadores unários; não pertencem à linha do operador vírgula. Precedência não determina toda a ordem de avaliação.
- Slide 25: a figura de `~` mostra oito bits. Inteiros menores sofrem promoções, então `~5` não significa simplesmente obter 250. No desafio, limite o resultado aos oito bits inferiores com uma máscara.

Referência técnica para estas notas de C: [rascunho público C11 N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf), seções 6.5.2–6.5.4, 6.7.9 e 5.2.4.2.1. Não é necessário ler a norma inteira para fazer os exercícios.
