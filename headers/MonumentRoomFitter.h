#pragma once

class MonumentRoomFitter {

    virtual void ~MonumentRoomFitter();
    virtual void ~MonumentRoomFitter();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
}
