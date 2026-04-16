# System Resource Monitoring

A robust multi-process utility designed to interface with the Linux kernel and fetch real-time hardware and system statistics. 

## 🧠 Key Concepts Explored
* **Process Spawning:** Utilizing `fork()` to create independent execution paths.
* **Program Execution:** Using `execvp()` to replace child process images with system utilities.
* **Synchronization:** Implementing `waitpid()` to ensure the parent process manages child lifecycle and output order correctly.
* **Error Handling:** Robust checks for fork failures and execution stubs.

## 🛠 Features
The tool spawns four distinct child processes to capture:
1. **Kernel Version:** via `uname -a`
2. **System Uptime:** via `uptime`
3. **Disk Utilization:** via `df -h`
4. **Memory Stats:** via `free -h`

## 🚀 Usage
1. Compile the program:
   ```bash
   make
   ```
2. Run the monitor:
 ```bash
  ./sysinfo
 ```
 ---
