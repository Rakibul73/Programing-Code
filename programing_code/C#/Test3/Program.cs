using System;
using System.IO;
using System.Text;

namespace Test3
{
    class Program
    {
        static void Main(string[] args)
        {
            var builder = new StringBuilder();
            builder.AppendLine()
                .Append('=', 20)
                .AppendLine()
                .Append("\tYo Yo")
                .AppendLine()
                .Append('=', 20);
            Console.WriteLine(builder);
            //=====================================================
            var filepath = @"C:\Users\Spry-Shanto\Desktop\test.txt";
            //var f = File.ReadAllText(filepath);
            //Console.WriteLine(f);
            //===================================================
            //Console.WriteLine("Extension = " + Path.GetExtension(filepath));
            //=================================================
            Console.WriteLine("Write a program that reads a text file and displays the number of words & " +
                "longest word in the file.");
            var s = File.ReadAllText(filepath);
            string[] words = s.Split(' ');
            var big = words.Length;
            int index = 0;
            Console.WriteLine(words.Length);
            for(int i = 1; i < words.Length; i++)
            {
                if(words[i].Length > big)
                {
                    big = words[i].Length;
                    index = i;
                }
            }
            Console.WriteLine(words[index]);
            //======================================================================



        }
    }
}
