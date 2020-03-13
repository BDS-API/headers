#pragma once



namespace WoodlandMansionPieces {

    class MansionGrid {

    public:
        bool isHouse(WoodlandMansionPieces::SimpleGrid const&, int, int); // _ZN21WoodlandMansionPieces11MansionGrid7isHouseERKNS_10SimpleGridEii
        bool isRoomId(WoodlandMansionPieces::SimpleGrid const&, int, int, int, int)const; // _ZNK21WoodlandMansionPieces11MansionGrid8isRoomIdERKNS_10SimpleGridEiiii
        void get1x2RoomDirection(WoodlandMansionPieces::SimpleGrid const&, int, int, int, int)const; // _ZNK21WoodlandMansionPieces11MansionGrid19get1x2RoomDirectionERKNS_10SimpleGridEiiii
        MansionGrid(Random &); // _ZN21WoodlandMansionPieces11MansionGridC2ER6Random
        void _recursiveCorridor(WoodlandMansionPieces::SimpleGrid &, int, int, unsigned char, int); // _ZN21WoodlandMansionPieces11MansionGrid18_recursiveCorridorERNS_10SimpleGridEiihi
        void _cleanEdges(WoodlandMansionPieces::SimpleGrid &); // _ZN21WoodlandMansionPieces11MansionGrid11_cleanEdgesERNS_10SimpleGridE
        void _identifyRooms(WoodlandMansionPieces::SimpleGrid &, WoodlandMansionPieces::SimpleGrid &); // _ZN21WoodlandMansionPieces11MansionGrid14_identifyRoomsERNS_10SimpleGridES2_
        void _setupThirdFloor(); // _ZN21WoodlandMansionPieces11MansionGrid16_setupThirdFloorEv
        ~MansionGrid(); // _ZN21WoodlandMansionPieces11MansionGridD2Ev
    };
}
