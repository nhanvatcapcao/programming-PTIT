/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NganXepHangDoi.contest1;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author anhnguyen
 */
public class SoLuongDauNgoacVuongLonNhat {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("DATA.in"));
        String s = sc.nextLine();
        Stack<Character> stack = new Stack<>();
        int count = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(' || s.charAt(i) == '[') {
                stack.push(s.charAt(i));
            } else {
                if (!stack.isEmpty()) {
                    if (stack.peek() == '(' && s.charAt(i) == ')') {
                        stack.pop();
                    } else if (s.charAt(i) == ']' && stack.peek() == '[') {
                        System.out.println("");
                        stack.pop();
                        count++;
                    }
                }
            }
        }
        System.out.println(count);
        //[(]] )
    }
}
