<h1 align="center">:file_cabinet: Comparador de Performance em C</h1> 

## :memo: Bem vindo à pasta correspondente ao comparador dos métodos de iterações.

Este comparador foi desenvolvido como parte da Atividade Prática Supervisionada
do quarto semestre, do curso Ciência da Computação.

O objetivo deste comparador é fazer a ordenação de dados,através dos métodos simples BubbleSort e InsertionSort e do método eficaz MergeSort.
Através da ordenação, conta-se a quantidade de iterações realizadas por cada método e por fim gera-se o gráfico com o comparativo entre eles. 

## :wrench: Tecnologias utilizadas
* Linguagem C
* IDE VSCODE
* MinGW
* EXCEL
* GNUPLOT
  
## :rocket: Rodando o projeto
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

- Caso queira rodar APS_Prog_1: criar uma pasta vazia (por exemplo, na área de trabalho), baixar o arquivo APS_Prog_1.c e a pasta APS_PROG_1/output, colocar ambos dentro da pasta nova e renomear a pasta APS_PROG_1/output para apenas output. Executar através do VSCODE o arquivo C baixado através da tecla F6.

- Caso queira rodar APS_pronta: Baixar a pasta APS_pronta e executar através do VSCODE o arquivo C baixado através da tecla F6.

## :books: Funcionalidades

* <b>Funcionalidade 1</b>: APS_Prog_1 funciona selecionando apenas 1 arquivo de dados, o qual precisa estar com nome de nomeArquivo.txt para o programa reconhecer, dentro da pasta Output gerada ao executar o arquivo em C.
Ele ordena esses dados, conta as iterações e por fim, gera um .txt com nome fixo com os dados ordenados.
Por fim, abrir o código disponibilizado e executar dentro do vscode na opção F6.

* <b>Funcionalidade 2</b>: O arquivo APS_pronta disponível nesse repositório (pasta do repositório), irá rodar e ler todos os arquivos .txt que encontram-se dentro da pasta Output com os nomes específicos que deixamos. Ele irá ler todos, contar a quantidade de dados de cada, voltar do início, ordena-los e contar a quantidade de iterações que realizou para fazer tal operação. Tais dados se relacionam através do Struct criado dentro do código. 
Caso opte por rodar o programa novamente, selecione através do menu interativo o tipo de método escolhido para ordenação.
Todos os dados serão lidos, contados e ordenados através do método, gerando um gráfico da quantidade de dados x iteração para o usuário final.
Caso queira fazer nova ordenação utilizando outro método, o programa entrará em looping através do while.

## :soon: Implementação futura
* <b>GNUPLOT</b>: Com o desenvolvimento do projeto e com os resultados parciais obtidos, inicialmente foi gerado gráficos comparativos através do Excel para análise desses dados. Como implementação à ser feita, queremos implementar a ferramente GNUPLOT dentro do nosso código, para assim que obtivermos os resultados comparativos, apresentar diretamente ao usuário tais dados de uma forma mais amigável, através de gráficos e tabelas interativas. 

## :handshake: Colaboradores
<table>
  <tr>
    <td align="center">
      <a href="https://github.com/ToxicOtter">
        <img src="https://avatars.githubusercontent.com/u/56259137?v=4" width="100px;" alt="Foto de Toxic Otter no GitHub"/><br>
        <sub>
          <b>Luan Lima Lopes</b>
        </sub>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/IsaacKralik">
        <img src="https://avatars.githubusercontent.com/u/56259137?v=4" width="100px;" alt="Foto de Isaac Kralik no GitHub"/><br>
        <sub>
          <b>Isaac Kralik</b>
        </sub>
      </a>
    </td>
     <td align="center">
      <a href="https://www.linkedin.com/in/joão-cardoso-769a531b9/">
        <img src="https://avatars.githubusercontent.com/u/56259137?v=4" width="100px;" alt="Foto de João Augusto no GitHub"/><br>
        <sub>
          <b>João Augusto</b>
        </sub>
      </a>
    </td>
  </tr>
</table>


## :dart: Status do projeto
* <b>Projeto finalizado</b>: Projeto atendendo os requisitos necessários e propostos para seu desenvolvimento
* <b>Em Desenvolvimento para implementações futuras</b>: Transformar o projeto em mais amigável para o usuário, com os resultados sendo gerados através do GNUPLOT com gráficos e tabelas.
