#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleXYRoom : OceanMonumentPiece {

public:
    ~OceanMonumentDoubleXYRoom(); // _ZN25OceanMonumentDoubleXYRoomD2Ev
    virtual void getType()const; // _ZNK25OceanMonumentDoubleXYRoom7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN25OceanMonumentDoubleXYRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentDoubleXYRoom(); // _ZN25OceanMonumentDoubleXYRoomC2Ev
    OceanMonumentDoubleXYRoom(int &, std::shared_ptr<RoomDefinition> &); // _ZN25OceanMonumentDoubleXYRoomC2ERiRSt10shared_ptrI14RoomDefinitionE
};
