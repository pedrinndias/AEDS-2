public class ContaBanco{
    public int numConta;
    protected String tipo; // tenho que criar um ramo para identificação do tipo da conta
    private String dono;
    private double saldo;
    private boolean status;

    //Método Construtor ContaBanco
    public ContaBanco() {
        this.status = false;
        this.saldo = 0.0;
    }

    //Métodos Stter's e Getter's
    public int getNumConta() {
        return numConta;
    }
    public void setNumConta(int numConta) {
        this.numConta = numConta;
    }

    public String getTipo() {
        return tipo;
    }
    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getDono() {
        return dono;
    }
    public void setDono(String dono) {
        this.dono = dono;
    }

    public double getSaldo() {
        return saldo;
    }
    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public boolean isStatus() {
        return status;
    }
    public void setStatus(boolean status) {
        this.status = status;
    }

    //Métodos Operacionais
    public void abrirConta(){

        //numConta
        System.out.printf("Insira o numero da conta (6 dígitos) (Ex.: 123456): ");
        // ler numConta
        int aux;
        System.out.printf("Escolha o tipo da conta: ");
        System.out.println("1- Conta poupança");
        System.out.println("2- Conta corrente");
        //ler valor e atribuir a auxiliar
        while(aux!=1 || aux!=2){
            System.out.println("Escolha 1- Conta poupança ou 2- Conta Corrente:");
            //ler valor e atribuir a auxiliar
        }
        if(aux==1){this.tipo = 'CP'}else{this.tipo = 'CC'}

        //dono
        String aux1;
        System.out.println("Escreva seu nome: ");
        //ler nome
        setDono(aux1);

        //Saldo
        System.out.println("Saldo da conta: R$"+ getSaldo());


        //status
        this.status = true;
        System.out.println("Status da conta: " + status);
    }

    public void fecharConta(){
        this.status = false;
    }

    public void depositar(){
        double aux=0.0;
        if(status==true){
            System.out.println("Qual valor você quer depositar? ");
            //Ler valor e atribuir a aux
            this.saldo += aux;//Somar aux a saldo
        }else{
            System.out.println("Ação indisponível! Conta está fechada.");
        }
    }

    public void sacar() {
        double aux;
        System.out.println("Saldo da conta: R$" + saldo);
        System.out.println("Qual valor você gostaria de sacar? ");
        //Ler valor e atrivuir a aux;
        while(aux>saldo){
            System.out.println("Ação invalida! O valor que você deseja sacar é superior ao que está disponível na conta.");
            System.out.println("Saldo da conta: R$" + saldo);
            System.out.println("Por favor insira um novo valor você gostaria de sacar? ");
            //Ler valor e atrivuir a aux;
        }
        if (aux<saldo){
            this.saldo -= aux;
            System.out.printf("Ação realizada com sucesso!");
            System.out.println("Saldo da conta: R$" + saldo);
        }
    }
    public void pagarMensal(){
        System.out.println("Tipo da conta: " + tipo);
        System.out.printf("Processando ...");
        if (tipo == 'CP'){
            System.out.printf("Foi descontado R$20,00 da sua conta!");
            this.saldo -= 20.0
            System.out.println("Saldo da conta: R$" + saldo);
            if (saldo<0.0){
                System.out.printf("Você possui depito em sua conta!");
            }
        }else{
            System.out.printf("Foi descontado R$12,00 da sua conta!");
            this.saldo -= 12.0
            System.out.println("Saldo da conta: R$" + saldo);
            if (saldo<0.0){
                System.out.printf("Você possui depito em sua conta!");
            }
        }

    }
}