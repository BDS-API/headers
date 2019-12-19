#pragma once

class FitDoubleXRoom : MonumentRoomFitter {

public:
    virtual FitDoubleXRoom::~FitDoubleXRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitDoubleXRoom(void);
};
