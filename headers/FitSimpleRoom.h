#pragma once

class FitSimpleRoom : MonumentRoomFitter {

    virtual ~FitSimpleRoom();
    virtual ~FitSimpleRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
}
