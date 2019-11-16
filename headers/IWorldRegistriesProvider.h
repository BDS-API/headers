#pragma once

class IWorldRegistriesProvider {

    virtual void ~IWorldRegistriesProvider();
    virtual void ~IWorldRegistriesProvider();
    virtual void onSourceCreated(BlockSource &);
    virtual void onSourceDestroyed(BlockSource &);
    virtual void BlockSourceListener::onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void BlockSourceListener::onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void BlockSourceListener::onBrightnessChanged(BlockSource &, BlockPos const&);
    virtual void BlockSourceListener::onBlockEntityChanged(BlockSource &, BlockActor &);
    virtual void BlockSourceListener::onBlockEntityAboutToBeRemoved(BlockSource &, std::shared_ptr<BlockActor>);
    virtual void BlockSourceListener::onEntityChanged(BlockSource &, Actor &);
    virtual void BlockSourceListener::onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void initialize(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, IWorldRegistriesProviderSettings const&, IWorldRegistriesProviderData *, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const*);
    virtual void startLeaveGame(void);
    virtual void addEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addGlobalEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addAutonomousEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addPlayer(std::unique_ptr<Player, std::default_delete<Player>>);
    virtual void takeEntity(ActorUniqueID);
    virtual void borrowEntity(ActorUniqueID, IWorldRegistriesProviderChunk *);
}
