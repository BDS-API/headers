#pragma once

#include "../bedrock/util/Random"


using namespace WoodlandMansionPieces;

class SecondFloorRoomCollection : WoodlandMansionPieces::FloorRoomCollection {

public:
    virtual WoodlandMansionPieces::SecondFloorRoomCollection::~SecondFloorRoomCollection()
    virtual void get1x1(Random &);
    virtual void get1x1Secret(Random &);
    virtual void get1x2SideEntrance(Random &, bool);
    virtual void get1x2FrontEntrance(Random &, bool);
    virtual void get1x2Secret(Random &);
    virtual void get2x2(Random &);
    virtual void get2x2Secret(Random &);

    SecondFloorRoomCollection(void);
};
