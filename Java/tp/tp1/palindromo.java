import java.util.Scanner;
public class palindromo {
    // Método para ler a entrada e imprimir a saída
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String linha;
        while (sc.hasNextLine()) {
            linha = sc.nextLine();
            // A condição de parada não foi especificada, usando FIM como exemplo
            if (linha.equals("FIM")) {
                break;
            }
            if (isPalindromo(linha)) {
                System.out.println("SIM");
            } else {
                System.out.println("NÃO");
            }
        }
        sc.close();
    }
    /**
     * @param s A string a ser verificada.
     * @return true se a string for um palíndromo, false caso contrário.
     */
    public static boolean isPalindromo(String s) {
        String apenasLetras = "";
        int i = 0;
        // Constrói uma nova string contendo apenas as letras
        for (i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            // Verifica se o caractere está entre 'A' e 'Z' ou 'a' e 'z'
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                // Converte para minúscula para a comparação ser case-insensitive
                if (c >= 'A' && c <= 'Z') {
                    c = (char) (c + ('a' - 'A'));
                }
                apenasLetras += c;
            }
        }
        int j = apenasLetras.length() - 1;
        i = 0;
        // Compara os caracteres da string de fora para dentro
        while (i < j) {
            if (apenasLetras.charAt(i) != apenasLetras.charAt(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}
