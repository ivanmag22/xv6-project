# "Comparative analysis between OS161 and xv6" project with prof. Azimi (2022)
## Students:
* Jellouli Hamza ([Hamza1031](https://github.com/Hamza1031))
* Magistro Contenta Ivan ([ivanmag22](https://github.com/ivanmag22))
* Marinacci Giuseppe ([giuseppeMarinacci](https://github.com/giuseppeMarinacci))

This projects regard the comparison of the two teaching OS:
- **OS161** for MIPS architecture (RISC-V)
- **xv6** proposed by MIT for x86 architecture and for RISC-V one (we implemented the first one)

and the implementation of some system calls on xv6.

In the first section there is the comparison between the OS in terms of:
- system calls
    - trap, context-switch and routines
    - implementation
- synchronization mechanisms
    - lock and spinlock
- virtual memory and MMU
    - memory management and address translation
    - virtual address space: user and kernel space
    - page table
- scheduling algorithms
    - policy
    - context-switching in detail
    - implementation
- processes and threads

In the second section we implemented two system calls:
- *ps*: it shows info about active processes
- *pstree*: it shows how the processes depend to each other representing them with a tree. Limitation: since xv6 doesn't run in parallel multiple processes, we ran it only with a tree of one node for each level (**future work**: try to run in parallel multiple process and to run this command)

You can find details in "Report.pdf" and in "Presentazione.pdf" (they are written in Italian). The *videotutorial/* folder contains some videos where we explain (in Italian) how trap and context-swith work and how the new implemented system calls work. The *xv6/* folder contains the implementation of the OS with the new system calls.

References:
- [The xv6 kernel - playlist](https://www.youtube.com/playlist?list=PLbtzT1TYeoMhTPzyTZboW_j7TPAnjv9XB)
- [xv6 documentation](https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf)