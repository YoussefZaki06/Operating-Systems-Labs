# Multithreading & Synchronization (Java)

This module demonstrates the **Race Condition** phenomenon and its resolution using monitors and synchronization in Java.

## 🏁 The Scenario
A shared ATM simulation where two threads attempt to withdraw from a single bank account simultaneously.

## 🧪 Experiments
1. **UnsyncTest:** Demonstrates data inconsistency (Race Condition). When multiple threads access the `withdraw` method concurrently, updates are lost, leading to an incorrect final balance.
2. **SyncTest:** Demonstrates the use of the `synchronized` keyword to create a monitor, ensuring atomic operations and a consistent final balance of $0.

## ⚙️ Concepts Covered
* Thread Lifecycle (`start()`, `join()`)
* Shared Resource Management
* Mutual Exclusion (Locks)
