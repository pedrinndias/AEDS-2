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



//------------------------------------------------------------------------------------------



  // Importa a classe Scanner, que nos permite ler a entrada do teclado do usuário.
import java.util.Scanner;
// Importa a classe ArrayList, que é uma lista dinâmica para armazenar nossos objetos de conta.
import java.util.ArrayList;

// Declaração da classe principal do nosso programa.
public class Banco {

    // O método main é o ponto de entrada de qualquer programa Java. É aqui que a execução começa.
    public static void main(String[] args) {

        // Cria uma lista (ArrayList) para armazenar todos os objetos do tipo ContaBanco.
        // É como um fichário onde guardaremos todas as contas que forem criadas.
        ArrayList<ContaBanco> contas = new ArrayList<>();

        // Cria um objeto Scanner, que será nossa ferramenta para ler o que o usuário digita no console.
        Scanner scanner = new Scanner(System.in);

        // Declara uma variável inteira para guardar a opção escolhida pelo usuário no menu principal.
        int opcao;

        // Inicia um loop "do-while". O código dentro dele será executado pelo menos uma vez
        // e continuará repetindo enquanto a condição no "while" for verdadeira.
        do {
            // Imprime o menu principal de opções para o usuário.
            System.out.println("\n========= BANCO DIGITAL =========");
            System.out.println("1- Abrir uma nova conta");
            System.out.println("2- Acessar uma conta existente");
            System.out.println("3- Sair");
            System.out.print("Escolha uma opção: ");

            // Lê o número que o usuário digitou e o armazena na variável "opcao".
            opcao = scanner.nextInt();

            // A estrutura "switch" avalia o valor da variável "opcao" e executa o bloco de código correspondente.
            switch(opcao){
                // Se o usuário digitou 1...
                case 1:
                    // Chama o nosso método "fábrica" para criar um novo objeto ContaBanco.
                    ContaBanco contaRecemCriada = criarNovaConta(scanner);
                    // Adiciona o objeto recém-criado (a conta) à nossa lista de contas.
                    contas.add(contaRecemCriada);
                    // Imprime uma mensagem de sucesso para o usuário.
                    System.out.println("------------------------------------");
                    System.out.println("Conta para " + contaRecemCriada.getDono() + " criada com sucesso!");
                    System.out.println("------------------------------------");
                    // O "break" encerra a execução do switch.
                    break;
                // Se o usuário digitou 2...
                case 2:
                    // Chama o método responsável por encontrar e gerenciar uma conta existente.
                    // Passamos a lista de contas e o scanner como argumentos.
                    acessarConta(contas, scanner);
                    break;

                // Se o usuário digitou 3...
                case 3:
                    // Imprime uma mensagem de despedida.
                    System.out.println("Obrigado por usar nosso banco!");
                    break;

                // O "default" é executado se o usuário digitar qualquer valor que não seja 1, 2 ou 3.
                default:
                    System.out.println("Opção inválida!");
                    break;
            }
            // O loop continua enquanto a opção escolhida pelo usuário for diferente de 3.
        } while(opcao!=3);

        // Mensagem final após o loop terminar.
        System.out.println("Saindo...");
        // Fecha o objeto Scanner para liberar recursos do sistema. É uma boa prática fazer isso no final.
        scanner.close();
    }

