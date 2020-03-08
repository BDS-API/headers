#pragma once

#include "../bedrock/definition/RoomDefinition"
#include "../bedrock/util/Random"


class FitDoubleZRoom : MonumentRoomFitter {

public:
    FitDoubleZRoom::~FitDoubleZRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitDoubleZRoom(void);
};
