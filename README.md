# Gerenciamento de Notas de Turma

Programa em C para gerenciar notas de alunos de uma turma com alocação dinâmica de memória.

## Funcionalidades

- Cadastro de múltiplos alunos (NUSP e nota)
- Exibição da lista completa de alunos
- Contagem de alunos com nota acima de um valor mínimo
- Loop contínuo permitindo processar várias turmas
- Alocação dinâmica de memória usando Flexible Array Member

## Habilidades

- **Alocação Dinâmica de Memória** - Uso de `malloc()` e `free()` para gerenciamento flexível de memória
- **Flexible Array Member (C99)** - Implementação de array de tamanho variável como último campo da struct
- **Structs Aninhadas** - Organização de dados com `TURMA` contendo array de `ALUNO`
- **Ponteiros para Struct** - Passagem de parâmetros por referência usando `TURMA*`
- **Entrada/Saída de Dados** - Uso de `scanf()` e `printf()` com formatadores corretos (`%d` para int, `%f` para float)
- **Loop de Controle** - Implementação de menu contínuo com condição de saída (`while(1==1)` + `break`)
- **Ponteiros e Aritmética** - Acesso a elementos do array flexível com operador `->`
- **Funções Modulares** - Separação de responsabilidades (`imprimir()`, `contagemNotas()`)
- **Gerenciamento de Memória** - Prevenção de vazamento com `free()` adequado em cada iteração
