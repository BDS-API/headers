#pragma once

class FitSimpleTopRoom : MonumentRoomFitter {

    virtual void ~FitSimpleTopRoom();
    virtual void ~FitSimpleTopRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
}
