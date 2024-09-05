import java.util.Scanner;

public class RandomWord {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String randomWord = "";
        int count = 0;

        // Continuously read words from input
        while (scanner.hasNext()) {
            String currentWord = scanner.next();
            count++;
            // Select a random word with decreasing probability
            if (Math.random() < 1.0 / count) {
                randomWord = currentWord;
            }
        }

        // Print the randomly chosen word
        System.out.println(randomWord);
        scanner.close();
    }
}
