#pragma once

class TickingArea : ITickingArea {

public:
    virtual ~TickingArea();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void getEntityId(void)const;
    virtual bool isEntityOwned(void)const;
    virtual void getBlockSource(void);
    virtual bool isAlwaysActive(void)const;
    virtual void getMaxDistToPlayers(void)const;
    virtual void getView(void)const;
    virtual void getView(void);
    virtual void getDescription(void)const;
    virtual void tick(Tick const&, bool);
    virtual void tickSeasons(Random &);
    virtual void updatePosition(Vec3 const&);
    virtual void center(void);
    virtual void findOwner(unsigned char &);
    virtual void entityHasBeenFound(void)const;
    virtual void setEntityFound(void);
    virtual void setRegionForEntity(Actor &);
    virtual bool isRemoved(void);
    virtual void remove(void);
    virtual void onComponentChanged(unsigned int, float, bool);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkDiscarded(LevelChunk &);

    void TickingArea(Dimension &, mce::UUID, std::string const&, Bounds const&, bool);
    void TickingArea(Dimension &, mce::UUID, std::string const&, ActorUniqueID, Bounds const&, bool, float, bool);
    void TickingArea(Dimension &, mce::UUID, Bounds const&, ActorUniqueID);
    void TickingArea(Dimension &, mce::UUID, Bounds const&, ActorUniqueID, float);
    void _save(void);
};
