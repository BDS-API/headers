#pragma once

#include "../OceanMonumentPiece"
#include "../../../../../unmapped/BlockSource"


class OceanMonumentDoubleYZRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentDoubleYZRoom::~OceanMonumentDoubleYZRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleYZRoom(void);
    OceanMonumentDoubleYZRoom(int &, std::shared_ptr<RoomDefinition> &);
};
