#pragma once

class Painting : HangingActor {

public:
    virtual Painting::~Painting();
    virtual void remove(void);
    virtual void setPos(Vec3 const&);
    virtual void getAddPacket(void);
    virtual void getShadowRadius(void)const;
    virtual bool isPickable(void);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getWidth(void)const;
    virtual void getHeight(void)const;
    virtual void dropItem(void);
    virtual void placeHangingEntity(BlockSource &, int);

    Painting(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void clientInitialize(int, std::string const&);
    void getCurrentMotive(void)const;
};
