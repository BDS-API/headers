#pragma once



namespace WoodlandMansionPieces {

    class MansionGrid {

    public:
        void get1x2RoomDirection(WoodlandMansionPieces::SimpleGrid const&, int, int, int, int)const;
        ~MansionGrid();
        void _setupThirdFloor();
        MansionGrid(Random &);
        void _recursiveCorridor(WoodlandMansionPieces::SimpleGrid &, int, int, unsigned char, int);
        bool isHouse(WoodlandMansionPieces::SimpleGrid const&, int, int);
        void _identifyRooms(WoodlandMansionPieces::SimpleGrid &, WoodlandMansionPieces::SimpleGrid &);
        bool isRoomId(WoodlandMansionPieces::SimpleGrid const&, int, int, int, int)const;
        void _cleanEdges(WoodlandMansionPieces::SimpleGrid &);
    };
}
