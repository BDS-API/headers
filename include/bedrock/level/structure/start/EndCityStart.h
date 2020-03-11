#pragma once

#include "../../../../unmapped/Dimension.h"
#include "./StructureStart.h"
#include "../../../util/Random.h"
#include "../../chunksource/TheEndGenerator.h"
#include "../../../util/ChunkPos.h"


class EndCityStart : StructureStart {

public:
    virtual ~EndCityStart();
    virtual bool isValid()const;
    virtual void getType()const;

    void getYPositionForFeature(ChunkPos const&, Dimension &, TheEndGenerator &);
    EndCityStart();
    EndCityStart(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
    void _create(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
};
