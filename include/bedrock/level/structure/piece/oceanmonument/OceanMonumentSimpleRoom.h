#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentSimpleRoom : public OceanMonumentPiece {

public:
    virtual ~OceanMonumentSimpleRoom(); // _ZN23OceanMonumentSimpleRoomD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK23OceanMonumentSimpleRoom7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN23OceanMonumentSimpleRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentSimpleRoom(); // _ZN23OceanMonumentSimpleRoomC2Ev
    OceanMonumentSimpleRoom(int &, std::shared_ptr<RoomDefinition> &, Random &); // _ZN23OceanMonumentSimpleRoomC2ERiRSt10shared_ptrI14RoomDefinitionER6Random
};
