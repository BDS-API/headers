#pragma once

class FitDoubleXRoom : MonumentRoomFitter {

    virtual void ~FitDoubleXRoom();
    virtual void ~FitDoubleXRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
}
