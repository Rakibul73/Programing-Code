import account1.Account1;

public class AccountTest1 {
    public static void main(String args[]) {
        Account1 acc1 = new Account1("very good");
        Account1 acc2 = new Account1("Good Bye");
        System.out.println("acc1 is = "+acc1.getName());
        System.out.println("acc2 is = "+acc2.getName());
    }
    
}
