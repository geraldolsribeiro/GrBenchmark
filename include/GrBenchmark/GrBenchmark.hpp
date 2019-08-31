// ----------------------------------------------------------------------
// Copyright (C) 2017-2019 Geraldo Ribeiro <geraldo@intmain.io>
// ----------------------------------------------------------------------

#ifndef __GR_BENCHMARK_HPP__
#define __GR_BENCHMARK_HPP__

#include <chrono>
#include <string>
#include <spdlog/spdlog.h>

// clang-format off
namespace br { namespace com { namespace intmain { namespace GrComponents { namespace GrBenchmark {
// clang-format on

using namespace std;

class GrBenchmark {
public:
  GrBenchmark( const string &description ) : mDescription( description )
  {
    start();
  }

  virtual ~GrBenchmark()
  {
    stop();
    log();
  }

  virtual void log()
  {
    spdlog::info("{}: {}µs", mDescription, mDuration );
  }

private:
  void start()
  {
    mStart = chrono::high_resolution_clock::now();
  }

  void stop()
  {
    auto now   = chrono::high_resolution_clock::now();
    auto end   = chrono::time_point_cast<chrono::microseconds>( now ).time_since_epoch().count();
    auto start = chrono::time_point_cast<chrono::microseconds>( mStart ).time_since_epoch().count();
    mDuration  = end - start;
  }

  long long                                         mDuration;
  string                                            mDescription;
  chrono::time_point<chrono::high_resolution_clock> mStart;
};

// clang-format off
}}}}}
// clang-format on

#endif

