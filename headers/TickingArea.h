#pragma once

class TickingArea : ITickingArea {

    virtual void ~TickingArea();
    virtual void ~TickingArea();
    virtual void getId(void)const;
    virtual void _ZNK11TickingArea7getNameB5cxx11Ev;
    virtual void getEntityId(void)const;
    virtual void isEntityOwned(void)const;
    virtual void getBlockSource(void);
    virtual void isAlwaysActive(void)const;
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
    virtual void isRemoved(void);
    virtual void remove(void);
    virtual void onComponentChanged(unsigned int, float, bool);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkDiscarded(LevelChunk &);
}
