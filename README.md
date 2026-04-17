# Operating Systems & Systems Programming Labs

A centralized repository for low-level systems programming, architectural explorations, and Linux kernel interactions. This project tracks the development of core engineering skills, focusing on process management, memory allocation, and hardware-software interfacing.

## 🛠 Tech Stack
* **Languages:** C, Java, Bash
* **Environment:** Linux (Ubuntu/Debian) / JVM
* **Compiler:** GCC, JDK 17+
* **Build Tools:** Make

---

## 📂 Repository Structure

### [Process Management & Automation](./process-management-automation)
Focuses on the fundamentals of process creation and shell integration.
* **Core Concepts:** `fork()`, `execlp()`, child process spawning, and Bash automation.
* **Project:** A C-based shell wrapper that executes custom Bash scripts for automated system logging and directory structuring.

### [System Resource Monitoring](./system-resource-monitoring)
Explores real-time kernel data and process synchronization.
* **Core Concepts:** `waitpid()`, `execvp()`, multi-process synchronization, and POSIX system calls.
* **Project:** An end-to-end system info collector that spawns independent child processes to capture kernel versions, uptime, and hardware utilization.

### [Multithreading & Synchronization](./multithreading-synchronization)
Explores concurrent execution and resource protection using Java Threads.
* **Core Concepts:** Thread Lifecycle (`start`, `join`), Race Conditions, and Monitors via `synchronized`.
* **Project:** A shared ATM simulation demonstrating how concurrent withdrawals lead to data inconsistency and how to resolve it using mutual exclusion.

---

## 🚀 Getting Started

### Prerequisites
Ensure you have the following installed:
# For C and Bash
```bash
sudo apt update && sudo apt install build-essential
```
# For Java
```bash
sudo apt install default-jdk
```

### Compilation & Execution
Navigate to any sub-directory to find specific build instructions. Generally:
* **C Projects:** Use the provided `Makefile`.
* **Java Projects:** Use `javac FileName.java` to compile and `java FileName` to run.

---

**Developed by:** Youssef Walid Elsayed Zaki

