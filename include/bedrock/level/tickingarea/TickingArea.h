#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Bounds.h"
#include "../../../mce/UUID.h"
#include "../../actor/Actor.h"
#include "../../util/Vec3.h"
#include "./ITickingArea.h"
#include "../../../unmapped/Dimension.h"
#include "../../util/Tick.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../LevelChunk.h"
#include <string>


class TickingArea : ITickingArea {

public:
    virtual ~TickingArea();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void getEntityId()const;
    virtual bool isEntityOwned()const;
    virtual void getBlockSource();
    virtual bool isAlwaysActive()const;
    virtual void getMaxDistToPlayers()const;
    virtual void getView()const;
    virtual void getView();
    virtual void getDescription()const;
    virtual void tick(Tick const&, bool);
    virtual void tickSeasons(Random &);
    virtual void updatePosition(Vec3 const&);
    virtual void center();
    virtual void findOwner(unsigned char &);
    virtual void entityHasBeenFound()const;
    virtual void setEntityFound();
    virtual void setRegionForEntity(Actor &);
    virtual bool isRemoved();
    virtual void remove();
    virtual void onComponentChanged(unsigned int, float, bool);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkDiscarded(LevelChunk &);

    TickingArea(Dimension &, mce::UUID, std::string const&, Bounds const&, bool);
    TickingArea(Dimension &, mce::UUID, std::string const&, ActorUniqueID, Bounds const&, bool, float, bool);
    TickingArea(Dimension &, mce::UUID, Bounds const&, ActorUniqueID);
    TickingArea(Dimension &, mce::UUID, Bounds const&, ActorUniqueID, float);
    void _save();
};
