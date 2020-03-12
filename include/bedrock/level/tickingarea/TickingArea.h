#pragma once

#include "../LevelChunk.h"
#include <string>
#include "../../util/Random.h"
#include "../../../mce/UUID.h"
#include "../../util/Vec3.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../actor/Actor.h"
#include "../../../unmapped/Bounds.h"
#include "../../util/Tick.h"
#include "../../../unmapped/Dimension.h"
#include "ITickingArea.h"


class TickingArea : ITickingArea {

public:
    virtual void getView()const;
    virtual std::string getName()const;
    virtual void getEntityId()const;
    virtual void getMaxDistToPlayers()const;
    virtual void onChunkLoaded(LevelChunk &);
    ~TickingArea();
    virtual void updatePosition(Vec3 const&);
    virtual void getDescription()const;
    virtual void onChunkDiscarded(LevelChunk &);
    virtual bool isRemoved();
    virtual void tickSeasons(Random &);
    virtual bool isAlwaysActive()const;
    virtual void onComponentChanged(unsigned int, float, bool);
    virtual void entityHasBeenFound()const;
    virtual void getBlockSource();
    virtual void center();
    virtual void getId()const;
    virtual void setEntityFound();
    virtual void remove();
    virtual bool isEntityOwned()const;
    virtual void setRegionForEntity(Actor &);
    virtual void findOwner(unsigned char &);
    virtual void getView();
    virtual void tick(Tick const&, bool);
    TickingArea(Dimension &, mce::UUID, std::string const&, Bounds const&, bool);
    TickingArea(Dimension &, mce::UUID, Bounds const&, ActorUniqueID);
    TickingArea(Dimension &, mce::UUID, Bounds const&, ActorUniqueID, float);
    TickingArea(Dimension &, mce::UUID, std::string const&, ActorUniqueID, Bounds const&, bool, float, bool);
    void _save();
};
