#pragma once

#include "../OceanMonumentPiece"
#include "../../../../../unmapped/BlockSource"


class OceanMonumentDoubleZRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentDoubleZRoom::~OceanMonumentDoubleZRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleZRoom(void);
    OceanMonumentDoubleZRoom(int &, std::shared_ptr<RoomDefinition> &);
};
