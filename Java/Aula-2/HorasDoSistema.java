import java.util.Date;
public class HorasDoSistema {
    public static void main(String[] args) {
        Date relogio = new Date(); //new cria um novo objeto // Date é tipo uma struct em C, uma estrutura que cria variaveis do tipo Date
             // como eu sei que relogio é um objeto? Tem a palvra NEW depois dele
        System.out.println("A hora do sistema é"); //Agora aceita acentos no terminal
        System.out.println(relogio.toString()); //Criação de um metodo // .toString converte o objeto em string
    }
}