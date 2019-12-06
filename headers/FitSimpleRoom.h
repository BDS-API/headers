#pragma once

class FitSimpleRoom : MonumentRoomFitter {

public:
    virtual ~FitSimpleRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);

    void FitSimpleRoom(void);
};
