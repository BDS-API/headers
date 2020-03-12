#pragma once

#include "../bedrock/definition/RoomDefinition.h"
#include "../bedrock/util/Random.h"
#include "MonumentRoomFitter.h"
#include <memory>


class FitDoubleXYRoom : MonumentRoomFitter {

public:
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    ~FitDoubleXYRoom();
    FitDoubleXYRoom();
};
