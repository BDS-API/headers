#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/definition/RoomDefinition"


class FitDoubleYRoom : MonumentRoomFitter {

public:
    virtual FitDoubleYRoom::~FitDoubleYRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitDoubleYRoom(void);
};
