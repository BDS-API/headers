#pragma once



class RoomDefinition {

public:

    RoomDefinition(void);
    RoomDefinition(int);
    void setConnection(unsigned char const&, std::shared_ptr<RoomDefinition>);
    void updateOpenings(void);
    void findSource(int);
    bool isSpecial(void);
    void countOpenings(void);
    RoomDefinition(RoomDefinition const&);
};
