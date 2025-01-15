CPU Scheduling Algorithms


This repository contains C++ implementations of various CPU scheduling algorithms. These algorithms are used in operating systems to manage the execution of processes and optimize CPU utilization. The following algorithms are implemented:

First-Come, First-Served (FCFS)

Shortest Job Next (SJN)

Priority Scheduling

Round Robin (RR)


Features


Implemented four common CPU scheduling algorithms.

Efficient computation of waiting time and turnaround time for each algorithm.

Demonstrates optimal CPU utilization and reduced waiting times.

Console-based application for ease of testing and demonstration.


Algorithms Implemented


1. First-Come, First-Served (FCFS)

Processes are scheduled in the order they arrive, with no preemption.
This is the simplest scheduling algorithm but can lead to long waiting times (convoy effect).

2. Shortest Job Next (SJN)

Schedules processes with the shortest burst time first.
It minimizes the average waiting time but can cause starvation for longer processes.

3. Priority Scheduling

Each process is assigned a priority, and the CPU is allocated to the process with the highest priority.
Lower priority processes may face starvation unless preemption is implemented.

4. Round Robin (RR)

Each process is assigned a fixed time slice or quantum, and the CPU cycles through processes in a round-robin fashion.
This algorithm is fair and ensures that all processes get a chance to execute.

