import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;

// Classe principal para carregar e buscar jogos do arquivo games.csv.
public class Main {

    public static void main(String[] args) {
        String csvFile = "games.csv";
        Game[] gameList = null;

        try {
            // Etapa 1: Carregar todos os jogos do CSV para a memória.
            BufferedReader counterReader = new BufferedReader(new FileReader(csvFile));
            int lineCount = 0;
            counterReader.readLine(); // Pula cabeçalho
            while (counterReader.readLine() != null) {
                lineCount++;
            }
            counterReader.close();

            gameList = new Game[lineCount];
            int gameIndex = 0;

            BufferedReader fileReader = new BufferedReader(new FileReader(csvFile));
            fileReader.readLine(); // Pula cabeçalho novamente
            String line;
            while ((line = fileReader.readLine()) != null) {
                String[] fields = manualCsvSplit(line);
                if (gameIndex < gameList.length) {
                    gameList[gameIndex] = new Game(fields);
                    gameIndex++;
                }
            }
            fileReader.close();

            // Etapa 2: Ler IDs da entrada padrão e buscar os jogos.
            BufferedReader stdinReader = new BufferedReader(new InputStreamReader(System.in));
            String inputId;
            while (!(inputId = stdinReader.readLine()).equals("FIM")) {
                int targetId = manualParseInt(inputId);

                // Busca o jogo no array pelo ID.
                for (int i = 0; i < gameList.length; i++) {
                    if (gameList[i].getId() == targetId) {
                        System.out.println(gameList[i].toString());
                        break;
                    }
                }
            }
            stdinReader.close();

        } catch (Exception e) {
            System.out.println("Ocorreu um erro: " + e.getMessage());
        }
    }

    // Converte o ID da entrada (string) para inteiro.
    public static int manualParseInt(String s) {
        if (s == null || s.length() == 0) return 0;
        int result = 0, i = 0;
        boolean isNegative = false;
        if (s.charAt(0) == '-') { isNegative = true; i = 1; }
        for (; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c >= '0' && c <= '9') result = result * 10 + (c - '0');
            else return 0;
        }
        return isNegative ? -result : result;
    }

    // Divide uma linha do CSV, respeitando as aspas.
    public static String[] manualCsvSplit(String line) {
        String[] result = new String[14];
        for (int i = 0; i < 14; i++) result[i] = "";

        int fieldIndex = 0;
        boolean inQuotes = false;
        for(int i = 0; i < line.length(); i++) {
            char c = line.charAt(i);
            if (c == '"') {
                inQuotes = !inQuotes;
            } else if (c == ',' && !inQuotes) {
                fieldIndex++;
            } else {
                if(fieldIndex < result.length) {
                    result[fieldIndex] += c;
                }
            }
        }
        return result;
    }
}