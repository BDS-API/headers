#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentCoreRoom : public OceanMonumentPiece {

public:
    virtual ~OceanMonumentCoreRoom(); // _ZN21OceanMonumentCoreRoomD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK21OceanMonumentCoreRoom7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN21OceanMonumentCoreRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentCoreRoom(); // _ZN21OceanMonumentCoreRoomC2Ev
    OceanMonumentCoreRoom(int &, std::shared_ptr<RoomDefinition> &); // _ZN21OceanMonumentCoreRoomC2ERiRSt10shared_ptrI14RoomDefinitionE
};
