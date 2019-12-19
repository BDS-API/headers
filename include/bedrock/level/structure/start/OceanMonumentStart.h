#pragma once

class OceanMonumentStart : StructureStart {

public:
    virtual OceanMonumentStart::~OceanMonumentStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType(void)const;

    OceanMonumentStart(void);
    void createMonument(Dimension &, Random &, int, int);
    OceanMonumentStart(Dimension &, Random &, int, int);
};
