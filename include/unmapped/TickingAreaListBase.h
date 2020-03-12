#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/Tick.h"
#include <vector>
#include <memory>
#include "../bedrock/util/Random.h"
#include "../bedrock/level/tickingarea/ITickingArea.h"


class TickingAreaListBase {

public:
    TickingAreaListBase();
    void removeAllAreas();
    bool processUpdates();
    std::string findUsableDefaultName()const;
    void destroyAreas();
    void empty()const;
    void countStandaloneTickingAreas()const;
    void add(std::unique_ptr<ITickingArea>);
    bool hasTickingAreaNamed(std::string const&)const;
    void getAreaFor(ActorUniqueID const&)const;
    void _shouldRemoveArea(unsigned int, std::vector<Vec3> const&)const;
    ~TickingAreaListBase();
    void findAreasNamed(std::string const&);
    void getTickingAreasDescription()const;
    void findAreasContaining(BlockPos const&);
    bool processRemoves();
    void getAreas()const;
    void tick(Tick const&);
    void tickSeasons(Random &);
    void removeAreas(std::vector<std::shared_ptr<ITickingArea>> const&);
};
