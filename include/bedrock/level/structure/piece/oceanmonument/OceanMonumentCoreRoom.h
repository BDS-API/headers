#pragma once

#include "../OceanMonumentPiece"
#include "../../../../../unmapped/BlockSource"


class OceanMonumentCoreRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentCoreRoom::~OceanMonumentCoreRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentCoreRoom(void);
    OceanMonumentCoreRoom(int &, std::shared_ptr<RoomDefinition> &);
};
