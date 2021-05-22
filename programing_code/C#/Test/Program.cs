using System;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            try
            {
                var hh = Console.ReadLine();
                double  gg = Convert.ToDouble(hh);
                Console.WriteLine(hh);
                Console.WriteLine(gg);
            }
            catch (System.Exception )
            {
                Console.WriteLine("error vai");
            }

            int i = 5;
            int j = 10;
            char k = 'X';
            Console.WriteLine("{0}  +  {1} ============ d{2}d", i, j, k);




        }

    }
}