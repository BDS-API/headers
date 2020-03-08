#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/definition/RoomDefinition"


class FitSimpleRoom : MonumentRoomFitter {

public:
    virtual FitSimpleRoom::~FitSimpleRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitSimpleRoom(void);
};
