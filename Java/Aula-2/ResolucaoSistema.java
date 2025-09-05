import java.awt.Dimension;//Para obter a resolução da tela em Java, você pode usar as classes do pacote java.awt
// (Abstract Window Toolkit), que é a biblioteca gráfica padrão do Java.
import java.awt.Toolkit;// O Toolkit é a classe que nos permite acessar várias informações
// e recursos do sistema operacional.


public class ResolucaoSistema {
    public static void main(String[] args) {
        Toolkit toolkit = Toolkit.getDefaultToolkit();// O método getDefaultToolkit() pega o toolkit padrão para o seu sistema.

        // O método getScreenSize() do Toolkit retorna um objeto do tipo Dimension.
        // Esse objeto contém a largura (width) e a altura (height) da tela principal.
        Dimension dimensaoTela = toolkit.getScreenSize();
        int largura = (int) dimensaoTela.getWidth();
        int altura = (int) dimensaoTela.getHeight();

        System.out.println(+ largura + " x " + altura);


    }
}