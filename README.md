# cpp-failed-top-grades

Uma instituição de ensino tem um sistema de notas que varia entre 0 a 100 pontos. Um aluno é considerado **aprovado** se tiver uma nota igual ou superior a 60 pontos. Um aluno é considerado **top** se tiver uma nota igual ou superior a 90 pontos.

O programa deve ler uma quantidade indeterminada de notas, contando o número de notas lidas, o número de alunos **reprovados** e o número de alunos **top**.

**O programa deve parar quando ler uma nota inválida, ou seja, menor que zero**. 

Confira se o repositório está criado em alguma das organizações GitHub:
* [https://github.com/p7-m4-ecoi02-2021-1](https://github.com/p7-m4-ecoi02-2021-1)
* [https://github.com/p8-m4-ecoi02-2021-1](https://github.com/p8-m4-ecoi02-2021-1)

Veja o **Feeback** no link *Pull requests* para aber se a saída do programa está de acordo com o esperado.

## Testes

*ENTRADA 1*) Notas: -1

*SAÍDA*

    Num. notas = 0
    Reprovados = 0
    Tops       = 0

*ENTRADA 2*) Notas: 60 70 80 90 100 -1

*SAÍDA*

    Num. notas = 5
    Reprovados = 0
    Tops       = 2

*ENTRADA 3*) Notas: 40 50 60 70 80 90 100 -5

*SAÍDA*

    Num. notas = 7
    Reprovados = 2
    Tops       = 2
    
*ENTRADA 4*) Notas: 40 50 60 -1

*SAÍDA*

    Num. notas = 3
    Reprovados = 2
    Tops       = 0

*ENTRADA 5*) Notas: 90 91 92 93 94 95 96 97 98 99 100 -10

*SAÍDA*

    Num. notas = 11
    Reprovados = 0
    Tops       = 11
    
    
