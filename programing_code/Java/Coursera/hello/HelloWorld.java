import edu.duke.*;

public class HelloWorld {
            Thing f = new Thing(6);
            Thing g = new Thing(8);
            f.combine(g);
            System.out.println(f.geta());
            System.out.println(g.geta());
}
