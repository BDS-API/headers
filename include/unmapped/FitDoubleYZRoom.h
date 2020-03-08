#pragma once

#include "../bedrock/definition/RoomDefinition"
#include "../bedrock/util/Random"


class FitDoubleYZRoom : MonumentRoomFitter {

public:
    FitDoubleYZRoom::~FitDoubleYZRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitDoubleYZRoom(void);
};
