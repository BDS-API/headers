#pragma once

class FitDoubleXYRoom : MonumentRoomFitter {

    virtual void ~FitDoubleXYRoom();
    virtual void ~FitDoubleXYRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
}
