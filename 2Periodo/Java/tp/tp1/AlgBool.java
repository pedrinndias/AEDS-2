import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class AlgBool {
    // Metodo para comparar duas strings, caractere por caractere.
    // Necessario para evitar o uso do metodo .equals() da classe String,
    public static boolean comparaStrings(String s1, String s2) {
        boolean saoIguais = s1.length() == s2.length();
        if (saoIguais) {
            for (int i = 0; i < s1.length(); i++) {
                if (s1.charAt(i) != s2.charAt(i)) {
                    saoIguais = false;
                    break;
                }
            }
        }
        return saoIguais;
    }
    //  Avalia uma expressao booleana contida em uma string.
    //  O metodo e iterativo e funciona substituindo as sub-expressoes mais internas
    //  pelos seus resultados ate que a expressao inteira seja reduzida a um unico valor.
    public static boolean resolverExpressao(String s) {
        // Remove todos os espacos da string para simplificar o processamento
        String semEspacos = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) != ' ') {
                semEspacos += s.charAt(i);
            }
        }
        // Determina o numero de variaveis (A, B, C...) e seus valores
        int numVariaveis = semEspacos.charAt(0) - '0';
        boolean[] valores = new boolean[numVariaveis];
        for (int i = 0; i < numVariaveis; i++) {
            valores[i] = (semEspacos.charAt(i + 1) == '1');
        }
        // Extrai a expressao e substitui as letras (A, B, C) por seus valores (0, 1)
        String expressao = "";
        int inicioExpressao = 1 + numVariaveis;
        for (int i = inicioExpressao; i < semEspacos.length(); i++) {
            char c = semEspacos.charAt(i);
            if (c >= 'A' && c <= 'C') {
                expressao += (valores[c - 'A'] ? '1' : '0');
            } else {
                expressao += c;
            }
        }
        // Loop principal: resolve a expressao de dentro para fora
        while (expressao.length() > 1) {
            int idxUltimoAbre = -1;
            // Encontra a sub-expressao mais interna 
            for (int i = 0; i < expressao.length(); i++) {
                if (expressao.charAt(i) == '(') {
                    idxUltimoAbre = i;
                }
            }
            // Encontra o parenteses de fechamento correspondente
            int idxPrimeiroFecha = -1;
            for (int i = idxUltimoAbre; i < expressao.length(); i++) {
                if (expressao.charAt(i) == ')') {
                    idxPrimeiroFecha = i;
                    break;
                }
            }
            // Extrai os operandos de dentro dos parenteses
            String operandos = "";
            for (int i = idxUltimoAbre + 1; i < idxPrimeiroFecha; i++) {
                operandos += expressao.charAt(i);
            }
            // Identifica o operador
            int idxInicioOperador = 0;
            if (expressao.charAt(idxUltimoAbre - 1) == 't') { // not
                idxInicioOperador = idxUltimoAbre - 3;
            } else if (expressao.charAt(idxUltimoAbre - 1) == 'd') { // and
                idxInicioOperador = idxUltimoAbre - 3;
            } else if (expressao.charAt(idxUltimoAbre - 1) == 'r') { // or
                idxInicioOperador = idxUltimoAbre - 2;
            }
            String operador = "";
            for(int i = idxInicioOperador; i < idxUltimoAbre; i++){
                operador += expressao.charAt(i);
            }
            // Realiza a operacao logica
            char resultadoChar;
            if (comparaStrings(operador, "not")) {
                resultadoChar = (operandos.charAt(0) == '0') ? '1' : '0';
            } else {
                boolean resultadoBool;
                if (comparaStrings(operador, "and")) {
                    resultadoBool = true;
                    for (int i = 0; i < operandos.length(); i++) {
                        if (operandos.charAt(i) == '0') {
                            resultadoBool = false;
                            break;
                        }
                    }
                } else { 
                    resultadoBool = false;
                    for (int i = 0; i < operandos.length(); i++) {
                        if (operandos.charAt(i) == '1') {
                            resultadoBool = true;
                            break;
                        }
                    }
                }
                resultadoChar = resultadoBool ? '1' : '0';
            }
            // Reconstroi a string, substituindo a operacao resolvida pelo seu resultado
            String novaExpressao = "";
            for(int i = 0; i < idxInicioOperador; i++){
                novaExpressao += expressao.charAt(i);
            }
            novaExpressao += resultadoChar;
            for(int i = idxPrimeiroFecha + 1; i < expressao.length(); i++){
                novaExpressao += expressao.charAt(i);
            }
            expressao = novaExpressao;
        }
        return (expressao.charAt(0) == '1');
    }
    // Metodo principal que le as linhas da entrada padrao, chama o metodo de resolucao
    // para cada uma e imprime o resultado formatado.
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String linha;
        // Le as linhas da entrada ate encontrar uma com "0" ou o fim do arquivo.
        // A condicao de parada na imagem nao e "FIM", mas sim uma linha comecando com "0".
        while ((linha = reader.readLine()) != null && linha.charAt(0) != '0') {
            boolean resultado = resolverExpressao(linha);
            if (resultado) {
                // A saida esperada e 1 para verdadeiro.
                System.out.println("1");
            } else {
                // A saida esperada e 0 para falso.
                System.out.println("0");
            }
        }
    }
}