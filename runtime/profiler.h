#if !defined(CAUSAL_RUNTIME_PROFILER_H)
#define CAUSAL_RUNTIME_PROFILER_H

#include <cstdint>
#include <string>

#include "basic_block.h"
#include "causal.h"
#include "counter.h"

enum {
  SampleSignal = 42,
  SamplePeriod = 1000000, // 1 millisecond
  MaxRoundSamples = 1000
};

void dropCounters();
void profilerInit(int& argc, char**& argv);
void profilerShutdown();
void registerCounter(Counter* c);
void threadInit();
void threadShutdown();

#endif
