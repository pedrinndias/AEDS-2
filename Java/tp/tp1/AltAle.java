import java.util.Scanner;
import java.util.Random;
// Classe que manipula la substituição de caracteres em uma string.
class ManipuladorDeString {
    private String texto;
    // Construtor padrão
    public ManipuladorDeString() {
        this.texto = "";
    }
    // Define o texto a ser trabalhado
    public void setTexto(String novoTexto) {
        this.texto = novoTexto;
    }
    // Retorna o texto atual
    public String getTexto() {
        return this.texto;
    }
    // Processa a troca de um caractere por outro no texto.
    public String processarTroca(char caractereAlvo, char novoCaractere) {
        StringBuilder resultado = new StringBuilder();
        for (char c : this.texto.toCharArray()) {
            char caractereProcessado = (c == caractereAlvo) ? novoCaractere : c;
            resultado.append(caractereProcessado);
        }
        return resultado.toString();
    }
}
//  Classe principal que executa o programa.
public class AltAle {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        Random aleatorio = new Random();
        aleatorio.setSeed(4);
        ManipuladorDeString manipulador = new ManipuladorDeString();
        String linhaEntrada;
        while (!(linhaEntrada = leitor.nextLine()).equals("FIM")) {
            char charOriginal = (char) ('a' + (Math.abs(aleatorio.nextInt()) % 26));
            char charSubstituto = (char) ('a' + (Math.abs(aleatorio.nextInt()) % 26));
            manipulador.setTexto(linhaEntrada);
            String textoModificado = manipulador.processarTroca(charOriginal, charSubstituto);
            System.out.println(textoModificado);
        }
        leitor.close();
    }
}