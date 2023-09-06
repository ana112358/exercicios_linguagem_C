# Linguagem C - Resumo

### O que é um compilador?

- O compilador é um programa que lê o código-fonte (o que elaboramos) e a partir dele elabora um código binário (arquivo executável) de baixíssimo nível.

- Os compiladores são complexos devido à variedade de técnicas que empregam para otimizar o desempenho das aplicações.

#### Principais tarefas dos compiladores:

##### 1. Pré-processamento
- O pré-processamento em programação é como um assistente que simplifica e organiza o código. Ele substitui palavras-chave, inclui bibliotecas, remove comentários e gerencia informações extras. Isso ajuda a tornar o código mais claro e pronto para ser transformado em um programa executável.


##### Compilação
- O código fonte é transformado em um código assembly, um código muito próximo a linguagem de máquina, ou um código binário. Entretanto ainda comtém referências a arquivos externos(como bibliotecas, módulos..., que devem estar no ambiente onde o programa será executado), então não pode ser utilizado.

#####  2. Assembler
- Com o código Assembler pronto , o arquivo executável passa por um Montador(chamado Assembler), para se tornar um código binário feito exclusivamente para uma arquitetura de processador específica.
###### Montador (Assembler): Um montador (Assembler) é um programa que traduz código Assembly em código de máquina.

##### 3. Linker
- Esta é a ultima etapa do compilador, onde as bibliotecas, já compilada são adicionadas em nosso código binário, permitindo a criação de um arquivo binário executável.
- Um arquivo objeto é gerado a partir dos arquivos de referência que são necessários para compilar o programa.
-  Esses arquivos objeto podem conter "partes" do programa e bibliotecas que o programa depende.
- Normalmente, um linker (ligador) é usado para combinar vários arquivos objeto em um único executável.
![image](https://github.com/ana112358/exercicios_linguagem_C/assets/130050929/dc68cbe1-6eba-4182-93d7-31b0ba598ecc)

#### Aspectos Importantes
- Como é trabalhoso escrever um código em Assembly ou em binário, pois é uma linguagem de nível muito baixo, geralmente utilizamos uma linguagem de mais alto nível como C ou C# e depois compilamos e geramos um executável.
- O código binário varia de um sistema para outro, por exempo, códigos binários feitos para windows não funcionam para Linux, pois ele não o reconhece como sendo um executável.

  
