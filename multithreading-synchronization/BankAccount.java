public class BankAccount {
    private int balance = 1000;
    
    public void withdraw(int amount) {
        int temp = balance;
        try { Thread.sleep(2); } catch (InterruptedException e) {}
        temp = temp - amount;
        balance = temp;
    }


    public synchronized void synchronizedWithdraw(int amount) {
        int temp = balance;
        try { Thread.sleep(2); } catch (InterruptedException e) {}
        temp = temp - amount;
        balance = temp;
    }

    public int getBalance() {
        return balance;
    }
}
