# Operating Systems & Systems Programming Labs

A centralized repository for low-level systems programming, architectural explorations, and Linux kernel interactions. This project tracks the development of core engineering skills, focusing on process management, memory allocation, and hardware-software interfacing.

## 🛠 Tech Stack
* **Languages:** C, Bash
* **Environment:** Linux (Ubuntu/Debian)
* **Compiler:** GCC
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

---

## 🚀 Getting Started

### Prerequisites
Ensure you have a Linux environment with `gcc` and `make` installed:
```bash
sudo apt update
sudo apt install build-essential
