import java.util.Scanner;
public class ContaBanco{
    Scanner scanner = new Scanner(System.in);
    public int numConta;
    protected String tipo;
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
    public void abrirConta(String pTipo, String pDono, int pNumConta) {
        this.setTipo(pTipo);
        this.setDono(pDono);
        this.setNumConta(pNumConta);
        this.setStatus(true);
        if ("CP".equals(pTipo)) {
            this.setSaldo(150.0);
        } else if ("CC".equals(pTipo)) {
            this.setSaldo(50.0);
        }
    }

    public void fecharConta(){
        if (this.saldo > 0) {
            System.out.println("A conta não pode ser fechada pois ainda há dinheiro.");
        } else if (this.saldo < 0) {
            System.out.println("A conta não pode ser fechada pois há débitos pendentes.");
        } else {
            this.status = false;
            System.out.println("Conta fechada com sucesso!");
        }
    }

    // 2. MÉTODO DEPOSITAR CORRIGIDO
    public void depositar(double valor) {
        if (this.isStatus()) {
            if (valor > 0) {
                this.setSaldo(this.getSaldo() + valor);
                System.out.println("Depósito de R$" + valor + " realizado com sucesso.");
            } else {
                System.out.println("Valor de depósito inválido.");
            }
        } else {
            System.out.println("Ação indisponível! Conta está fechada.");
        }
    }

    // 3. MÉTODO SACAR CORRIGIDO
    public void sacar(double valor) {
        if (this.isStatus()) {
            if (this.getSaldo() >= valor && valor > 0) {
                this.setSaldo(this.getSaldo() - valor);
                System.out.println("Saque de R$" + valor + " realizado com sucesso!");
            } else {
                System.out.println("Saldo insuficiente ou valor de saque inválido.");
            }
        } else {
            System.out.println("Ação indisponível! Conta está fechada.");
        }
    }

    public void pagarMensal(){
        System.out.println("Tipo da conta: " + tipo);
        System.out.printf("Processando ...");
        if ("CP".equals(tipo)){
            System.out.printf("Foi descontado R$20,00 da sua conta!");
            this.saldo -= 20.0;
            System.out.println("Saldo da conta: R$" + saldo);
            if (saldo<0.0){
                System.out.printf("Você possui depito em sua conta!");
            }
        }else{
            System.out.printf("Foi descontado R$12,00 da sua conta!");
            this.saldo -= 12.0;
            System.out.println("Saldo da conta: R$" + saldo);
            if (saldo<0.0){
                System.out.printf("Você possui depito em sua conta!");
            }
        }

    }
}