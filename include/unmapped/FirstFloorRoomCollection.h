#pragma once

#include <string>
#include "FloorRoomCollection.h"


namespace WoodlandMansionPieces {

    class FirstFloorRoomCollection : WoodlandMansionPieces::FloorRoomCollection {

    public:
        ~FirstFloorRoomCollection(); // _ZN21WoodlandMansionPieces24FirstFloorRoomCollectionD2Ev
        virtual std::string get1x1(Random &); // _ZN21WoodlandMansionPieces24FirstFloorRoomCollection6get1x1B5cxx11ER6Random
        virtual std::string get1x1Secret(Random &); // _ZN21WoodlandMansionPieces24FirstFloorRoomCollection12get1x1SecretB5cxx11ER6Random
        virtual std::string get1x2SideEntrance(Random &, bool); // _ZN21WoodlandMansionPieces24FirstFloorRoomCollection18get1x2SideEntranceB5cxx11ER6Randomb
        virtual std::string get1x2FrontEntrance(Random &, bool); // _ZN21WoodlandMansionPieces24FirstFloorRoomCollection19get1x2FrontEntranceB5cxx11ER6Randomb
        virtual std::string get1x2Secret(Random &); // _ZN21WoodlandMansionPieces24FirstFloorRoomCollection12get1x2SecretB5cxx11ER6Random
        virtual std::string get2x2(Random &); // _ZN21WoodlandMansionPieces24FirstFloorRoomCollection6get2x2B5cxx11ER6Random
        virtual std::string get2x2Secret(Random &); // _ZN21WoodlandMansionPieces24FirstFloorRoomCollection12get2x2SecretB5cxx11ER6Random
        FirstFloorRoomCollection(); // _ZN21WoodlandMansionPieces24FirstFloorRoomCollectionC2Ev
    };
}
