import java.util.Scanner;
public class palindromo_verde {
    // Método principal que lê entradas do console até encontrar a palavra "FIM".
    // Para cada linha lida, processa e verifica se é um palíndromo.
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        String entrada;
        while (true) {
            entrada = leitor.nextLine();
            if (isFim(entrada)) {
                break;
            }
            String textoFiltrado = filtrarApenasLetras(entrada);
            if (ePalindromoRecursivo(textoFiltrado)) {
                System.out.println("SIM");
            } else {
                System.out.println("NAO");
            }
        }
        leitor.close();
    }
    // Verifica se a string de entrada é a palavra "FIM".
    // Necessário para cumprir a restrição de não usar outros métodos da classe String.
    public static boolean isFim(String s) {
        return s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M';
    }
    // Cria uma nova string contendo apenas as letras da string original.
    // Isso atende à regra de que caracteres não-letras devem ser ignorados.
    public static String filtrarApenasLetras(String original) {
        String resultado = "";
        for (int i = 0; i < original.length(); i++) {
            char c = original.charAt(i);
            if (c >= 'A' && c <= 'Z') {
                resultado += (char)(c + 32);
            } else if (c >= 'a' && c <= 'z') {
                resultado += c;
            }
        }
        return resultado;
    }
    //  Verifica se uma string é um palíndromo usando um método iterativo.
    //  A lógica foi simplificada para retornar assim que uma diferença é encontrada.
    public static boolean ePalindromoIterativo(String texto) {
        int fim = texto.length() - 1;
        for (int i = 0; i < texto.length() / 2; i++) {
            if (texto.charAt(i) != texto.charAt(fim - i)) {
                return false;
            }
        }
        return true;
    }
    // Método público que inicia a verificação recursiva de palíndromo.
    // Esta estrutura com dois métodos segue a dica 4 do enunciado.
    public static boolean ePalindromoRecursivo(String texto) {
        return checaPalindromoRec(texto, 0);
    }
    // Método auxiliar, privado e recursivo, que efetivamente verifica o palíndromo.
    private static boolean checaPalindromoRec(String texto, int i) {
        int posFinal = texto.length() - 1 - i;
        if (i >= posFinal) {
            return true;
        }
        if (texto.charAt(i) != texto.charAt(posFinal)) {
            return false;
        }
        return checaPalindromoRec(texto, i + 1);
    }
}