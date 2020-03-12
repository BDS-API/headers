#pragma once

#include "../bedrock/definition/RoomDefinition.h"
#include "../bedrock/util/Random.h"
#include "MonumentRoomFitter.h"
#include <memory>


class FitDoubleYRoom : MonumentRoomFitter {

public:
    ~FitDoubleYRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
    FitDoubleYRoom();
};
