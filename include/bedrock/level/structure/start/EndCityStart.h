#pragma once

#include "StructureStart.h"


class EndCityStart : StructureStart {

public:
    ~EndCityStart(); // _ZN12EndCityStartD2Ev
    virtual bool isValid()const; // _ZNK12EndCityStart7isValidEv
    virtual void getType()const; // _ZNK12EndCityStart7getTypeEv
    void getYPositionForFeature(ChunkPos const&, Dimension &, TheEndGenerator &); // _ZN12EndCityStart22getYPositionForFeatureERK8ChunkPosR9DimensionR15TheEndGenerator
    EndCityStart(); // _ZN12EndCityStartC2Ev
    EndCityStart(Dimension &, TheEndGenerator &, Random &, ChunkPos const&); // _ZN12EndCityStartC2ER9DimensionR15TheEndGeneratorR6RandomRK8ChunkPos
    void _create(Dimension &, TheEndGenerator &, Random &, ChunkPos const&); // _ZN12EndCityStart7_createER9DimensionR15TheEndGeneratorR6RandomRK8ChunkPos
};
