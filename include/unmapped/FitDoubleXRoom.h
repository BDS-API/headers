#pragma once

#include "../bedrock/definition/RoomDefinition"
#include "../bedrock/util/Random"


class FitDoubleXRoom : MonumentRoomFitter {

public:
    FitDoubleXRoom::~FitDoubleXRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitDoubleXRoom(void);
};
