#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/util/Tick"
#include "../bedrock/level/tickingarea/ITickingArea"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorUniqueID"


class TickingAreaListBase {

public:

    TickingAreaListBase(void);
    void tick(Tick const&);
    void tickSeasons(Random &);
    void getAreas()const;
    bool hasTickingAreaNamed(std::string const&)const;
    void add(std::unique_ptr<ITickingArea, std::default_delete<ITickingArea>>);
    void empty()const;
    void findAreasContaining(BlockPos const&);
    void findAreasNamed(std::string const&);
    void removeAreas(std::vector<std::shared_ptr<ITickingArea>, std::allocator<std::shared_ptr<ITickingArea>>> const&);
    void removeAllAreas();
    void getTickingAreasDescription()const;
    void countStandaloneTickingAreas()const;
    void destroyAreas();
    bool processRemoves();
    bool processUpdates();
    void getAreaFor(ActorUniqueID const&)const;
    void _shouldRemoveArea(unsigned int, std::vector<Vec3, std::allocator<Vec3>> const&)const;
};
