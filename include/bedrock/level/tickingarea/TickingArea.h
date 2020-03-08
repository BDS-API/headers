#pragma once

#include "../../util/Random"
#include "../../util/Tick"
#include "../../actor/Actor"
#include "../../../unmapped/Dimension"
#include "../LevelChunk"
#include "../../../unmapped/Bounds"
#include "../../../mce/UUID"
#include "../../util/Vec3"
#include "../../actor/unmapped/ActorUniqueID"


class TickingArea : ITickingArea {

public:
    virtual TickingArea::~TickingArea()
    virtual void getId()const;
    virtual void getName()const;
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
