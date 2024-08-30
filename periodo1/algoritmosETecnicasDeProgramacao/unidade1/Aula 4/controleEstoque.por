programa
{
	
	funcao inicio()
	{
		inteiro estoqueInicial, entrada, saida, estoqueFinal

		escreva ("Informe o estoque inicial: ")
		leia (estoqueInicial)
		se (estoqueInicial < 6) {
			escreva ("Informe a entrada no estoque: ")
			leia (entrada)
			escreva ("Informe a saída no estoque: ")
			leia (saida)
			estoqueFinal = estoqueInicial + entrada - saida
			escreva ("O estoque atualizado ", estoqueFinal)	
		} senao {
			estoqueFinal = estoqueInicial
			escreva ("Estoque atualizado ", estoqueFinal)
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 311; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */