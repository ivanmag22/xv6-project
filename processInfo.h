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