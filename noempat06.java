import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class noempat06 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<String> allAthletes = new ArrayList<>();

        for (int i = 0; i < 4; i++) {
            System.out.print("Masukkan nama atlet untuk cabang olahraga ke-" + (i + 1) + ": ");
            Collections.addAll(allAthletes, scanner.nextLine().split("\\s+"));
        }

        Collections.sort(allAthletes);

        System.out.println("Nama Atlet (Secara Ascending):");
        allAthletes.forEach(System.out::println);
    }
}
