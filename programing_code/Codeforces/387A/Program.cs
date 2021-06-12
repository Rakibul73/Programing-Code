using System;

namespace _387A
{
    class Program
    {
        static void Main(string[] args)
        {
            //DateTime date = new DateTime(2011, 1, 1, 4, 0, 15);
            //TimeSpan ts = new TimeSpan(1, 12, 15, 16);
            //DateTime value = date.Subtract(ts);
            //Console.WriteLine("DateTime between date " + "and ts is {0}", value);

            var s = Convert.ToDateTime(Console.ReadLine()).TimeOfDay;
            TimeSpan t = new TimeSpan(10, 40, 00);
            TimeSpan dif = s.Subtract(t);
            Console.WriteLine(dif);

        }
    }
}
