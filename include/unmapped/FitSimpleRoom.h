#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitSimpleRoom : MonumentRoomFitter {

public:
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    ~FitSimpleRoom();
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
    FitSimpleRoom();
};
