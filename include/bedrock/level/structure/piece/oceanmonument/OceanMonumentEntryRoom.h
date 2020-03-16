#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentEntryRoom : public OceanMonumentPiece {

public:
    virtual ~OceanMonumentEntryRoom(); // _ZN22OceanMonumentEntryRoomD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK22OceanMonumentEntryRoom7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN22OceanMonumentEntryRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentEntryRoom(); // _ZN22OceanMonumentEntryRoomC2Ev
    OceanMonumentEntryRoom(int &, std::shared_ptr<RoomDefinition> &); // _ZN22OceanMonumentEntryRoomC2ERiRSt10shared_ptrI14RoomDefinitionE
};
