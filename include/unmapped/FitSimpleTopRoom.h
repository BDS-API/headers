#pragma once

#include "../bedrock/definition/RoomDefinition.h"
#include "../bedrock/util/Random.h"
#include "MonumentRoomFitter.h"
#include <memory>


class FitSimpleTopRoom : MonumentRoomFitter {

public:
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
    ~FitSimpleTopRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    FitSimpleTopRoom();
};
