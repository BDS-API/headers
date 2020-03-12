#pragma once

#include <memory>


class RoomDefinition {

public:
    RoomDefinition();
    void countOpenings();
    void findSource(int);
    RoomDefinition(int);
    void updateOpenings();
    bool isSpecial();
    void setConnection(unsigned char const&, std::shared_ptr<RoomDefinition>);
    ~RoomDefinition();
    RoomDefinition(RoomDefinition const&);
};
