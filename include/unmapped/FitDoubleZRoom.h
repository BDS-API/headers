#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitDoubleZRoom : MonumentRoomFitter {

public:
    ~FitDoubleZRoom(); // _ZN14FitDoubleZRoomD2Ev
    virtual void fits(std::shared_ptr<RoomDefinition> &); // _ZN14FitDoubleZRoom4fitsERSt10shared_ptrI14RoomDefinitionE
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &); // _ZN14FitDoubleZRoom6createERiRSt10shared_ptrI14RoomDefinitionER6Random
    FitDoubleZRoom(); // _ZN14FitDoubleZRoomC2Ev
};
