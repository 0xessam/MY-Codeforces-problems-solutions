//package com.mycompany.mavenproject1;
import java.util.ArrayList;
import java.util.Scanner;


public class Mavenproject1 {

    public static void main(String[]code_forces) {
        Scanner cin = new Scanner(System.in) ;
        int vld=cin.nextInt() ; 
        int val=cin.nextInt() ;
        int poin=1 ;
      for ( ; ; )
      {
          if (vld>=poin)
          {
              vld-=poin ; poin++ ;
          }
          else {System.out.println("Vladik"); break ; }
          if (val>=poin)
          {
              val-=poin ; poin++ ;
          }
          else {System.out.println("Valera"); break ; }
          
      }
}

}
