#pragma once

#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/ChunkPos"


class EndCityStart : StructureStart {

public:
    virtual EndCityStart::~EndCityStart();
    virtual bool isValid(void)const;
    virtual void getType(void)const;

    void getYPositionForFeature(ChunkPos const&, Dimension &, TheEndGenerator &);
    EndCityStart(void);
    EndCityStart(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
    void _create(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
};
