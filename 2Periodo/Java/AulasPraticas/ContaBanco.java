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

    // 2. MÉTODO DEPOSITAR CORRIGID
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




//-------------------------------------------------------------------------------




// Importa a classe Scanner. Embora o código tenha sido refatorado para não usar mais o Scanner
// diretamente nesta classe, a importação ainda está aqui. O ideal seria removê-la.
import java.util.Scanner;

// Declaração da classe pública ContaBanco. Esta classe servirá como um "molde" para criar
// todos os objetos de conta bancária em nosso sistema.
public class ContaBanco{

    // ATRIBUTOS (CARACTERÍSTICAS DA CONTA)

    // Cria um objeto Scanner. Esta linha é um resquício da versão antiga e deve ser removida,
    // pois a responsabilidade de interagir com o usuário foi movida para a classe Banco.
    Scanner scanner = new Scanner(System.in);

    // Atributo para o número da conta. Está como "public", o que não é uma boa prática.
    // O ideal é que todos os atributos sejam "private" para proteger os dados (encapsulamento).
    public int numConta;

    // Atributo para o tipo da conta (CP ou CC). "protected" significa que ele é acessível
    // dentro da própria classe, por classes no mesmo pacote e por subclasses. Também deve ser "private".
    protected String tipo;

    // Atributo para o nome do dono da conta. "private" é o modificador de acesso correto,
    // significa que este atributo só pode ser acessado de dentro desta classe.
    private String dono;

    // Atributo para o saldo da conta.
    private double saldo;

    // Atributo para o status da conta (aberta/true ou fechada/false).
    private boolean status;

    // MÉTODO CONSTRUTOR
    // O construtor é um método especial executado sempre que um novo objeto ContaBanco é criado (com "new ContaBanco()").
    public ContaBanco() {
        // Define o status inicial de uma nova conta como "fechada". Ela só será ativada no método abrirConta.
        this.status = false;
        // Define o saldo inicial de qualquer conta nova como 0.0.
        this.saldo = 0.0;
    }

    // MÉTODOS GETTERS E SETTERS
    // São métodos públicos que fornecem acesso controlado aos atributos privados, um princípio do encapsulamento.

    // "Getter" para o número da conta. Retorna o valor de numConta.
    public int getNumConta() {
        return numConta;
    }
    // "Setter" para o número da conta. Permite modificar o valor de numConta.
    public void setNumConta(int numConta) {
        this.numConta = numConta;
    }

    // Getter para o tipo da conta.
    public String getTipo() {
        return tipo;
    }
    // Setter para o tipo da conta.
    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    // Getter para o nome do dono.
    public String getDono() {
        return dono;
    }
    // Setter para o nome do dono.
    public void setDono(String dono) {
        this.dono = dono;
    }

    // Getter para o saldo.
    public double getSaldo() {
        return saldo;
    }
    // Setter para o saldo.
    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    // Getter para o status. Para booleanos, a convenção é usar "is" em vez de "get".
    public boolean isStatus() {
        return status;
    }
    // Setter para o status.
    public void setStatus(boolean status) {
        this.status = status;
    }

    // MÉTODOS OPERACIONAIS (COMPORTAMENTOS DA CONTA)

    // Método para configurar os dados de uma conta ao abri-la.
    // Ele recebe os dados como parâmetros, em vez de perguntar ao usuário.
    public void abrirConta(String pTipo, String pDono, int pNumConta) {
        // Usa os setters para atribuir os valores recebidos aos atributos do objeto.
        this.setTipo(pTipo);
        this.setDono(pDono);
        this.setNumConta(pNumConta);
        // Ativa a conta, mudando seu status para "true".
        this.setStatus(true);
        // Estrutura condicional para dar um saldo inicial bônus dependendo do tipo da conta.
        if ("CP".equals(pTipo)) { // Compara strings da forma correta para evitar erros.
            this.setSaldo(150.0); // Bônus para Conta Poupança.
        } else if ("CC".equals(pTipo)) {
            this.setSaldo(50.0); // Bônus para Conta Corrente.
        }
    }

    // Método para fechar a conta.
    public void fecharConta(){
        // Verifica se há saldo positivo. Não se pode fechar uma conta com dinheiro nela.
        if (this.saldo > 0) {
            System.out.println("A conta não pode ser fechada pois ainda há dinheiro.");
            // Verifica se há saldo negativo (dívidas).
        } else if (this.saldo < 0) {
            System.out.println("A conta não pode ser fechada pois há débitos pendentes.");
            // Se o saldo for exatamente zero...
        } else {
            // Desativa a conta, mudando seu status para "false".
            this.setStatus(false);
            System.out.println("Conta fechada com sucesso!");
        }
    }

    // Método para adicionar dinheiro à conta. Recebe o valor a ser depositado.
    public void depositar(double valor) {
        // Verifica se a conta está ativa. Só se pode depositar em contas abertas.
        if (this.isStatus()) {
            // Verifica se o valor a ser depositado é positivo.
            if (valor > 0) {
                // Adiciona o valor ao saldo atual.
                this.setSaldo(this.getSaldo() + valor);
                System.out.println("Depósito de R$" + valor + " realizado com sucesso.");
            } else {
                System.out.println("Valor de depósito inválido.");
            }
        } else {
            System.out.println("Ação indisponível! Conta está fechada.");
        }
    }

    // Método para retirar dinheiro da conta. Recebe o valor a ser sacado.
    public void sacar(double valor) {
        // Verifica se a conta está ativa.
        if (this.isStatus()) {
            // Verifica se há saldo suficiente E se o valor do saque é positivo.
            if (this.getSaldo() >= valor && valor > 0) {
                // Subtrai o valor do saldo atual.
                this.setSaldo(this.getSaldo() - valor);
                System.out.println("Saque de R$" + valor + " realizado com sucesso!");
            } else {
                System.out.println("Saldo insuficiente ou valor de saque inválido.");
            }
        } else {
            System.out.println("Ação indisponível! Conta está fechada.");
        }
    }

    // Método para pagar a taxa de manutenção mensal.
    public void pagarMensal(){
        System.out.println("Tipo da conta: " + tipo);
        // printf não pula linha automaticamente, por isso a próxima impressão aparece ao lado.
        System.out.printf("Processando ...");
        // Verifica se a conta é do tipo Poupança ("CP").
        if ("CP".equals(tipo)){
            System.out.printf("Foi descontado R$20,00 da sua conta!");
            // Subtrai a taxa de R$20.00 do saldo.
            this.saldo -= 20.0;
            System.out.println("Saldo da conta: R$" + saldo);
            // Verifica se o saldo ficou negativo após o desconto.
            if (saldo<0.0){
                System.out.printf("Você possui debito em sua conta!");
            }
            // Se não for "CP", assume-se que é "CC".
        }else{
            System.out.printf("Foi descontado R$12,00 da sua conta!");
            // Subtrai a taxa de R$12.00 do saldo.
            this.saldo -= 12.0;
            System.out.println("Saldo da conta: R$" + saldo);
            // Verifica se o saldo ficou negativo.
            if (saldo<0.0){
                System.out.printf("Você possui debito em sua conta!");
            }
        }
    }
}