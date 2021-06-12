using System;
using Test2.Person;


namespace Test2
{

    class Program
    {
        static void Main(string[] args)
        {
            var ami = new bio();
            ami.name = "Spry Shanto";
            ami.age = 21;
            ami.intro();

            CalculateAge.calculate(); // give DateOfBirth and return age till today


            
        }
    }
}
