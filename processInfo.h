/*#ifndef _PSTAT_H_
#define _PSTAT_H_*/

#include "param.h"

//ps
struct pstat {
  int pid[NPROC];     // the PID of each process
  char name[NPROC][16];
  int sz[NPROC];
  int length;
};

//pstree
struct pfam {
  int pid;
  char name[16];
  int parent;
  struct pfam *children[NPROC];
  int n_ch;
  int length;
}

//#endif
//vedi se necessario il costrutto condizionale