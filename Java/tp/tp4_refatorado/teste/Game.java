import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;

// Modela um jogo e contém o método principal para execução.
public class Game {

    //Atributos
    private int id;
    private String name;
    private String releaseDate;
    private int estimatedOwners;
    private float price;
    private String[] supportedLanguages;
    private int metacriticScore;
    private float userScore;
    private int achievements;
    private String[] publishers;
    private String[] developers;
    private String[] categories;
    private String[] genres;
    private String[] tags;

    //Lógica Principal
    public static void main(String[] args) {
        String csvFile = "/tmp/games.csv";
        Game[] gameList = null;

        try {
            // Etapa 1: Carrega todos os jogos do CSV para a memória.
            BufferedReader fileReader = new BufferedReader(new FileReader(csvFile));

            // Contagem de linhas para criar o array.
            int lineCount = 0;
            fileReader.readLine(); // Pula o cabeçalho.
            while (fileReader.readLine() != null) {
                lineCount++;
            }
            fileReader.close();

            // Leitura e preenchimento do array.
            gameList = new Game[lineCount];
            fileReader = new BufferedReader(new FileReader(csvFile));
            fileReader.readLine(); // Pula o cabeçalho novamente.
            String line;
            int gameIndex = 0;
            while ((line = fileReader.readLine()) != null) {
                if (gameIndex < gameList.length) {
                    gameList[gameIndex] = new Game(line);
                    gameIndex++;
                }
            }
            fileReader.close();

            // Etapa 2: Lê os IDs da entrada padrão e busca os jogos.
            BufferedReader stdinReader = new BufferedReader(new InputStreamReader(System.in));
            String inputId;
            while (!(inputId = stdinReader.readLine()).equals("FIM")) {
                int targetId = manualParseInt(inputId);
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

    //Construtor
    public Game(String line) {
        IntWrapper index = new IntWrapper();

        this.id = manualParseInt(getNextField(line, index));
        this.name = getNextField(line, index);

        String dateField = getNextField(line, index);
        this.releaseDate = formatDate(dateField);

        this.estimatedOwners = manualParseInt(getNextField(line, index));

        String priceField = getNextField(line, index);
        this.price = (manualEquals(priceField, "Free to Play") || priceField.length() == 0) ? 0.0f : manualParseFloat(priceField);

        this.supportedLanguages = parseArrayField(getNextField(line, index));
        this.metacriticScore = manualParseInt(getNextField(line, index));
        this.userScore = manualParseFloat(getNextField(line, index));
        this.achievements = manualParseInt(getNextField(line, index));
        this.publishers = manualSplit(getNextField(line, index), ',');
        this.developers = manualSplit(getNextField(line, index), ',');
        this.categories = manualSplit(getNextField(line, index), ',');
        this.genres = manualSplit(getNextField(line, index), ',');
        this.tags = manualSplit(getNextField(line, index), ',');
    }

    public int getId() { return id; }
    // Lê o próximo campo da linha CSV, controlando a posição com o IntWrapper.
    private static String getNextField(String line, IntWrapper index) {
        String field = "";
        boolean inQuotes = false;
        if (index.value > 0 && index.value < line.length()) index.value++;
        int i = index.value;
        if (i < line.length() && line.charAt(i) == '"') { inQuotes = true; i++; }
        while (i < line.length()) {
            char c = line.charAt(i);
            if (inQuotes) {
                if (c == '"') { i++; break; }
                field += c;
            } else {
                if (c == ',') break;
                field += c;
            }
            i++;
        }
        index.value = i;
        return field;
    }

    // Converte uma string para inteiro
    private static int manualParseInt(String s) {
        s = manualTrim(s);
        if (s == null || s.length() == 0) return 0;
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c >= '0' && c <= '9') result = result * 10 + (c - '0');
        }
        return result;
    }

    // Converte uma string para float
    private static float manualParseFloat(String s) {
        s = manualTrim(s);
        if (s == null || s.length() == 0) return 0.0f;
        float result = 0.0f;
        int i = 0;
        while (i < s.length() && s.charAt(i) != '.') {
            char c = s.charAt(i);
            if (c >= '0' && c <= '9') result = result * 10 + (c - '0');
            i++;
        }
        if (i < s.length() && s.charAt(i) == '.') {
            i++;
            float divisor = 10.0f;
            while (i < s.length()) {
                char c = s.charAt(i);
                if (c >= '0' && c <= '9') {
                    result += (c - '0') / divisor;
                    divisor *= 10.0f;
                }
                i++;
            }
        }
        return result;
    }

    // Formata a string de data para o padrão dd/MM/yyyy.
    private static String formatDate(String field) {
        String dia = "", mes = "01", ano = "0000";
        String monthStr = "";
        int i = 0;
        while(i < field.length() && field.charAt(i) != ' ') { monthStr += field.charAt(i); i++; }
        if (manualEquals(monthStr, "Jan")) mes = "01"; else if (manualEquals(monthStr, "Feb")) mes = "02"; else if (manualEquals(monthStr, "Mar")) mes = "03"; else if (manualEquals(monthStr, "Apr")) mes = "04"; else if (manualEquals(monthStr, "May")) mes = "05"; else if (manualEquals(monthStr, "Jun")) mes = "06"; else if (manualEquals(monthStr, "Jul")) mes = "07"; else if (manualEquals(monthStr, "Aug")) mes = "08"; else if (manualEquals(monthStr, "Sep")) mes = "09"; else if (manualEquals(monthStr, "Oct")) mes = "10"; else if (manualEquals(monthStr, "Nov")) mes = "11"; else if (manualEquals(monthStr, "Dec")) mes = "12";
        while(i < field.length() && (field.charAt(i) < '0' || field.charAt(i) > '9')) i++;
        while(i < field.length() && (field.charAt(i) >= '0' && field.charAt(i) <= '9')) { dia += field.charAt(i); i++; }
        while(i < field.length() && (field.charAt(i) < '0' || field.charAt(i) > '9')) i++;
        while(i < field.length() && (field.charAt(i) >= '0' && field.charAt(i) <= '9')) { ano += field.charAt(i); i++; }
        if (dia.length() == 0) dia = "01";
        if (ano.length() < 4) ano = "0000";
        return dia + "/" + mes + "/" + ano;
    }

    // Processa campos de array que contêm colchetes e aspas simples.
    private static String[] parseArrayField(String field) {
        if (field.length() <= 2) return new String[0];
        String content = "";
        for (int i = 0; i < field.length(); i++) {
            char c = field.charAt(i);
            if (c != '[' && c != ']' && c != '\'') content += c;
        }
        return manualSplit(content, ',');
    }

    // Divide uma string por um delimitador
    private static String[] manualSplit(String text, char delimiter) {
        text = manualTrim(text);
        int count = 1;
        for (int i = 0; i < text.length(); i++) if (text.charAt(i) == delimiter) count++;
        String[] result = new String[count];
        for (int i = 0; i < count; i++) result[i] = "";
        int arrayIndex = 0;
        for (int i = 0; i < text.length(); i++) {
            if (text.charAt(i) == delimiter) { result[arrayIndex] = manualTrim(result[arrayIndex]); arrayIndex++; }
            else result[arrayIndex] += text.charAt(i);
        }
        result[arrayIndex] = manualTrim(result[arrayIndex]);
        return result;
    }

    // Remove espaços das bordas de uma string
    private static String manualTrim(String s) {
        if (s == null) return "";
        int start = 0, end = s.length() - 1;
        while (start <= end && s.charAt(start) == ' ') start++;
        while (end >= start && s.charAt(end) == ' ') end--;
        String result = "";
        for (int i = start; i <= end; i++) result += s.charAt(i);
        return result;
    }

    // Compara duas strings
    private static boolean manualEquals(String s1, String s2) {
        if (s1.length() != s2.length()) return false;
        for (int i = 0; i < s1.length(); i++) if (s1.charAt(i) != s2.charAt(i)) return false;
        return true;
    }

    // Classe auxiliar para passar o índice da linha por referência.
    static class IntWrapper { int value = 0; }

    // Converte um array para uma string formatada.
    private String manualArrayToString(String[] arr) {
        if (arr == null || arr.length == 0 || (arr.length == 1 && arr[0].length() == 0) ) return "[]";
        String result = "[";
        for (int i = 0; i < arr.length; i++) {
            result += arr[i];
            if (i < arr.length - 1) result += ", ";
        }
        result += "]";
        return result;
    }

    // Gera a string de saída
    public String toString() {
        String date = this.releaseDate;
        if (date.length() > 1 && date.charAt(1) == '/') {
            date = "0" + date;
        }

        return "=> " + this.id + " ## " + this.name + " ## " + date
                + " ## " + this.estimatedOwners + " ## " + this.price
                + " ## " + manualArrayToString(this.supportedLanguages)
                + " ## " + (this.metacriticScore == 0 ? -1 : this.metacriticScore)
                + " ## " + (this.userScore == 0 ? -1.0f : this.userScore)
                + " ## " + this.achievements
                + " ## " + manualArrayToString(this.publishers)
                + " ## " + manualArrayToString(this.developers)
                + " ## " + manualArrayToString(this.categories)
                + " ## " + manualArrayToString(this.genres)
                + " ## " + manualArrayToString(this.tags)
                + " ##";
    }
}