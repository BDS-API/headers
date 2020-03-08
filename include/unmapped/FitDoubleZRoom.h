#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/definition/RoomDefinition"


class FitDoubleZRoom : MonumentRoomFitter {

public:
    virtual FitDoubleZRoom::~FitDoubleZRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitDoubleZRoom(void);
};
