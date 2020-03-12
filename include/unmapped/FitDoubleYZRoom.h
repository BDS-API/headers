#pragma once

#include "../bedrock/definition/RoomDefinition.h"
#include "../bedrock/util/Random.h"
#include "MonumentRoomFitter.h"
#include <memory>


class FitDoubleYZRoom : MonumentRoomFitter {

public:
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    ~FitDoubleYZRoom();
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
    FitDoubleYZRoom();
};
