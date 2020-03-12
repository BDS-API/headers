#pragma once

#include "StructureStart.h"


class EndCityStart : StructureStart {

public:
    virtual void getType()const;
    virtual bool isValid()const;
    ~EndCityStart();
    EndCityStart(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
    void _create(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
    void getYPositionForFeature(ChunkPos const&, Dimension &, TheEndGenerator &);
    EndCityStart();
};
