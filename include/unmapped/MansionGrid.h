#pragma once

#include "../bedrock/util/Random.h"
#include "SimpleGrid.h"


namespace WoodlandMansionPieces {

    class MansionGrid {

    public:
        void get1x2RoomDirection(WoodlandMansionPieces::SimpleGrid const&, int, int, int, int)const;
        void _cleanEdges(WoodlandMansionPieces::SimpleGrid &);
        void _setupThirdFloor();
        ~MansionGrid();
        void _identifyRooms(WoodlandMansionPieces::SimpleGrid &, WoodlandMansionPieces::SimpleGrid &);
        bool isHouse(WoodlandMansionPieces::SimpleGrid const&, int, int);
        bool isRoomId(WoodlandMansionPieces::SimpleGrid const&, int, int, int, int)const;
        MansionGrid(Random &);
        void _recursiveCorridor(WoodlandMansionPieces::SimpleGrid &, int, int, unsigned char, int);
    };
}
