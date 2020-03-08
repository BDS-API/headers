#pragma once

#include "../bedrock/definition/RoomDefinition"
#include "../bedrock/util/Random"


class FitSimpleTopRoom : MonumentRoomFitter {

public:
    FitSimpleTopRoom::~FitSimpleTopRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitSimpleTopRoom(void);
};
