#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include <Common/GrTestSuiteCatch.hpp>
#include <GrBenchmark/GrBenchmark.hpp>

using namespace br::com::intmain::GrComponents::GrBenchmark;
using namespace Catch;
using namespace std;

#include "scenarios/loop.cpp"
#include "scenarios/rand.cpp"
