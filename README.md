# Projeto – Sistema de Organização e Acompanhamento de Atividades

**Curso:** Ciência da Computação  
**Disciplina:** Linguagem de Programação I  
**Discente:** Giselly Jahel Dias  
**Docente:** Luenne Nailam Souza Nascimento  
**Data de entrega:** 10-06-2026

# 1. Contexto do problema

Atualmente, um colaborador de uma empresa organiza suas atividades utilizando anotações pessoais, mensagens e lembretes espalhados em diferentes locais. Com o aumento da quantidade de tarefas, alguns problemas começaram a surgir:

* dificuldade para acompanhar o andamento das atividades;
* esquecimento de tarefas importantes;
* perda de informações;
* dificuldade em visualizar o que ainda precisa ser feito;
* ausência de organização do fluxo de trabalho.
  
Para resolver esse problema, foi solicitado o desenvolvimento de um sistema simples que permita ao colaborador organizar suas atividades em etapas e acompanhar seu progresso ao longo do dia.

# 2. Organização das atividades

Cada atividade deverá pertencer a uma das seguintes etapas:

| Código | Etapa |
| :--- | :--- |
| 0 | A fazer |
| 1 | Em andamento |
| 2 | Concluído |


# 3. Requisitos Funcionais

## RF01 — Cadastro de atividade
O sistema deverá permitir cadastrar uma nova atividade. Para cada atividade, o usuário deverá informar:

* nome da atividade.

Regras: 

* toda nova atividade inicia na etapa “A fazer”;
* não permitir cadastro com nome vazio.

Toda nova atividade cadastrada deverá iniciar na etapa: A fazer.

## RF02 — Listagem das atividades

O sistema deverá exibir todas as atividades cadastradas organizadas por etapa. As atividades deverão aparecer separadas em:

* A fazer;
* Em andamento;
* Concluído.

## RF03 — Movimentação de atividades

O sistema deverá permitir mover uma atividade de uma etapa para outra.
Exemplos:

* mover de “A fazer” para “Em andamento”;
* mover de “Em andamento” para “Concluído”.

## RF04 — Quantidade de atividades

O sistema deverá exibir:

* quantidade de atividades em cada etapa;
* quantidade total de atividades cadastradas.

## RF05 — Busca de atividade

O sistema deverá permitir buscar uma atividade pelo nome. O sistema deverá informar:

* se a atividade foi encontrada;
* em qual etapa ela está localizada.

# 4. Requisitos de Validação

Sempre que ocorrer um erro, o programa deverá exibir mensagens claras ao usuário e solicitar uma nova entrada. O sistema deve validar operações como:

* seleção de opções inexistentes no menu;
* movimentação de atividades inexistentes;
* buscas sem resultado;
* cadastro de atividades com nome vazio;
* tentativa de cadastrar atividades duplicadas.

