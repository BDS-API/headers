#pragma once

class ScriptServerBlockEventListener : BlockEventListener {

    virtual void ScriptServer~ScriptServerBlockEventListener();
    virtual void ScriptServer~ScriptServerBlockEventListener();
    virtual void ScriptServeronBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void ScriptServeronBlockDestroyedByPlayer(Player &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, BlockPos const&);
    virtual void ScriptServeronBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState);
    virtual void ScriptServeronBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void ScriptServeronBlockDestructionStarted(Player &, BlockPos const&);
    virtual void ScriptServeronBlockInteractedWith(Player &, BlockPos const&);
    virtual void ScriptServeronBlockExploded(BlockPos const&, Block const&, Actor *);
    virtual void onBlockModified(BlockPos const&, Block const&, Block const&);
    virtual void onUnknownBlockReceived(Level &, NewBlockID const&, unsigned short);
}
