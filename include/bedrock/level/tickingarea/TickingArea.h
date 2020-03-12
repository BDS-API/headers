#pragma once

#include <string>
#include "ITickingArea.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../mce/UUID.h"


class TickingArea : ITickingArea {

public:
    virtual void updatePosition(Vec3 const&);
    ~TickingArea();
    virtual void getEntityId()const;
    virtual void onChunkLoaded(LevelChunk &);
    virtual void entityHasBeenFound()const;
    virtual void getBlockSource();
    virtual bool isAlwaysActive()const;
    virtual void onComponentChanged(unsigned int, float, bool);
    virtual void getView()const;
    virtual void getId()const;
    virtual bool isRemoved();
    virtual void remove();
    virtual void setEntityFound();
    virtual void findOwner(unsigned char &);
    virtual void onChunkDiscarded(LevelChunk &);
    virtual void getView();
    virtual void setRegionForEntity(Actor &);
    virtual void tick(Tick const&, bool);
    virtual bool isEntityOwned()const;
    virtual void getDescription()const;
    virtual void getMaxDistToPlayers()const;
    virtual std::string getName()const;
    virtual void tickSeasons(Random &);
    virtual void center();
    void _save();
    TickingArea(Dimension &, mce::UUID, std::string const&, Bounds const&, bool);
    TickingArea(Dimension &, mce::UUID, std::string const&, ActorUniqueID, Bounds const&, bool, float, bool);
    TickingArea(Dimension &, mce::UUID, Bounds const&, ActorUniqueID);
    TickingArea(Dimension &, mce::UUID, Bounds const&, ActorUniqueID, float);
};
