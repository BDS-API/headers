#pragma once

#include "./RoomDefinition.h"
#include <memory>


class RoomDefinition {

public:

    RoomDefinition();
    RoomDefinition(int);
    void setConnection(unsigned char const&, std::shared_ptr<RoomDefinition>);
    void updateOpenings();
    void findSource(int);
    bool isSpecial();
    void countOpenings();
    ~RoomDefinition();
    RoomDefinition(RoomDefinition const&);
};
