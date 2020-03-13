#pragma once

#include <string>
#include "FloorRoomCollection.h"


namespace WoodlandMansionPieces {

    class SecondFloorRoomCollection : WoodlandMansionPieces::FloorRoomCollection {

    public:
        ~SecondFloorRoomCollection(); // _ZN21WoodlandMansionPieces25SecondFloorRoomCollectionD2Ev
        virtual std::string get1x1(Random &); // _ZN21WoodlandMansionPieces25SecondFloorRoomCollection6get1x1B5cxx11ER6Random
        virtual std::string get1x1Secret(Random &); // _ZN21WoodlandMansionPieces25SecondFloorRoomCollection12get1x1SecretB5cxx11ER6Random
        virtual std::string get1x2SideEntrance(Random &, bool); // _ZN21WoodlandMansionPieces25SecondFloorRoomCollection18get1x2SideEntranceB5cxx11ER6Randomb
        virtual std::string get1x2FrontEntrance(Random &, bool); // _ZN21WoodlandMansionPieces25SecondFloorRoomCollection19get1x2FrontEntranceB5cxx11ER6Randomb
        virtual std::string get1x2Secret(Random &); // _ZN21WoodlandMansionPieces25SecondFloorRoomCollection12get1x2SecretB5cxx11ER6Random
        virtual std::string get2x2(Random &); // _ZN21WoodlandMansionPieces25SecondFloorRoomCollection6get2x2B5cxx11ER6Random
        virtual std::string get2x2Secret(Random &); // _ZN21WoodlandMansionPieces25SecondFloorRoomCollection12get2x2SecretB5cxx11ER6Random
        SecondFloorRoomCollection(); // _ZN21WoodlandMansionPieces25SecondFloorRoomCollectionC2Ev
    };
}
