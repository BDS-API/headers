#pragma once

#include "../../../util/ChunkPos"
#include "../../../util/Random"
#include "../../chunksource/TheEndGenerator"
#include "../../../../unmapped/Dimension"


class EndCityStart : StructureStart {

public:
    EndCityStart::~EndCityStart()
    virtual bool isValid()const;
    virtual void getType()const;

    void getYPositionForFeature(ChunkPos const&, Dimension &, TheEndGenerator &);
    EndCityStart(void);
    EndCityStart(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
    void _create(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
};
