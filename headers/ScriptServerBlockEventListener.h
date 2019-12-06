#pragma once

class ScriptServerBlockEventListener : BlockEventListener {

public:
    virtual ~ScriptServerBlockEventListener();
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onBlockDestroyedByPlayer(Player &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, BlockPos const&);
    virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState);
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void onBlockDestructionStarted(Player &, BlockPos const&);
    virtual void onBlockInteractedWith(Player &, BlockPos const&);
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *);

    void ScriptServerBlockEventListener(MinecraftServerScriptEngine &);
};
