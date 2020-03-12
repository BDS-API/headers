#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitDoubleYZRoom : MonumentRoomFitter {

public:
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
    ~FitDoubleYZRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    FitDoubleYZRoom();
};
