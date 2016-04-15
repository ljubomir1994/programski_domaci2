using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;

namespace Programski_jezici
{
    class Program
    {
        // Generisemo Poasonov broj po Knutovom algoritmu
        public static int poissonRandomNumber(int lambda)
        {
            Random rand = new Random();
            double L = Math.Exp(-lambda);
            int k = 0;
            double p = 1;
            do
            {
                k = k + 1;
                double u = rand.NextDouble();
                p = p * u;
            } while (p > L);
            return k - 1;
        }

        /*
        Potrebno je generisati D podskupova.
        Broj elemenata u svakom od podskupova odredjen je Poasonovom distrib.
        Ulazni parametri su N, D i u (odnosno lambda kod nas). 
        Skup podskupova oznacava se sa T.
        */
        public static void podskupovi(int d, int n, int lambda)
        {
            Random r = new Random();
            for (int i=0; i < d-n; i++)
            {
                ArrayList list = new ArrayList(); //Novi
                int random = poissonRandomNumber(lambda);
                Console.WriteLine("\n\nPoasonov broj: " + random);
                for(int j=0; j < random; j++)
                {
                    
                    list.Add(r.Next(1, 100));
                }
                foreach(var item in list)
                {
                    Console.Write("\nSadrzaj: " + item);
                }   
            }
        }
        
        static void Main(string[] args)
        {

            Console.WriteLine(poissonRandomNumber(5));
            podskupovi(10, 5, 10);
            Console.ReadKey();
        }
    }
}
