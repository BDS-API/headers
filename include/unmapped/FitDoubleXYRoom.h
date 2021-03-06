#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitDoubleXYRoom : public MonumentRoomFitter {

public:
    virtual ~FitDoubleXYRoom(); // _ZN15FitDoubleXYRoomD2Ev
    virtual void __fake_function0(); // fake
    virtual void fits(std::shared_ptr<RoomDefinition> &); // _ZN15FitDoubleXYRoom4fitsERSt10shared_ptrI14RoomDefinitionE
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &); // _ZN15FitDoubleXYRoom6createERiRSt10shared_ptrI14RoomDefinitionER6Random
    FitDoubleXYRoom(); // _ZN15FitDoubleXYRoomC2Ev
};
