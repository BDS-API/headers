#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitDoubleZRoom : MonumentRoomFitter {

public:
    ~FitDoubleZRoom();
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    FitDoubleZRoom();
};
