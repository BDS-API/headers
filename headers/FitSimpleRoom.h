#pragma once

class FitSimpleRoom : MonumentRoomFitter {

    virtual void ~FitSimpleRoom();
    virtual void ~FitSimpleRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
}
