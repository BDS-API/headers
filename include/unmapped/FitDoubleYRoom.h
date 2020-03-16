#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitDoubleYRoom : public MonumentRoomFitter {

public:
    virtual ~FitDoubleYRoom(); // _ZN14FitDoubleYRoomD2Ev
    virtual void __fake_function0(); // fake
    virtual void fits(std::shared_ptr<RoomDefinition> &); // _ZN14FitDoubleYRoom4fitsERSt10shared_ptrI14RoomDefinitionE
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &); // _ZN14FitDoubleYRoom6createERiRSt10shared_ptrI14RoomDefinitionER6Random
    FitDoubleYRoom(); // _ZN14FitDoubleYRoomC2Ev
};
