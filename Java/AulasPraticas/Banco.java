public class Banco {
    public static void main(String[] args) {
        int aux,aux1;
        do {
            System.out.println("***Banco***");
            System.out.println("1- Abrir conta");
            System.out.println("2- Acessar conta banco");
            System.out.println("3- Fechar conta");
            System.out.println("4- Sair");
            // Ler aux
            switch(aux){
                case 1:
                    ContaBanco p1 = new ContaBanco;
                    //Abrir conta; Preciso pensar como criar uma conta sem saber o nome da variavel ContaBanco e poder criar N contas bancos
                    p1.abrirConta();
                    do{
                        System.out.println("***Operações***");
                        System.out.println("1- Ver saldo da conta");
                        System.out.println("2- Ver tipo da conta");
                        System.out.println("3- Ver dono da conta");
                        System.out.println("4- Ver status da conta");
                        System.out.println("5- Depositar");
                        System.out.println("6- Sacar");
                        System.out.println("7- Pagar mensal");
                        System.out.println("8- Sair");
                        //ler valor
                        switch(){
                            case 1:
                                System.out.println("Saldo: R$" + p1.getSaldo());
                                break;
                            case 2:
                                System.out.println("Tipo de Conta: " + p1.getTipo());
                                break;
                            case 3:
                                System.out.println("Dono da conta: " + p1.getDono());
                                break;
                            case 4:
                                System.out.println("Status da conta: " + p1.getStatus());
                                break;
                            case 5:
                                p1.depositar()
                                break;
                            case 6:
                                p1.sacar();
                                break;

                            case 7:
                                p1.pagarMensal();
                                break;
                            case 8:
                                System.out.println("Saindo...");
                                break;
                        }
                    }While(aux1!=8);

                    break;
                case 2:
                    if(  ){ //procurar variavel em ContasBanco
                    }else{
                        System.out.println("Nenhuma conta de banco aberta para poder acessar!");
                    }
                    //preciso pensar em como acessar conta banco de quem,  melhor utilizar numConta
                    break;
            }
                case 3:
                    if(  ){ //procurar variavel em ContasBanco
            }else{
                System.out.println("Nenhuma conta de banco aberta para poder fechar!");
            }
                    break;
                case 4:
                    break;
            }
        }While(aux!=3);
        System.out.println("Saindo...");
        return 0;
    }
}