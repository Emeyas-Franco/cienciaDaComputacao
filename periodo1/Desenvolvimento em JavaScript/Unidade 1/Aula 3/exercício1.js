let nome = "Emeyas";
let idade = 39;
let peso = 110.90;

if(idade % 2 == 0){
    console.log("Sua idade é um número par.");    
} else {
    console.log("sua idade é um número impar.");
}
console.log(idade)

let anoAtual = 2024;
let anoNasc = anoAtual - idade;
for(let anoCont = anoAtual; anoCont >= anoNasc; anoCont--){
    console.log(anoCont);
}