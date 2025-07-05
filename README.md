# CPU Scheduling Algorithms Simulator 🖥️

A console-based C++ simulator that implements and compares multiple CPU scheduling algorithms. Ideal for students and OS enthusiasts, it provides detailed execution statistics and trace outputs for analysis.

---

## 🚀 Features

- Supports multiple widely used scheduling algorithms:
  - **FCFS** (First-Come, First-Serve)
  - **RR** (Round Robin) with custom time quantum
  - **SPN** (Shortest Process Next)
  - **SRT** (Shortest Remaining Time)
  - **HRRN** (Highest Response Ratio Next)
  - **FB** (Feedback scheduling)
  - **FBV** (Feedback with varying quantum)
  - **Aging** to prevent starvation :contentReference[oaicite:0]{index=0}
- Display detailed **trace** or **statistics** output modes
- Parse input configuration files with flexible format
- Compute key metrics: waiting time, turnaround time, response ratio, CPU utilization

---

## 🛠 Installation & Setup

1. **Clone** the repo:
   ```bash
   git clone https://github.com/rohitgami11/CPU-Scheduling-Algorithms.git
   cd CPU-Scheduling-Algorithms
   ```

2. **Install** dependencies (Linux/Mac):

   ```bash
   sudo apt update
   sudo apt install g++ make
   ```
3. **Compile** the project:

   ```bash
   make
   ```
4. **Run** the simulator:

   ```bash
   ./cpu-scheduler input.txt
   ```

   * Mode: `trace` or `stats`
   * Specify algorithms and parameters (e.g. `2-4` for RR with quantum=4)
   * Define timeline length and process list ([github.com][1], [github.com][2], [github.com][3])


## 💡 Input Format

1. **Mode**: `trace` or `stats`
2. **Algorithms**: Comma-separated list (e.g. `1,2-4,8-1`)&#x20;

   * Numbered from: 1 = FCFS, 2 = RR, …, 8 = Aging
3. **Timeline End**: integer
4. **Process Count**: integer
5. **Process List**:

   * For algorithms 1–7:
     `Name,ArrivalTime,BurstTime`
   * For Aging (8):
     `Name,ArrivalTime,Priority` ([github.com][3], [github.com][1])

---

## 📊 Output Details

* **Trace Mode**: Step-by-step CPU allocation and context switching
* **Stats Mode**: Summary metrics including waiting time, turnaround time, response ratio, and overall CPU utilization

---

## 📚 Algorithms Implemented

* **FCFS**: Non-preemptive FIFO scheduling
* **RR**: Time-sliced round robin with adjustable quantum
* **SPN/SRT**: Non-preemptive vs preemptive shortest-job-first
* **HRRN**: Scheduling by highest (waiting time + burst) / burst ratio
* **FB / FBV**: Multi-level feedback queues, with optional variable time quanta
* **Aging**: Priority increment over time to prevent starvation ([github.com][3])

---

## 🧠 Use Cases

* Educational tool for OS courses and tutorials
* Compare performance trade-offs: average wait time, throughput, CPU utilization
* Visualize algorithm behavior under different workloads

---

## 🤝 Contributing

Contributions welcome! Suggested improvements:

* Add new scheduling strategies (e.g., priority with preemption)
* Improve input parsing robustness
* Enhance output formatting or logging
* Add unit tests and CI integration

**Steps**:

1. Fork the repository
2. Create a feature branch (`feat/...` or `fix/...`)
3. Commit your changes and open a pull request

---

## 📄 License

Distributed under the **MIT License**. See `LICENSE` for details.

---

## 📬 Contact

**Rohit Gami**
📧 \[[rohitgami2003@gmail.com](mailto:rohitgami2003@gmail.com)]
GitHub: [@rohitgami11](https://github.com/rohitgami11)

---
