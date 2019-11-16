#pragma once

class IWorldRegistriesProvider {

    virtual void IWorldRegistriesProvider::~IWorldRegistriesProvider();
    virtual void IWorldRegistriesProvider::~IWorldRegistriesProvider();
    virtual void onSourceCreated(BlockSource &);
    virtual void onSourceDestroyed(BlockSource &);
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onBrightnessChanged(BlockSource &, BlockPos const&);
    virtual void onBlockEntityChanged(BlockSource &, BlockActor &);
    virtual void onBlockEntityAboutToBeRemoved(BlockSource &, std::shared_ptr<BlockActor>);
    virtual void onEntityChanged(BlockSource &, Actor &);
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void initialize(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, IWorldRegistriesProviderSettings const&, IWorldRegistriesProviderData *, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const*);
    virtual void startLeaveGame(void);
    virtual void addEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addGlobalEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addAutonomousEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addPlayer(std::unique_ptr<Player, std::default_delete<Player>>);
    virtual void takeEntity(ActorUniqueID);
    virtual void borrowEntity(ActorUniqueID, IWorldRegistriesProviderChunk *);
}
