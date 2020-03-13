#pragma once

#include <string>
#include "ITickingArea.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../mce/UUID.h"


class TickingArea : ITickingArea {

public:
    ~TickingArea(); // _ZN11TickingAreaD2Ev
    virtual void getId()const; // _ZNK11TickingArea5getIdEv
    virtual std::string getName()const; // _ZNK11TickingArea7getNameB5cxx11Ev
    virtual void getEntityId()const; // _ZNK11TickingArea11getEntityIdEv
    virtual bool isEntityOwned()const; // _ZNK11TickingArea13isEntityOwnedEv
    virtual void getBlockSource(); // _ZN11TickingArea14getBlockSourceEv
    virtual bool isAlwaysActive()const; // _ZNK11TickingArea14isAlwaysActiveEv
    virtual void getMaxDistToPlayers()const; // _ZNK11TickingArea19getMaxDistToPlayersEv
    virtual void getView()const; // _ZNK11TickingArea7getViewEv
    virtual void getView(); // _ZN11TickingArea7getViewEv
    virtual void getDescription()const; // _ZNK11TickingArea14getDescriptionEv
    virtual void tick(Tick const&, bool); // _ZN11TickingArea4tickERK4Tickb
    virtual void tickSeasons(Random &); // _ZN11TickingArea11tickSeasonsER6Random
    virtual void updatePosition(Vec3 const&); // _ZN11TickingArea14updatePositionERK4Vec3
    virtual void center(); // _ZN11TickingArea6centerEv
    virtual void findOwner(unsigned char &); // _ZN11TickingArea9findOwnerERh
    virtual void entityHasBeenFound()const; // _ZNK11TickingArea18entityHasBeenFoundEv
    virtual void setEntityFound(); // _ZN11TickingArea14setEntityFoundEv
    virtual void setRegionForEntity(Actor &); // _ZN11TickingArea18setRegionForEntityER5Actor
    virtual bool isRemoved(); // _ZN11TickingArea9isRemovedEv
    virtual void remove(); // _ZN11TickingArea6removeEv
    virtual void onComponentChanged(unsigned int, float, bool); // _ZN11TickingArea18onComponentChangedEjfb
    virtual void onChunkLoaded(LevelChunk &); // _ZN11TickingArea13onChunkLoadedER10LevelChunk
    virtual void onChunkDiscarded(LevelChunk &); // _ZN11TickingArea16onChunkDiscardedER10LevelChunk
    TickingArea(Dimension &, mce::UUID, std::string const&, Bounds const&, bool); // _ZN11TickingAreaC2ER9DimensionN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK6Boundsb
    TickingArea(Dimension &, mce::UUID, std::string const&, ActorUniqueID, Bounds const&, bool, float, bool); // _ZN11TickingAreaC2ER9DimensionN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13ActorUniqueIDRK6Boundsbfb
    TickingArea(Dimension &, mce::UUID, Bounds const&, ActorUniqueID); // _ZN11TickingAreaC2ER9DimensionN3mce4UUIDERK6Bounds13ActorUniqueID
    TickingArea(Dimension &, mce::UUID, Bounds const&, ActorUniqueID, float); // _ZN11TickingAreaC2ER9DimensionN3mce4UUIDERK6Bounds13ActorUniqueIDf
    void _save(); // _ZN11TickingArea5_saveEv
};
