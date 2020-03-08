#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/definition/RoomDefinition"


class FitDoubleXYRoom : MonumentRoomFitter {

public:
    virtual FitDoubleXYRoom::~FitDoubleXYRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitDoubleXYRoom(void);
};
