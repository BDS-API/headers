#pragma once

#include "../bedrock/definition/RoomDefinition.h"
#include <memory>
#include "../bedrock/util/Random.h"
#include "./MonumentRoomFitter.h"


class FitDoubleXYRoom : MonumentRoomFitter {

public:
    virtual ~FitDoubleXYRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitDoubleXYRoom();
};
