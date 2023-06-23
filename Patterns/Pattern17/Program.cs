﻿using System.Collections.Generic;
using System.Numerics;

namespace Example {
   class Example {

    public static void Pattern17(int n)
    {
        // total = 2*n-1, space = (2n-1)-(2i-1) 

        for(int i=1;i<=n;i++)
        {
            //Print Space
            for(int j=1;j<=(n-i);j++)
            {
                Console.Write(" ");
            }
            for(int j=0;j<i;j++)
            {
                Console.Write((char)('A'+j));
            }
            for(int j=i-2;j>=0;j--)
            {
                Console.Write((char)('A'+j));
            }
            //Print Space
            for(int j=1;j<=(n-i);j++)
            {
                Console.Write(" ");
            }
            Console.WriteLine();
        }
    }    
    public static void Main(string[] args){

        
            int n = Convert.ToInt32(Console.ReadLine());
            Pattern17(n);
      }
   }
}