    // Este é o nosso método "fábrica". Sua única responsabilidade é criar e retornar um objeto ContaBanco pronto.
    // Ele é "static" para que possamos chamá-lo diretamente do método "main".
    public static ContaBanco criarNovaConta(Scanner scanner) {
        System.out.println("\n--- Abertura de Nova Conta ---");

        System.out.print("Digite o número da conta: ");
        // Lê o número da conta digitado pelo usuário.
        int numero = scanner.nextInt();

        System.out.print("Escolha o tipo (1- Poupança / 2- Corrente): ");
        // Lê a opção de tipo de conta.
        int tipoOpcao = scanner.nextInt();
        // Loop de validação: enquanto o usuário não digitar 1 ou 2, o programa insiste na pergunta.
        while (tipoOpcao != 1 && tipoOpcao != 2) {
            System.out.print("Opção inválida. Digite 1 para Poupança ou 2 para Corrente: ");
            tipoOpcao = scanner.nextInt();
        }
        // Esta linha é CRUCIAL. Após ler um número com nextInt(), o "Enter" fica no buffer.
        // Esta linha consome esse "Enter" para que a próxima leitura de texto (nextLine) funcione corretamente.
        scanner.nextLine();

        // Operador ternário: uma forma compacta de um "if-else".
        // Se tipoOpcao for 1, tipoConta será "CP". Senão, será "CC".
        String tipoConta = (tipoOpcao == 1) ? "CP" : "CC";

        System.out.print("Digite o nome do titular: ");
        // Lê o nome completo do titular da conta.
        String dono = scanner.nextLine();

        // Cria uma nova instância (objeto) da classe ContaBanco.
        ContaBanco novaConta = new ContaBanco();

        // Chama o método "abrirConta" do objeto recém-criado para configurar seus dados internos,
        // passando as informações que acabamos de coletar.
        novaConta.abrirConta(tipoConta, dono, numero);

        // Retorna o objeto ContaBanco totalmente configurado.
        return novaConta;
    }

    // Método para encontrar uma conta na lista e permitir operações nela.
    public static void acessarConta(ArrayList<ContaBanco> listaDeContas, Scanner scanner) {
        // Primeira verificação: se a lista de contas está vazia, não há o que acessar.
        if (listaDeContas.isEmpty()) {
            System.out.println("Nenhuma conta foi criada ainda!");
            // "return" encerra a execução do método aqui mesmo.
            return;
        }

        System.out.print("Digite o número da conta que deseja acessar: ");
        // Pede ao usuário o número da conta para busca.
        int numProcurado = scanner.nextInt();
        // Declara uma variável para guardar a conta que encontrarmos. Começa como nula (não encontrada).
        ContaBanco contaEncontrada = null;

        // Este é um loop "for-each". Ele percorre cada item da "listaDeContas".
        // A cada iteração, o item atual é colocado na variável "conta".
        for (ContaBanco conta : listaDeContas) {
            // Verifica se o número da conta atual ("conta") é igual ao número que estamos procurando.
            if (conta.getNumConta() == numProcurado) {
                // Se encontrarmos, guardamos o objeto na nossa variável "contaEncontrada".
                contaEncontrada = conta;
                // "break" para o loop de busca, pois já achamos o que queríamos.
                break;
            }
        }

        // Após o loop, verificamos se a "contaEncontrada" ainda é nula ou não.
        if (contaEncontrada != null) { // Se não for nula, significa que encontramos a conta.
            int opcaoConta;
            // Inicia um novo loop do-while para o menu de operações da conta específica.
            do {
                System.out.println("\n--- Menu da Conta de " + contaEncontrada.getDono() + " ---");
                System.out.println("Saldo Atual: R$" + contaEncontrada.getSaldo());
                System.out.println("1- Depositar");
                System.out.println("2- Sacar");
                System.out.println("3- Pagar Mensalidade");
                System.out.println("4- Voltar ao Menu Principal");
                System.out.print("Escolha uma opção: ");
                opcaoConta = scanner.nextInt();

                // Um novo switch para as operações da conta encontrada.
                switch (opcaoConta) {
                    case 1:
                        System.out.print("Digite o valor para depositar: ");
                        double valorDeposito = scanner.nextDouble();
                        // Chama o método "depositar" do objeto específico que encontramos.
                        contaEncontrada.depositar(valorDeposito);
                        break;
                    case 2:
                        System.out.print("Digite o valor para sacar: ");
                        double valorSaque = scanner.nextDouble();
                        // Chama o método "sacar" do objeto específico que encontramos.
                        contaEncontrada.sacar(valorSaque);
                        break;
                    case 3:
                        // Chama o método "pagarMensal" do objeto específico.
                        contaEncontrada.pagarMensal();
                        break;
                    case 4:
                        System.out.println("Voltando ao menu principal...");
                        break;
                    default:
                        System.out.println("Opção inválida!");
                        break;
                }
                // Este loop continua enquanto a opção for diferente de 4 (Voltar).
            } while (opcaoConta != 4);

        } else { // Se contaEncontrada" ainda for nula significa que o loop terminou e não achamos a conta.
            System.out.println("Conta com número " + numProcurado + " não encontrada.");
        }
    }
}