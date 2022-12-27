#pragma once

#include "Queue.h"

class TJobStream
{
protected:

  double jobIntеns; // интенсивность потока задач
  size_t LastJobID; // последн€€ задача

public:

  TJobStream(double intеns);
  size_t GetNewJob(void); // генераци€ нового задани€
  double GetJobIntens(void) const noexcept;
  size_t GetLastTask(void) const noexcept;
};