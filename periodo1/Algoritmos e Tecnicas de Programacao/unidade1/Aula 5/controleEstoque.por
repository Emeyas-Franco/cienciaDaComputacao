programa {
  funcao inicio() {
    inteiro estoque, entrada, saida
    real precoUnit
    cadeia dataEntrada, dataSaida
    escreva ("Data de entrada: ")
    leia (dataEntrada) 
    escreva ("O estoque inicial é ")
    leia (estoque)
    se (estoque <= 5) {
      escreva ("Estoque abaixo do limite, efetuar compra de: ")
      leia (entrada)
      estoque = estoque + entrada
      escreva ("Compra efetuada em ", dataEntrada, " de ", entrada, " produtos.\n" )
      escreva ("Estoque atualizado é de ", estoque, " produtos.\n")
      escreva ("Venda efetuada de ")
      leia (saida)
      escreva ("Efetuada a venda de ", saida, "produtos.\n")
      se (saida > estoque) {
        escreva ("Compra agendada, aguarde chegada de novos produtos.\n")
        estoque = (saida - estoque) + 20
        escreva ("Estoque recebeu ", estoque, " novos produtos.\n")
        escreva ("Estoque atualizado após entrega.")
        escreva (estoque)
      }
    } se (estoque > 5){
      escreva ("Estoque de ", estoque, " produtos.\nNão há necessidade de efetuar compra.\n")
      escreva ("Venda efetuada de ")
      leia (saida)
      escreva ("Efetuada a venda de ", saida, "produtos.\n")
        se (saida > estoque) {
          escreva ("Compra agendada, aguarde chegada de novos produtos.")
          estoque = (saida - estoque) + 20
          escreva ("Estoque recebeu ", estoque, " novos produtos")
      }
    }


  }
}
