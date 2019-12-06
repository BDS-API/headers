#pragma once

class OceanMonumentSimpleTopRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentSimpleTopRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void OceanMonumentSimpleTopRoom(void);
    void OceanMonumentSimpleTopRoom(int &, std::shared_ptr<RoomDefinition> &);
};
