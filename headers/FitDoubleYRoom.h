#pragma once

class FitDoubleYRoom : MonumentRoomFitter {

    virtual ~FitDoubleYRoom();
    virtual ~FitDoubleYRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
}
