#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitSimpleRoom : MonumentRoomFitter {

public:
    ~FitSimpleRoom(); // _ZN13FitSimpleRoomD2Ev
    virtual void fits(std::shared_ptr<RoomDefinition> &); // _ZN13FitSimpleRoom4fitsERSt10shared_ptrI14RoomDefinitionE
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &); // _ZN13FitSimpleRoom6createERiRSt10shared_ptrI14RoomDefinitionER6Random
    FitSimpleRoom(); // _ZN13FitSimpleRoomC2Ev
};
