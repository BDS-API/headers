#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/ChunkPos"
#include "../../chunksource/TheEndGenerator"


class EndCityStart : StructureStart {

public:
    virtual EndCityStart::~EndCityStart()
    virtual bool isValid()const;
    virtual void getType()const;

    void getYPositionForFeature(ChunkPos const&, Dimension &, TheEndGenerator &);
    EndCityStart(void);
    EndCityStart(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
    void _create(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
};
