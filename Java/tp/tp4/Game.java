import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class Game {

    // Atributos da classe Game
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

    // Construtor Padrão
    public Game() {
    }

    // Construtor que recebe uma linha do CSV
    public Game(String csvLine) {
        String[] fields = parseCsvLine(csvLine);

        this.id = parseId(fields[0]);
        this.name = fields[1];
        this.releaseDate = parseReleaseDate(fields[2]);
        this.estimatedOwners = parseEstimatedOwners(fields[3]);
        this.price = parsePrice(fields[4]);
        this.supportedLanguages = parseStringArray(fields[5]);
        this.metacriticScore = parseMetacriticScore(fields[6]);
        this.userScore = parseUserScore(fields[7]);
        this.achievements = parseAchievements(fields[8]);
        this.publishers = parseCommaSeparatedArray(fields[9]);
        this.developers = parseCommaSeparatedArray(fields[10]);
        this.categories = parseCommaSeparatedArray(fields[11]);
        this.genres = parseCommaSeparatedArray(fields[12]);
        this.tags = parseCommaSeparatedArray(fields[13]);
    }

    private String[] parseCsvLine(String line) {
        ArrayList<String> fields = new ArrayList<>();
        StringBuilder currentField = new StringBuilder();
        boolean inQuotes = false;

        for (char c : line.toCharArray()) {
            if (c == '\"') {
                inQuotes = !inQuotes;
            } else if (c == ',' && !inQuotes) {
                fields.add(currentField.toString());
                currentField.setLength(0);
            } else {
                currentField.append(c);
            }
        }
        fields.add(currentField.toString());

        return fields.toArray(new String[0]);
    }

    // --- MÉTODOS DE PARSING E NORMALIZAÇÃO ---

    private int parseId(String idStr) {
        try {
            return Integer.parseInt(idStr.trim());
        } catch (NumberFormatException e) {
            return -1;
        }
    }

    private String parseReleaseDate(String dateStr) {
        dateStr = dateStr.trim().replaceAll("\"", "");
        String day = "01";
        String month = "01";
        String year = "0000";

        Map<String, String> monthMap = new HashMap<>();
        monthMap.put("Jan", "01"); monthMap.put("Feb", "02"); monthMap.put("Mar", "03");
        monthMap.put("Apr", "04"); monthMap.put("May", "05"); monthMap.put("Jun", "06");
        monthMap.put("Jul", "07"); monthMap.put("Aug", "08"); monthMap.put("Sep", "09");
        monthMap.put("Oct", "10"); monthMap.put("Nov", "11"); monthMap.put("Dec", "12");

        String[] parts = dateStr.replace(",", "").split(" ");

        if (parts.length >= 3) {
            month = monthMap.get(parts[0]);
            day = String.format("%02d", Integer.parseInt(parts[1]));
            year = parts[2];
        } else if (parts.length == 2) {
            month = monthMap.get(parts[0]);
            year = parts[1];
        }

        return day + "/" + month + "/" + year;
    }

    private int parseEstimatedOwners(String ownersStr) {
        if (ownersStr == null || ownersStr.trim().isEmpty()) {
            return 0;
        }
        return Integer.parseInt(ownersStr.trim());
    }

    private float parsePrice(String priceStr) {
        priceStr = priceStr.trim();
        if (priceStr.equalsIgnoreCase("Free to Play") || priceStr.isEmpty()) {
            return 0.0f;
        }
        return Float.parseFloat(priceStr);
    }

    private String[] parseStringArray(String arrayStr) {
        arrayStr = arrayStr.trim().replaceAll("^'|'$", "");
        if (arrayStr.equals("[]") || arrayStr.isEmpty()) {
            return new String[0];
        }
        return arrayStr.substring(1, arrayStr.length() - 1).split(", ");
    }

    private String[] parseCommaSeparatedArray(String str) {
        str = str.trim().replaceAll("^\"|\"$", "");
        if (str == null || str.trim().isEmpty()) {
            return new String[0];
        }
        return str.split(",");
    }

    private int parseMetacriticScore(String scoreStr) {
        scoreStr = scoreStr.trim();
        if (scoreStr.isEmpty()) {
            return -1;
        }
        return Integer.parseInt(scoreStr);
    }

    private float parseUserScore(String scoreStr) {
        scoreStr = scoreStr.trim();
        if (scoreStr.isEmpty() || scoreStr.equalsIgnoreCase("tbd")) {
            return -1.0f;
        }
        return Float.parseFloat(scoreStr);
    }

    private int parseAchievements(String achievementsStr) {
        achievementsStr = achievementsStr.trim();
        if (achievementsStr.isEmpty()) {
            return 0;
        }
        return Integer.parseInt(achievementsStr);
    }

    // --- GETTERS E SETTERS ---

    public int getId() { return id; }
    public void setId(int id) { this.id = id; }
    public String getName() { return name; }
    public void setName(String name) { this.name = name; }
    public String getReleaseDate() { return releaseDate; }
    public void setReleaseDate(String releaseDate) { this.releaseDate = releaseDate; }
    public int getEstimatedOwners() { return estimatedOwners; }
    public void setEstimatedOwners(int estimatedOwners) { this.estimatedOwners = estimatedOwners; }
    public float getPrice() { return price; }
    public void setPrice(float price) { this.price = price; }
    public String[] getSupportedLanguages() { return supportedLanguages; }
    public void setSupportedLanguages(String[] supportedLanguages) { this.supportedLanguages = supportedLanguages; }
    public int getMetacriticScore() { return metacriticScore; }
    public void setMetacriticScore(int metacriticScore) { this.metacriticScore = metacriticScore; }
    public float getUserScore() { return userScore; }
    public void setUserScore(float userScore) { this.userScore = userScore; }
    public int getAchievements() { return achievements; }
    public void setAchievements(int achievements) { this.achievements = achievements; }
    public String[] getPublishers() { return publishers; }
    public void setPublishers(String[] publishers) { this.publishers = publishers; }
    public String[] getDevelopers() { return developers; }
    public void setDevelopers(String[] developers) { this.developers = developers; }
    public String[] getCategories() { return categories; }
    public void setCategories(String[] categories) { this.categories = categories; }
    public String[] getGenres() { return genres; }
    public void setGenres(String[] genres) { this.genres = genres; }
    public String[] getTags() { return tags; }
    public void setTags(String[] tags) { this.tags = tags; }

    // --- MÉTODO TOSTRING ---

    @Override
    public String toString() {
        return "ID: " + id + "\n" +
                "Name: " + name + "\n" +
                "Release Date: " + releaseDate + "\n" +
                "Estimated Owners: " + estimatedOwners + "\n" +
                "Price: " + price + "\n" +
                "Supported Languages: " + Arrays.toString(supportedLanguages) + "\n" +
                "Metacritic Score: " + metacriticScore + "\n" +
                "User Score: " + userScore + "\n" +
                "Achievements: " + achievements + "\n" +
                "Publishers: " + Arrays.toString(publishers) + "\n" +
                "Developers: " + Arrays.toString(developers) + "\n" +
                "Categories: " + Arrays.toString(categories) + "\n" +
                "Genres: " + Arrays.toString(genres) + "\n" +
                "Tags: " + Arrays.toString(tags);
    }

    // --- MÉTODO MAIN ATUALIZADO ---

    public static void main(String[] args) {
        String csvFilePath = "games.csv";
        int lineNumber = 1; // Inicia o contador de linhas em 1

        try (BufferedReader br = new BufferedReader(new FileReader(csvFilePath))) {
            // Pula o cabeçalho do CSV
            String line = br.readLine();
            lineNumber++; // Incrementa para a primeira linha de dados

            // Laço de repetição para ler todas as linhas do arquivo
            while ((line = br.readLine()) != null) {
                try {
                    Game game = new Game(line);
                    // Imprime o cabeçalho com o número da linha
                    System.out.println("--- DADOS DO JOGO (Linha: " + lineNumber + ") ---");
                    System.out.println(game.toString());
                    System.out.println("\n========================================\n");
                } catch (Exception e) {
                    // Se uma linha específica tiver um erro, imprime o erro com o número da linha e continua
                    System.err.println("Erro ao processar a linha " + lineNumber + ": " + line);
                    e.printStackTrace();
                }
                lineNumber++; // Incrementa o contador para a próxima linha
            }

        } catch (IOException e) {
            System.err.println("Erro ao ler o arquivo: " + e.getMessage());
        }
    }
}