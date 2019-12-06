#pragma once

class FitDoubleZRoom : MonumentRoomFitter {

public:
    virtual ~FitDoubleZRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    void FitDoubleZRoom(void);
};
