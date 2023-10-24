# Comparador de Performance em C

Bem vindo à pasta correspondente ao comparador dos métodos de iterações.

Este comparador foi desenvolvido como parte da Atividade Prática Supervisionada
do quarto semestre, do curso Ciência da Computação.

O objetivo deste comparador é fazer a ordenação de dados,através dos métodos simples BubbleSort e InsertionSort e do método eficaz MergeSort.
Através da ordenação, conta-se a quantidade de iterações realizadas por cada método e por fim gera-se o gráfico com o comparativo entre eles. 

## Instalação
Para testar e rodar o programa desenvolvido, é necessário seguir os passos a seguir:
- INSTALAR A IDE VSCODE PARA PODERMOS TESTAR E VERIFICAR O CÓDIGO 
- INSTALAR INTELLISENSE C/C++ FROM MICROSOFT NO VSCODE
- INSTALAR COMPILE & RUN C/C++ COMPILE RUN NO VSCODE 
- INSTALAR MINGW (MinGW - Minimalist GNU for Windows) DISPONÍVEL EM 
https://sourceforge.net/projects/mingw/files/latest/download, NA INSTALAÇÃO PADRÃO. 
- APÓS INSTALAR MINGW, SELECIONAR "MINGW32-BASE" E "MINGW32-GCC-G++" , DEPOIS EM "INSTALLATION", "APPLY CHANGES" E "INSTALL"
- COPIAR O ENDEREÇO C:\MinGW\bin, PROCURAR NO MENU INICIAR "EDITAR AS VARIAVEIS DO AMBIENTE DO SISTEMA" , CLICAR EM 
AVANÇADO E VARIAVEIS DO AMBIENTE, CLICAR EM VARIAVEIS DO AMBIENTE EM PATH E EDITAR, NOVO E COLAR O O ENDEREÇO 
- PARA VERIFICAR A INSTALAÇÃO, ABRA O CMD E DIGITE G++ --VERSION.

Caso tenha duvidas, siga o tutorial disponibilizado pelo prof. no [youtube](https://www.youtube.com/watch?v=RJ4ta9mjrWc)
## Funcionamento
- APS_Prog_1 funciona selecionando apenas 1 arquivo de dados, o qual precisa estar com nome de nomeArquivo.txt para o programa reconhecer, dentro da pasta Output gerada ao executar o arquivo em C.
Ele ordena esses dados, conta as iterações e por fim, gera um .txt com nome fixo com os dados ordenados.
Por fim, abrir o código disponibilizado e executar dentro do vscode na opção F6.

- O arquivo APS_pronta disponível nesse repositório (pasta do repositório), irá rodar e ler todos os arquivos .txt que encontram-se dentro da pasta Output com os nomes específicos que deixamos. Ele irá ler todos, contar a quantidade de dados de cada, voltar do início, ordena-los e contar a quantidade de iterações que realizou para fazer tal operação. Tais dados se relacionam através do Struct criado dentro do código. 
Caso opte por rodar o programa novamente, selecione através do menu interativo o tipo de método escolhido para ordenação.
Todos os dados serão lidos, contados e ordenados através do método, gerando um gráfico da quantidade de dados x iteração para o usuário final.
Caso queira fazer nova ordenação utilizando outro método, o programa entrará em looping através do while.

## Utilização
- Caso queira rodar APS_Prog_1: criar uma pasta vazia (por exemplo, na área de trabalho), baixar o arquivo APS_Prog_1.c e a pasta APS_PROG_1/output, colocar ambos dentro da pasta nova e renomear a pasta APS_PROG_1/output para apenas output. Executar através do VSCODE o arquivo C baixado através da tecla F6.

- Caso queira rodar APS_pronta: Baixar a pasta APS_pronta e executar através do VSCODE o arquivo C baixado através da tecla F6.

## Autores
- [@ToxicOtter](https://github.com/ToxicOtter)
- [@IsaacKralik](https://github.com/IsaacKralik)
- [@João](https://www.linkedin.com/in/joão-cardoso-769a531b9/)
