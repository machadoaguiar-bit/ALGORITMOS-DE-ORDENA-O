# ALGORITMOS-DE-ORDENA-O
Aplicação prática dos algoritmos Bubble Sort e Quick Sort
 Ordenação de Preços de um Supermercado em C
 Sobre o projeto

Este projeto tem como objetivo implementar e comparar dois algoritmos de ordenação em linguagem C: Bubble Sort e Quick Sort.

O programa simula uma situação de supermercado, utilizando uma lista de 10 produtos com seus respectivos preços. Os produtos são apresentados antes da ordenação e, em seguida, ordenados em ordem crescente de preço pelos dois algoritmos.

O projeto foi desenvolvido com finalidade acadêmica, para demonstrar o funcionamento dos algoritmos de ordenação e suas diferenças de desempenho.

 Objetivos
Implementar o algoritmo Bubble Sort em linguagem C.
Implementar o algoritmo Quick Sort em linguagem C.
Utilizar pelo menos 10 registros de produtos de supermercado.
Exibir os dados antes da ordenação.
Ordenar os mesmos dados utilizando os dois algoritmos.
Exibir os resultados após cada ordenação.
Explicar o funcionamento dos algoritmos por meio de comentários no código.
Comparar a complexidade e o desempenho dos algoritmos.

 Produtos utilizados

O programa utiliza os seguintes produtos e preços fictícios:

Produto	Preço
Arroz 5 kg	R$ 29,90
Feijão 1 kg	R$ 8,50
Leite 1 litro	R$ 4,79
Café 500 g	R$ 18,90
Açúcar 1 kg	R$ 5,49
Óleo 900 ml	R$ 7,99
Macarrão 500 g	R$ 4,29
Farinha 1 kg	R$ 6,75
Biscoito	R$ 3,89
Queijo 300 g	R$ 15,60
Tecnologias utilizadas
Linguagem: C
Bibliotecas: stdio.h e string.h
Compilador: GCC ou outro compilador compatível com C
Conceitos: estruturas (struct), vetores, funções, laços de repetição, condicionais e recursividade.
Funcionamento do programa

O programa realiza as seguintes etapas:

Cria uma estrutura chamada Produto, contendo o nome e o preço de cada produto.
Armazena os 10 produtos em um vetor.
Cria cópias dos dados originais para que os dois algoritmos utilizem os mesmos registros.
Exibe a lista original de produtos.
Executa o Bubble Sort e apresenta os produtos ordenados.
Executa o Quick Sort e apresenta os produtos ordenados.
Finaliza o programa.
 Bubble Sort

O Bubble Sort compara os preços de produtos vizinhos. Quando encontra dois produtos fora de ordem, troca suas posições.

Esse processo é repetido até que os preços estejam ordenados. O algoritmo também utiliza uma variável de controle para encerrar antecipadamente caso nenhuma troca seja necessária.

Complexidade:

Melhor caso: O(n), com a otimização implementada.
Caso médio: O(n²).
Pior caso: O(n²).
 Quick Sort

O Quick Sort utiliza um elemento chamado pivô para dividir os produtos em partes menores e maiores em relação ao preço escolhido.

Após reorganizar os elementos, o algoritmo chama a si mesmo recursivamente para ordenar as duas partes do vetor.

Neste projeto, o pivô é escolhido a partir do elemento central do trecho analisado.

Complexidade:

Melhor caso: O(n log n).
Caso médio: O(n log n).
Pior caso: O(n²).
 Comparação entre os algoritmos
Característica	Bubble Sort	Quick Sort
Estratégia	Comparações entre vizinhos	Particionamento por pivô
Recursividade	Não utiliza	Utiliza
Melhor caso	O(n)	O(n log n)
Caso médio	O(n²)	O(n log n)
Pior caso	O(n²)	O(n²)
Desempenho em listas grandes	Geralmente inferior	Geralmente superior

Os dois algoritmos produzem os mesmos resultados para os dados utilizados, ordenando os produtos pelo preço em ordem crescente.


Resultado esperado

O programa apresenta três listagens principais:

Dados antes da ordenação: os produtos na ordem original.
Dados ordenados com Bubble Sort: os produtos em ordem crescente de preço.
Dados ordenados com Quick Sort: os mesmos produtos na mesma ordem crescente de preço.

O produto mais barato será apresentado primeiro, e o produto mais caro, por último.

Conceitos aprendidos

Com este projeto, é possível compreender:

Como representar registros usando struct em C.
Como armazenar e manipular vetores de estruturas.
Como implementar algoritmos de ordenação.
Como utilizar funções para organizar o código.
Como aplicar recursividade no Quick Sort.
Como comparar a complexidade teórica de algoritmos.

 Conclusão

O projeto demonstra a aplicação prática dos algoritmos Bubble Sort e Quick Sort em uma situação cotidiana: a organização dos preços de produtos de um supermercado.

Embora ambos sejam capazes de ordenar os dados corretamente, o Quick Sort costuma apresentar melhor desempenho em conjuntos maiores, enquanto o Bubble Sort é mais simples de compreender e implementar.

 Autor

Projeto acadêmico desenvolvido para estudo de algoritmos de ordenação em linguagem C.



Link para teste do programa:
https://onlinegdb.com/wu3_mn39T

Disciplina: Algoritmos e Estruturas de Dados
Projeto: Ordenação de preços de produtos de supermercado
Linguagem: C
