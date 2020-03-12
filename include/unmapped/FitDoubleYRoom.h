#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitDoubleYRoom : MonumentRoomFitter {

public:
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    ~FitDoubleYRoom();
    FitDoubleYRoom();
};
