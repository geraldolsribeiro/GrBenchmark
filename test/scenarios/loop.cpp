// ----------------------------------------------------------------------
// Copyright (C) 2019 Geraldo Ribeiro <geraldo@intmain.io>
// ----------------------------------------------------------------------

SCENARIO( "Loop" )
{
  GIVEN( "Preciso de textos para preenchimento" )
  {
    const uint32_t N = 1000;

    WHEN( "Preencho e esvazio um conjunto de dados" )
    {
      GrBenchmark   benchmark( "Teste todo" );
      set<uint32_t> numbers;
      {
        GrBenchmark benchmark( "Preenchimento do conjunto" );
        for( uint32_t i = 0; i < N; ++i ) {
          numbers.insert( i );
        }
      }
      {
        GrBenchmark benchmark( "Esvaziamento" );
        for( uint32_t i = 0; i < N; ++i ) {
          numbers.erase( i );
        }
      }
    }
  }
}
