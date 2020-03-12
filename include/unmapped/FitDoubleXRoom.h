#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitDoubleXRoom : MonumentRoomFitter {

public:
    ~FitDoubleXRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
    FitDoubleXRoom();
};
