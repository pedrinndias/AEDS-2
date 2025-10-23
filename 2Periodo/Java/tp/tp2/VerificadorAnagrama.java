import java.util.Scanner;
public class VerificadorAnagrama {
    public static boolean saoAnagramas(String s1, String s2) {
        // Se os comprimentos das strings forem diferentes, elas não podem ser anagramas.
        // Esta é a verificação mais rápida e é feita primeiro.
        if (s1.length() != s2.length()) {
            return false;
        }
        // Cria um array para funcionar como um mapa de frequência para caracteres ASCII.
        // O tamanho 256 cobre a tabela ASCII estendida.
        int[] frequencia = new int[256];
        // Itera pela primeira string, populando o mapa de frequência.
        // Para cada caractere, sua contagem correspondente no array é incrementada.
        for (int i = 0; i < s1.length(); i++) {
            char caractere = s1.charAt(i);
            // Converte o caractere para minúsculo para garantir que a comparação não diferencie maiúsculas de minúsculas (case-insensitive).
            if (caractere >= 'A' && caractere <= 'Z') {
                caractere = (char) (caractere + 32);
            }
            frequencia[caractere]++;
        }
        // Itera pela segunda string, diminuindo a contagem no mapa de frequência.
        // Se as strings forem anagramas, esta operação resultará em um mapa com todas as contagens zeradas.
        for (int i = 0; i < s2.length(); i++) {
            char caractere = s2.charAt(i);
            // Também converte para minúsculo para manter a consistência.
            if (caractere >= 'A' && caractere <= 'Z') {
                caractere = (char) (caractere + 32);
            }
            frequencia[caractere]--;
        }
        // Percorre o array de frequência para verificar o resultado final.
        // Se qualquer contagem for diferente de zero, significa que as strings não possuem os mesmos caracteres com a mesma frequência.
        for (int i = 0; i < frequencia.length; i++) {
            if (frequencia[i] != 0) {
                return false;
            }
        }
        // Se o loop terminar sem encontrar nenhuma contagem diferente de zero,as strings são anagramas.
        return true;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String linha;
        while (true) {
            linha = scanner.nextLine();
            if (linha.equals("FIM")) {
                break;
            }
            String[] partes = linha.split(" - ");
            String primeiraString = partes[0];
            String segundaString = partes[1];

            if (saoAnagramas(primeiraString, segundaString)) {
                System.out.println("SIM");
            } else {
                System.out.println("NÃO");
            }
        }
        scanner.close();
    }
}