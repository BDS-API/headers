#pragma once

class FitDoubleYRoom : MonumentRoomFitter {

public:
    virtual ~FitDoubleYRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    void FitDoubleYRoom(void);
};
