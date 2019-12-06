#pragma once

class EndCityStart : StructureStart {

public:
    virtual ~EndCityStart();
    virtual bool isValid(void)const;
    virtual void getType(void)const;

    void getYPositionForFeature(ChunkPos const&, Dimension &, TheEndGenerator &);
    void EndCityStart(void);
    void EndCityStart(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
    void _create(Dimension &, TheEndGenerator &, Random &, ChunkPos const&);
};
