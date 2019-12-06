#pragma once

class EndGatewayBlockActor : BlockActor {

public:
    static long EndGatewayBlockActor::SPAWN_TIME;
    static long EndGatewayBlockActor::COOLDOWN_TIME;
    static long EndGatewayBlockActor::EVENT_COOLDOWN;

    virtual ~EndGatewayBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual bool hasAlphaLayer(void)const;

    void EndGatewayBlockActor(BlockPos const&);
    bool canTeleport(Actor *, BlockSource &)const;
    bool isSpawning(void)const;
    bool isCoolingDown(void)const;
    void teleportEntity(Actor &);
    void getSpawnPercentage(void)const;
    void getCoolDownPercentage(void)const;
    void triggerCooldown(BlockSource &);
    void _getHighestSection(WorldGenerator &, BlockVolume &, BlockPos const&);
    void findExitPortal(WorldGenerator &, BlockPos const&);
    void getParticleAmount(BlockSource &, BlockPos const&)const;
    void findTallestBlock(BlockSource &, BlockPos const&, int, bool);
    void findValidSpawnAround(BlockSource &, BlockPos const&, bool, int);
    void _hasRoomForPlayer(BlockSource &, BlockPos const&);
    void setExitPosition(BlockPos const&);
    void getExitPosition(void)const;
    void exitPositionVerified(void)const;
};
