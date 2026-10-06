# Boletim de notas

Pré-requisitos: desafios 13–19 e 23. Este projeto usa somente três notas fixas lidas do terminal, sem arrays.

## Requisitos

Leia três notas reais entre 0 e 10, verificando se cada `scanf` leu corretamente. Se qualquer nota estiver fora do intervalo, informe erro e encerre com status diferente de zero. Calcule a média em uma função `double calcular_media(double n1, double n2, double n3)`. Use uma função `int aprovado(double media)` para verificar o limite fictício `const double MEDIA_MINIMA = 7.0`. Imprima a média com duas casas e a situação: Aprovado ou Revisar. Estas regras existem somente para o exercício.

Inclua protótipos antes de `main`, definições depois de `main` e nenhuma variável global. Use if/else para classificar a média. Caso queira, inclua uma opção switch para escolher entre ler as três notas e usar três valores demonstrativos definidos no código.

## Casos de aceitação

8, 7, 9: média 8.00, Aprovado. 6, 7, 8: média 7.00, Aprovado. 6, 6, 6: média 6.00, Revisar. Entrada textual ou nota 11: erro.

## Entrega

Preencha `main.c` e `relato.md`. Explique o trabalho dos parâmetros e retorno de cada função. Compile com avisos habilitados e teste os casos de aceitação.
