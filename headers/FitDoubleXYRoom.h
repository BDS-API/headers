#pragma once

class FitDoubleXYRoom : MonumentRoomFitter {

public:
    virtual ~FitDoubleXYRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    void FitDoubleXYRoom(void);
};
