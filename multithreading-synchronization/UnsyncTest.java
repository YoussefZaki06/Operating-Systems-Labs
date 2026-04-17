public class UnsyncTest {
    public static void main(String[] args) throws InterruptedException {
        BankAccount account = new BankAccount();

        Runnable task = () -> {
            for (int i = 0; i < 50; i++) {
                account.withdraw(10);
            }
        };

        Thread threadA = new Thread(task);
        Thread threadB = new Thread(task);

        threadA.start();
        threadB.start();
        threadA.join();
        threadB.join();

        System.out.println("Unsynced Final Balance: $" + account.getBalance());
    }
}