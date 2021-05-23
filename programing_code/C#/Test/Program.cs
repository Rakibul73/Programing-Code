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
                Console.WriteLine("write anything");
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

            // array copy testing
            int[] arr = { 1, 2, 3 };
            int[] arr2 = new int[3];
            Array.Copy(arr, arr2, 3);

            arr2[0] = 0;

            Console.WriteLine("arr[0] = {0} || arr2[0] = {1}", arr[0], arr2[0]);
            Console.WriteLine("arr[1] = {0} || arr2[1] = {1}", arr[1], arr2[1]);
            Console.WriteLine("arr[2] = {0} || arr2[2] = {1}", arr[2], arr2[2]);

            // random number testing
            var r = new Random();
            
            for (var p = 0; p < 10; p++)
            {
                Console.WriteLine(r.Next(100, 200));
            }
            
            





        }

    }
}