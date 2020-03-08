#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/definition/RoomDefinition"


class FitDoubleYZRoom : MonumentRoomFitter {

public:
    virtual FitDoubleYZRoom::~FitDoubleYZRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitDoubleYZRoom(void);
};
