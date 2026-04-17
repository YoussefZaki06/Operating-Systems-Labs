public class SyncTest {
    public static void main(String[] args) throws InterruptedException {
        BankAccount account = new BankAccount();

        Runnable task = () -> {
            for (int i = 0; i < 50; i++) {
                account.synchronizedWithdraw(10);
            }
        };

        Thread threadA = new Thread(task);
        Thread threadB = new Thread(task);

        threadA.start();
        threadB.start();

        threadA.join();
        threadB.join();

        System.out.println("Synced Final Balance: $" + account.getBalance());
    }
}