import java.util.Scanner;
public class InversorString {
    // Metodo principal para executar o programa.
    // Le cada linha da entrada padrao, inverte a string e a imprime na saida padrao.
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String linha;
        while (scanner.hasNextLine()) {
            linha = scanner.nextLine();
            if (linha.equalsIgnoreCase("FIM")) {
                break;
            }
            System.out.println(inverterString(linha));
        }
        scanner.close();
    }
    //  Metodo iterativo para inverter uma string.
    //  Este metodo percorre a string de entrada do ultimo ao primeiro caractere,
    //  construindo uma nova string que e o inverso da original.
    public static String inverterString(String s) {
        String invertida = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            invertida += s.charAt(i);
        }
        return invertida;
    }
}