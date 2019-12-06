#pragma once

class FitDoubleYZRoom : MonumentRoomFitter {

public:
    virtual ~FitDoubleYZRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    void FitDoubleYZRoom(void);
};
