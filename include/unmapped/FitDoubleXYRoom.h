#pragma once

#include "../bedrock/definition/RoomDefinition"
#include "../bedrock/util/Random"


class FitDoubleXYRoom : MonumentRoomFitter {

public:
    FitDoubleXYRoom::~FitDoubleXYRoom()
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitDoubleXYRoom(void);
};
