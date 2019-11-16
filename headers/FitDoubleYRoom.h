#pragma once

class FitDoubleYRoom : MonumentRoomFitter {

    virtual void ~FitDoubleYRoom();
    virtual void ~FitDoubleYRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
}
