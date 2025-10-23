import java.util.Scanner;
// Classe responsável por codificar textos utilizando o algoritmo da Cifra de César.
class Codificador {
    private String textoOriginal;
    // Construtor inicializa a classe sem texto.
    public Codificador() {
        this.textoOriginal = "";
    }
    // Define o texto que será utilizado para a codificação.
    public void setTexto(String texto) {
        this.textoOriginal = texto;
    }
// Retorna o texto original armazenado.
    public String getTexto() {
        return this.textoOriginal;
    }
//  Aplica a Cifra de César com deslocamento de 3 posições.
    public String executarCodificacao() {
        final int DESLOCAMENTO = 3;
        final char INICIO_ASCII = ' '; // Caractere 32
        final char FIM_ASCII = '~';    // Caractere 126
        StringBuilder textoCodificado = new StringBuilder();
        for (int i = 0; i < textoOriginal.length(); i++) {
            char caractereAtual = textoOriginal.charAt(i);
            if (caractereAtual >= INICIO_ASCII && caractereAtual <= FIM_ASCII) {
                int caractereComDeslocamento = caractereAtual + DESLOCAMENTO;
                if (caractereComDeslocamento > FIM_ASCII) {
                    caractereComDeslocamento = INICIO_ASCII + (caractereComDeslocamento - FIM_ASCII - 1);
                }
                textoCodificado.append((char) caractereComDeslocamento);
            } else {
                textoCodificado.append(caractereAtual);
            }
        }
        return textoCodificado.toString();
    }
}
//  Classe principal para interagir com o usuário e executar a codificação.
//  O nome do arquivo deve ser cifraMain.java
public class cifraMain {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in, "UTF-8");
        Codificador codificador = new Codificador();
        String linha;
        while (!(linha = leitor.nextLine()).equalsIgnoreCase("FIM")) {
            codificador.setTexto(linha);
            String resultado = codificador.executarCodificacao();
            System.out.println(resultado);
        }
        leitor.close();
    }
}