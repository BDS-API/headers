#pragma once

#include "../../../util/ChunkPos.h"
#include "../../chunksource/TheEndGenerator.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "StructureStart.h"


class EndCityStart : StructureStart {

public:
    virtual bool isValid()const;
    ~EndCityStart();
    virtual void getType()const;
    EndCityStart(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
    void getYPositionForFeature(ChunkPos const&, Dimension &, TheEndGenerator &);
    void _create(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
    EndCityStart();
};
