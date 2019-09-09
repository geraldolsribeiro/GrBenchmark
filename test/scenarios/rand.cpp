// ----------------------------------------------------------------------
// Copyright (C) 2019 Geraldo Ribeiro <geraldo@intmain.io>
// ----------------------------------------------------------------------

SCENARIO( "Repetibilidade" )
{
  GIVEN( "Performance para geração de número aleatório" )
  {
    const uint32_t N = 10000000;

    WHEN( "Executo várias vezes a mesma função e devo obter tempos similares" )
    {
      for( uint32_t k = 0; k < 10; ++k ) {
        GrBenchmark benchmark( "Bloco " + to_string( k ) );
        uint32_t sum = 0;
        for( uint32_t i = 0; i < N; ++i ) {
          sum += rand() % 10;
        }
      }
    }
  }
}
