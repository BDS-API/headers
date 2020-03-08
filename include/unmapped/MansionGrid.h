#pragma once

#include "../bedrock/util/Random"


using namespace WoodlandMansionPieces;

class MansionGrid {

public:

    bool isHouse(WoodlandMansionPieces::SimpleGrid const&, int, int);
    bool isRoomId(WoodlandMansionPieces::SimpleGrid const&, int, int, int, int)const;
    void get1x2RoomDirection(WoodlandMansionPieces::SimpleGrid const&, int, int, int, int)const;
    MansionGrid(Random &);
    void _recursiveCorridor(WoodlandMansionPieces::SimpleGrid &, int, int, unsigned char, int);
    void _cleanEdges(WoodlandMansionPieces::SimpleGrid &);
    void _identifyRooms(WoodlandMansionPieces::SimpleGrid &, WoodlandMansionPieces::SimpleGrid &);
    void _setupThirdFloor();
};
