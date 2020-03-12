#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitSimpleTopRoom : MonumentRoomFitter {

public:
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
    ~FitSimpleTopRoom();
    FitSimpleTopRoom();
};
