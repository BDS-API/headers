#pragma once

#include "../bedrock/util/Random.h"
#include "FloorRoomCollection.h"


namespace WoodlandMansionPieces {

    class FirstFloorRoomCollection : WoodlandMansionPieces::FloorRoomCollection {

    public:
        virtual std::string get1x1(Random &);
        virtual std::string get1x2FrontEntrance(Random &, bool);
        ~FirstFloorRoomCollection();
        virtual std::string get2x2(Random &);
        virtual std::string get1x2SideEntrance(Random &, bool);
        virtual std::string get1x2Secret(Random &);
        virtual std::string get2x2Secret(Random &);
        virtual std::string get1x1Secret(Random &);
        FirstFloorRoomCollection();
    };
}
