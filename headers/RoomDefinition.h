#pragma once

class RoomDefinition {

public:

    void RoomDefinition(void);
    void RoomDefinition(int);
    void setConnection(unsigned char const&, std::shared_ptr<RoomDefinition>);
    void updateOpenings(void);
    void findSource(int);
    bool isSpecial(void);
    void countOpenings(void);
    void RoomDefinition(RoomDefinition const&);
};
