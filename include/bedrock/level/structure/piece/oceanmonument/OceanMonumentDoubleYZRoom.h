#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleYZRoom : OceanMonumentPiece {

public:
    ~OceanMonumentDoubleYZRoom(); // _ZN25OceanMonumentDoubleYZRoomD2Ev
    virtual void getType()const; // _ZNK25OceanMonumentDoubleYZRoom7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN25OceanMonumentDoubleYZRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentDoubleYZRoom(); // _ZN25OceanMonumentDoubleYZRoomC2Ev
    OceanMonumentDoubleYZRoom(int &, std::shared_ptr<RoomDefinition> &); // _ZN25OceanMonumentDoubleYZRoomC2ERiRSt10shared_ptrI14RoomDefinitionE
};
