#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentSimpleTopRoom : public OceanMonumentPiece {

public:
    virtual ~OceanMonumentSimpleTopRoom(); // _ZN26OceanMonumentSimpleTopRoomD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK26OceanMonumentSimpleTopRoom7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN26OceanMonumentSimpleTopRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentSimpleTopRoom(); // _ZN26OceanMonumentSimpleTopRoomC2Ev
    OceanMonumentSimpleTopRoom(int &, std::shared_ptr<RoomDefinition> &); // _ZN26OceanMonumentSimpleTopRoomC2ERiRSt10shared_ptrI14RoomDefinitionE
};
