import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] dimensions = br.readLine().trim().split(" ");
        int N = Integer.parseInt(dimensions[0]);
        int M = Integer.parseInt(dimensions[1]);

        int[][] board = new int[N][M];

        for (int i = 0; i < N; i++) {
            String row = br.readLine().trim();
            for (int j = 0; j < M; j++) {
                board[i][j] = row.charAt(j) - '0';
            }
        }

        int count = 0;
        for (int i = N - 1; i >= 0; i--) {
            for (int j = M - 1; j >= 0; j--) {
                if (board[i][j] == 1) {
                    count++;
                    for (int x = 0; x <= i; x++) {
                        for (int y = 0; y <= j; y++) {
                            board[x][y] = 1 - board[x][y];
                        }
                    }
                }
            }
        }
        System.out.println(count);
    }
}