#pragma once

class OceanMonumentStart : StructureStart {

public:
    virtual ~OceanMonumentStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType(void)const;

    void OceanMonumentStart(void);
    void createMonument(Dimension &, Random &, int, int);
    void OceanMonumentStart(Dimension &, Random &, int, int);
};
