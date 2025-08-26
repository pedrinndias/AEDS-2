import java.util.Scanner;
class palindromo { 

    private String str;

    public palindromo(){str = " ";}
    public palindromo(String str){this.str=str;}

    public void setString (String str){ this.str=str;}

    public void chamarRecursivo(){ ehPalindromo(str, str.length(),0 ); } 

    private  boolean ehPalindromo(String s, int tam, int index) {
       boolean resposta;
       if(index>tam/2){
        resposta=true;
        System.out.println("SIM");
       }else if(s.charAt(index)!=s.charAt(tam-index)){
                resposta=false;
                System.out.println("NAO");
            }else {resposta=ehPalindromo(s,tam,index+1);}
            return resposta;
    }
}

public class palindromo_verde{    
        
        public static boolean isFim(String s) {
        return (s.length() == 3 && 
                s.charAt(0) == 'F' && 
                s.charAt(1) == 'I' && 
                s.charAt(2) == 'M');
        }
        
    public static void main(String[] args) {    //  Método principal que controla a execução do programa.
    //  Gerencia a leitura de dados da entrada padrão, chama a
    //  funcionalidade de verificação de palíndromo e imprime o resultado
    //  na tela até que a entrada seja a palavra "FIM".
        Scanner scanner = new Scanner(System.in);
        palindromo executor = new palindromo();
        String frase;
        frase = scanner.nextLine();
        while (!isFim(frase)) {
            executor.setString(frase);
            executor.chamarRecursivo();
            frase = scanner.nextLine();
        }
        scanner.close();
    }
}