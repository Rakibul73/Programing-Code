using System;

namespace Test2.Person
{
    public static class CalculateAge
    {
        public static string ToAgeString(this DateTime dob)
        {
            DateTime today = DateTime.Today;
            //think dob 17/09/2000 ar today 27/04/2021
            int month = today.Month - dob.Month; // 4 - 9 = -5

            int year = today.Year - dob.Year;  // tarpor year 2021 - 2000 = 21
            // ehon jodi 27 < 17 hoy mane birth day choto, taile ager mas 1 kombo, karon mas pore jog krte hoibo,kintu amr 27<17 false, tai dhukbena,,
            if (today.Day < dob.Day)
            {
                month--;
            }
            // ehon mas amr -5 , er mane mas goto hoise 12 - 5 = 7 and bosor 1 kombo , ar mas boro hoile oi mas tai goto hoise,
            if (month < 0)
            {
                year--;
                month += 12;
            }
            // just year re mas a convert koira ,,baki mas jog koira,, today thika biyog dilei day pamu..,
            int days = (today - dob.AddMonths(year * 12 + month)).Days;

            // eda just khali show krsi.. ar mas , year day 1 er besi hoile just "s" pase lagaisi,, eda fact na,
            return string.Format("{0} year{1}, {2} month{3} and {4} day{5}",
                                year, year == 1 ? "" : "s",
                                month, month == 1 ? "" : "s",
                                days, days == 1 ? "" : "s");
        }

        internal static void calculate()
        {
            DateTime dob;
            Console.WriteLine("Enter the Date of birth in dd/mm/yyyy format");
            dob = Convert.ToDateTime(Console.ReadLine()).Date;
            Console.WriteLine(dob.ToAgeString());
            Console.WriteLine("Press Enter to exit terminal");
            Console.ReadLine();
        }
    }
}
