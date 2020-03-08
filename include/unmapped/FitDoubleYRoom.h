#pragma once

#include "../bedrock/definition/RoomDefinition"
#include "../bedrock/util/Random"


class FitDoubleYRoom : MonumentRoomFitter {

public:
    FitDoubleYRoom::~FitDoubleYRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitDoubleYRoom(void);
};
