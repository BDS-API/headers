#pragma once

#include <memory>


class RoomDefinition {

public:
    RoomDefinition();
    RoomDefinition(RoomDefinition const&);
    void findSource(int);
    ~RoomDefinition();
    RoomDefinition(int);
    void countOpenings();
    bool isSpecial();
    void updateOpenings();
    void setConnection(unsigned char const&, std::shared_ptr<RoomDefinition>);
};
