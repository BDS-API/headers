#pragma once

class FitSimpleTopRoom : MonumentRoomFitter {

public:
    virtual FitSimpleTopRoom::~FitSimpleTopRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    FitSimpleTopRoom(void);
};
