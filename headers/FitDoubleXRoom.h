#pragma once

class FitDoubleXRoom : MonumentRoomFitter {

    virtual ~FitDoubleXRoom();
    virtual ~FitDoubleXRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
}
