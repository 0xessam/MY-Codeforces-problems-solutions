//package com.mycompany.mavenproject1;
import java.util.ArrayList;
import java.util.Scanner;


public class Mavenproject1 {

    public static void main(String[]code_forces) {
        Scanner cin = new Scanner(System.in) ;
        int n=cin.nextInt() ;
        int sm = n/5 ;
        n%=5 ;
        int f ; 
        if (n>0) f=1  ;
                else f=0 ;
        
        System.out.println(sm+f);
}

}
