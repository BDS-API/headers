#pragma once

#include <memory>


class RoomDefinition {

public:
    RoomDefinition(); // _ZN14RoomDefinitionC2Ev
    RoomDefinition(int); // _ZN14RoomDefinitionC2Ei
    void setConnection(unsigned char const&, std::shared_ptr<RoomDefinition>); // _ZN14RoomDefinition13setConnectionERKhSt10shared_ptrIS_E
    void updateOpenings(); // _ZN14RoomDefinition14updateOpeningsEv
    void findSource(int); // _ZN14RoomDefinition10findSourceEi
    bool isSpecial(); // _ZN14RoomDefinition9isSpecialEv
    void countOpenings(); // _ZN14RoomDefinition13countOpeningsEv
    ~RoomDefinition(); // _ZN14RoomDefinitionD2Ev
    RoomDefinition(RoomDefinition const&); // _ZN14RoomDefinitionC2ERKS_
};
