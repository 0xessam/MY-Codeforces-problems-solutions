//package com.mycompany.mavenproject1;
import java.util.ArrayList;
import java.util.Scanner;


public class Mavenproject1 {

    public static void main(String[]code_forces) {
        Scanner cin = new Scanner(System.in) ;
      int l=cin.nextInt();
      int r=cin.nextInt();
      int a=cin.nextInt();
      if (l>r)
      {
          int t=l ; 
          l=r ; 
          r=t ;
      }
      int take = Math.min(r-l, a) ;
      l+=Math.min(r-l, a) ; 
      a-=take ;
      l+=a/2 ; 
      r+=a/2 ; 
        System.out.println(Math.min(l, r)*2);
      
}

}
