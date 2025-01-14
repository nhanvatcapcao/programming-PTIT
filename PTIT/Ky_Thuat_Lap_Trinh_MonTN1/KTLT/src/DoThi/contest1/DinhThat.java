/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DoThi.contest1;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class DinhThat {

    static int n, m, dau, dich, truoc[] = new int[101];
    static ArrayList<Integer> list[] = new ArrayList[101];
    static boolean chuaxet[] = new boolean[101];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            n = sc.nextInt();
            m = sc.nextInt();
            dau = sc.nextInt();
            dich = sc.nextInt();
            for (int i = 0; i <= n; i++) {
                list[i] = new ArrayList<>();
                chuaxet[i] = true;
                truoc[i] = 0;
            }
            for (int i = 1; i <= m; i++) {
                int u = sc.nextInt();
                int v = sc.nextInt();
                list[u].add(v);
            }
            int dem = 0;
            for (int i = 1; i <= n; i++) {
                for (int j = 0; j <= n; j++) {
                    chuaxet[j] = true;
                }
                chuaxet[i] = false;
                dfs(dau);
                if (chuaxet[dich]) {
                    dem++;
                }
            }
            System.out.println(dem);
        }
    }

    private static void dfs(int dau) {
        chuaxet[dau] = false;
        for (Integer integer : list[dau]) {
            if (chuaxet[integer]) {
                dfs(integer);
            }
        }
    }
}

// 2
// 5 7 1 3
// 1 2
// 2 4
// 2 5
// 3 1
// 3 2
// 4 3
// 5 4
// 4 5 1 4
// 1 2
// 1 3
// 2 3
// 2 4
// 3 4