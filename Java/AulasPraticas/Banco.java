import java.util.Scanner;
import java.util.ArrayList;
public class Banco {
    public static void main(String[] args) {
        ArrayList<ContaBanco> contas = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);
        int opcao;

        do {
            System.out.println("\n========= BANCO DIGITAL =========");
            System.out.println("1- Abrir uma nova conta");
            System.out.println("2- Acessar uma conta existente");
            System.out.println("3- Sair");
            System.out.print("Escolha uma opção: ");
            opcao = scanner.nextInt();

            switch(opcao){
                case 1:
                    ContaBanco contaRecemCriada = criarNovaConta(scanner);
                    contas.add(contaRecemCriada);
                    System.out.println("------------------------------------");
                    System.out.println("Conta para " + contaRecemCriada.getDono() + " criada com sucesso!");
                    System.out.println("------------------------------------");
                    break;
                case 2:
                    acessarConta(contas, scanner);
                    break;

                case 3:
                    System.out.println("Obrigado por usar nosso banco!");
                    break;

                default:
                    System.out.println("Opção inválida!");
                    break;
            }
        }while(opcao!=3);
        System.out.println("Saindo...");
        scanner.close();
    }

    // MÉTODO "FÁBRICA" DE CONTAS
    public static ContaBanco criarNovaConta(Scanner scanner) {
        System.out.println("\n--- Abertura de Nova Conta ---");

        System.out.print("Digite o número da conta: ");
        int numero = scanner.nextInt();

        System.out.print("Escolha o tipo (1- Poupança / 2- Corrente): ");
        int tipoOpcao = scanner.nextInt();
        while (tipoOpcao != 1 && tipoOpcao != 2) {
            System.out.print("Opção inválida. Digite 1 para Poupança ou 2 para Corrente: ");
            tipoOpcao = scanner.nextInt();
        }
        scanner.nextLine(); // Limpa o buffer do scanner

        String tipoConta = (tipoOpcao == 1) ? "CP" : "CC";

        System.out.print("Digite o nome do titular: ");
        String dono = scanner.nextLine();

        ContaBanco novaConta = new ContaBanco();
        // AQUI ACONTECE A INTERAÇÃO:
        // O Banco (gerente) está passando as informações para o objeto ContaBanco.
        novaConta.abrirConta(tipoConta, dono, numero);

        return novaConta;
    }

    // MÉTODO PARA ACESSAR UMA CONTA EXISTENTE
    public static void acessarConta(ArrayList<ContaBanco> listaDeContas, Scanner scanner) {
        if (listaDeContas.isEmpty()) {
            System.out.println("Nenhuma conta foi criada ainda!");
            return;
        }

        System.out.print("Digite o número da conta que deseja acessar: ");
        int numProcurado = scanner.nextInt();
        ContaBanco contaEncontrada = null;

        for (ContaBanco conta : listaDeContas) {
            if (conta.getNumConta() == numProcurado) {
                contaEncontrada = conta;
                break;
            }
        }

        if (contaEncontrada != null) {
            int opcaoConta;
            do {
                System.out.println("\n--- Menu da Conta de " + contaEncontrada.getDono() + " ---");
                System.out.println("Saldo Atual: R$" + contaEncontrada.getSaldo());
                System.out.println("1- Depositar");
                System.out.println("2- Sacar");
                System.out.println("3- Pagar Mensalidade");
                System.out.println("4- Voltar ao Menu Principal");
                System.out.print("Escolha uma opção: ");
                opcaoConta = scanner.nextInt();

                switch (opcaoConta) {
                    case 1:
                        System.out.print("Digite o valor para depositar: ");
                        double valorDeposito = scanner.nextDouble();
                        contaEncontrada.depositar(valorDeposito);
                        break;
                    case 2:
                        System.out.print("Digite o valor para sacar: ");
                        double valorSaque = scanner.nextDouble();
                        contaEncontrada.sacar(valorSaque);
                        break;
                    case 3:
                        contaEncontrada.pagarMensal();
                        break;
                    case 4:
                        System.out.println("Voltando ao menu principal...");
                        break;
                    default:
                        System.out.println("Opção inválida!");
                        break;
                }
            } while (opcaoConta != 4);

        } else {
            System.out.println("Conta com número " + numProcurado + " não encontrada.");
        }
    }

}