#pragma once

#include <string>
#include <memory>
#include <vector>


class TickingAreaListBase {

public:
    ~TickingAreaListBase();
    void tickSeasons(Random &);
    void getAreas()const;
    TickingAreaListBase();
    void findAreasNamed(std::string const&);
    void tick(Tick const&);
    void countStandaloneTickingAreas()const;
    void removeAreas(std::vector<std::shared_ptr<ITickingArea>> const&);
    void add(std::unique_ptr<ITickingArea>);
    bool processUpdates();
    bool hasTickingAreaNamed(std::string const&)const;
    void findAreasContaining(BlockPos const&);
    std::string findUsableDefaultName()const;
    void _shouldRemoveArea(unsigned int, std::vector<Vec3> const&)const;
    void destroyAreas();
    void getTickingAreasDescription()const;
    bool processRemoves();
    void empty()const;
    void getAreaFor(ActorUniqueID const&)const;
    void removeAllAreas();
};
