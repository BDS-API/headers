#pragma once

#include "../bedrock/definition/RoomDefinition"
#include "../bedrock/util/Random"


class FitSimpleRoom : MonumentRoomFitter {

public:
    FitSimpleRoom::~FitSimpleRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitSimpleRoom(void);
};
