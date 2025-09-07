//Aqui temos código JS
//function imprimirOi(){
//    console.log("oi"); // deve aparecer no log de depuração do programa. Não tem entrada-saida, nem return, apenas processamento.
//A entrada não é algo que dê uma saída pra ser reaproveita no programa todo
//Posos tmb fazer o seguinte: let x = undefined e atribuir valores. Em linguagem c temos tipagem fote onde numeros não podem ser strings, nasceu numeor morre numeor. No JS, se nasceu
//numero, pode morrer strings ou undefined. undefined = vazio absoluto.
function CalcularIMC(peso, altura){
    //let imc = peso / (alutra * altura); //ponto e virgula opcional mas sempre use
    const imc = peso / (altura * altura);   //Se eu chamo de const, eu digo que ele
    // é imutável e eu não vou mudar dentro. Mas não preicso definir isso aqui, posso fazer o seguinte:
    console.log(imc);
    return imc;
    //return imc = peso / (altura * altura); //Isso deixa o programa mais rapido
}
function main(){
//Passo 1 - Obter os dados peso e altura
// (Digitados pelo usuário)
//Estamos quebrando em partes menores para fazer uma parte maior principal, por isso nomearemos "main"
//Cada vez que for apertado main, executará e lerá peso e altura do usuário.
// Se ele modifica enquanto o calculo estiver sendo feito, nada acontece,
//Pois ele precisa clica no botão
//São constantes porque precisam ser clicadas no botão para terem algum valor.
// Não iremos modificar, apenas LEREMOS o texto que ele modificou!
const a = document.getElementById("txtAltura").value; //Sem o .value, ele imprime o
// elemento inteiro da tag pelo elemento ID
const p = document.getElementById("txtPeso").value; //Chama a função documento pelo
// "." e pede para obter no html o elemento
//POrque não peso altura no nome da função? para entendermos sombreamento de função...
//console.log(a);
//console.log(p);
// Passo 2 - Interpretar se os dados estão ok. Verificar e validar os dados
//Para cas aa partir daqui...
// Passo 3 - Fazer o cálculo chamando a função "CalcularIMC"
//CalcularIMC(p, a); //Como faz para você pegar o elemtno que ela retornou? Uma
const imcResultante = CalcularIMC(p, a); //Isso não muda, é outra coisa diferente
// se colocar outro valor Mudar!=outro execuç]ao
// Passo 4 - Imprimir o resultado
console.log(imcResultante);
//Tarefa: Além de imprimir o valor no console, como está acima, mostrar na tela o valor para o usuário
}