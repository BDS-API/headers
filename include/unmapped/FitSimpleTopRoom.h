#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitSimpleTopRoom : MonumentRoomFitter {

public:
    ~FitSimpleTopRoom(); // _ZN16FitSimpleTopRoomD2Ev
    virtual void fits(std::shared_ptr<RoomDefinition> &); // _ZN16FitSimpleTopRoom4fitsERSt10shared_ptrI14RoomDefinitionE
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &); // _ZN16FitSimpleTopRoom6createERiRSt10shared_ptrI14RoomDefinitionER6Random
    FitSimpleTopRoom(); // _ZN16FitSimpleTopRoomC2Ev
};
