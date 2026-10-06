# C Lab — estudos e desafios

Trilha inicial de prática baseada nas aulas **Programming Languages** e **Introduction to C**, da disciplina DE0917. Enunciados em português e código em C.

Para quem já programou: use os desafios 01–04 como diagnóstico rápido. Se conseguir explicar e executar sem dificuldade, concentre seu tempo nos desafios 05–12 e nos projetos. Você pode abrir esta pasta no VS Code ou no Zed e usar o terminal integrado. O editor e o compilador são ferramentas distintas: confirme qual compilador está configurado no seu ambiente.

## Comece aqui

1. Leia [o guia de estudo](docs/guia.md) e [as observações sobre os slides](docs/observacoes.md).
2. Faça os desafios em ordem. Cada pasta contém o enunciado e um arquivo para sua resposta.
3. Antes de executar, anote o resultado que espera. Depois compare com os casos do enunciado.
4. Registre suas dúvidas em [progresso.md](progresso.md).
5. Depois do desafio 12, desenvolva os dois projetos.

Os arquivos `main.c` são pontos de partida, não soluções. As atividades usam dados definidos no próprio código. Altere esses dados e execute novamente para testar. Entrada pelo teclado, laços, arrays e funções próprias ficam para etapas posteriores.

## Trilha

| Etapa | Atividades | Assunto |
|---|---|---|
| 1 | 01–02 | Linguagens, tradução e identificadores |
| 2 | 03–05 | Primeiro programa, variáveis e tipos |
| 3 | 06–08 | Aritmética, conversões e constantes |
| 4 | 09–12 | Comparações, precedência, incremento e bits |
| 5 | Projetos 01–02 | Aplicação dos fundamentos |

## Como executar

Use inicialmente o compilador indicado pela faculdade. Se você já tiver GCC disponível no terminal, na pasta raiz deste repositório execute:

```powershell
gcc -std=c11 -Wall -Wextra -Wpedantic desafios/03-cartao/main.c -o programa.exe
.\programa.exe
```

Troque o caminho para executar outro desafio. Compile um `main.c` por vez. Em Linux/macOS, o executável pode se chamar `programa` e ser executado com `./programa`.

`#include <stdio.h>` declara recursos de entrada e saída. `int main(void)` é o ponto de entrada usado aqui. `printf` imprime e `return 0;` indica conclusão com sucesso. Comece pelo exemplo em [exemplos/primeiro-programa.c](exemplos/primeiro-programa.c).

Os comandos pressupõem um compilador instalado. Este pacote não instala ferramentas. Os programas ainda precisam ser compilados no seu ambiente.

## Critério para concluir uma atividade

- O programa compila sem avisos com as opções acima.
- Todos os casos do enunciado foram conferidos.
- Você consegue explicar os tipos e as expressões usados.
- Você consegue alterar os dados sem copiar uma solução.

Para pedir revisão, envie seu código, o enunciado e a saída observada. O ciclo sugerido é: tentativa, pista, nova tentativa e revisão comentada. As soluções completas podem ser construídas depois de cada tentativa.

## GitHub

Nome sugerido: `c-lab`. Esta é a versão local inicial; ainda não está publicada no GitHub. Mantenha os slides originais fora do repositório e use [fontes.md](docs/fontes.md) para registrar a origem da trilha.

Faça um commit por atividade concluída, com mensagens como `Resolve desafio 03: cartao`. Inclua no commit seu código e suas observações. O arquivo `.gitignore` já exclui executáveis e apresentações.
