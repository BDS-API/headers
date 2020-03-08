#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorUniqueID"
#include "../bedrock/util/Tick"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Player"
#include "../mce/UUID"
#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/level/Level"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/AABB"
#include "../bedrock/actor/Mob"
#include "../bedrock/actor/Actor"


class Village {

public:
    static long VILLAGE_VERSION_CURRENT;
    static long VILLAGE_START_XZ_BOUNDS;
    static long VILLAGE_START_HEIGHT;
    static long VILLAGE_UNCLAIMED_POI_CAP;
    static long VILLAGE_POI_PURGE_TIME;
    static long VILLAGE_RADIUS_APPROX_SCALAR;
    static long RAID_PREP_TIME_IN_TICKS;
    static long RAID_GROUP_COMPLETE_DELAY_IN_TICKS;
    static long RAID_LOCATION_HELP_DELAY_IN_TICKS;
    static long RAID_MAX_SPAWN_FAILURES;
    static long VILLAGE_HERO_EFFECT_DURATION;
    static long VILLAGE_HERO_BESTOW_TIME;
    static long ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE;
    static long VILLAGE_UPDATE_TICK_DELAY;
    static long VILLAGE_SAVE_TICK_DELAY;
    static long RAID_BOUNDS_PADDING;
    static long UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS;
    static long DEBUG_DRAWING;
    static long RAID_TIMEOUT_IN_TICKS;
    static long RAIDER_CELEBRATION_EVENT[abi:cxx11];
    static long STORAGE_KEY_PREFIX[abi:cxx11];
    static long STORAGE_KEY_VILLAGE[abi:cxx11];
    static long STORAGE_KEY_PLAYERS[abi:cxx11];
    static long STORAGE_KEY_DWELLERS[abi:cxx11];
    static long STORAGE_KEY_POI[abi:cxx11];
    static long STORAGE_KEY_RAID[abi:cxx11];


    void _sendSoundTheAlarmAchievement(Player const&)const;
    void _addPoiToVillage(ActorUniqueID const&, std::weak_ptr<POIInstance>);
    void _calcPOIDist();
    Village(Dimension &, mce::UUID, BlockPos const&);
    void _setDefaultBoundsAround(BlockPos const&);
    void getBounds()const;
    void getRaidBounds()const;
    void tick(Tick, BlockSource &);
    void _updateAggressors();
    void _updateDwellerTimers();
    void _updateClaimedPOIs(BlockSource &);
    void _shouldUpdate()const;
    void _updateUnclaimedPOIs(BlockSource &);
    void _claimUnclaimedPOIs();
    void getBedPOICount()const;
    void getPopulationSize()const;
    void _getDwellerMap(DwellerRole);
    void findRandomSpawnPos(BlockSource &, BlockPos const&, BlockPos const&);
    void getCenter()const;
    void addActorToVillage(DwellerRole, ActorUniqueID const&);
    void _spawnPassiveDwellers(BlockSource &, int);
    void _ringBells(BlockSource &, Random &)const;
    bool isVillageHeroActive()const;
    void _applyHeroOfTheVillageEffect(BlockSource &, AABB const&);
    void _shouldSave()const;
    void saveEntireVillage();
    void debugDraw();
    void getUniqueID()const;
    void withinVillageBounds(Vec3 const&, float)const;
    bool canSpawnAt(BlockSource &, BlockPos const&, BlockPos const&);
    bool canSpawnAt(BlockSource &, int, int, int, int, int, int);
    void getApproximateRadius()const;
    void getPOICount()const;
    void getDwellerRoleCount(DwellerRole)const;
    void getIdealPopulationSize()const;
    void checkNeedMoreVillagers()const;
    bool isBreedTimerOk()const;
    void getUnclaimedPOIs()const;
    void fetchOwnedPOI(ActorUniqueID const&, POIType);
    void clearOwnedPOIs();
    void removeVillageSavedData();
    bool canAddPOI(std::weak_ptr<POIInstance>)const;
    bool hasPOI(std::weak_ptr<POIInstance>)const;
    void addPOI(std::weak_ptr<POIInstance>);
    void addVillager(ActorUniqueID const&);
    void removeActorFromVillage(DwellerRole, ActorUniqueID const&);
    void removeVillager(ActorUniqueID const&);
    void removeAllInstancesofActorFromVillage(ActorUniqueID const&);
    void _clearVillagerPOIs(ActorUniqueID const&);
    bool hasSpecificDweller(DwellerRole, ActorUniqueID const&)const;
    void _getDwellerMap(DwellerRole)const;
    void _findAvailablePOI(unsigned long, Level &, Random &, ActorUniqueID);
    void _findPreferredPOI(std::vector<std::weak_ptr<POIInstance>, std::allocator<std::weak_ptr<POIInstance>>> &, HashedString const&, ActorUniqueID);
    void _findWeightedPOI(std::vector<std::weak_ptr<POIInstance>, std::allocator<std::weak_ptr<POIInstance>>> &, Random &, ActorUniqueID);
    void _getType(POIType);
    void _findClosestDweller(Actor *, Actor *&, float &, std::unordered_map<ActorUniqueID, Tick, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<std::pair<ActorUniqueID const, Tick>>> const&)const;
    void _createRaid();
    void _sendRaidUpdateToPlayersInVillage(bool)const;
    void _findSpawnableRegion(Vec3, int)const;
    void _findSpawnableRegion(Vec3, int, bool &)const;
    void _chooseRaidSpawnPosition(unsigned long, Vec3 &)const;
    void _findSpawnPointForRaid(Vec3 &, float, float, bool, bool)const;
    void _findPlayerCentricSpawnPointForRaid(Vec3 &, bool)const;
    void _chooseRandomDirectionFromVillage(Random &)const;
    void _chooseRandomPosAtDistance(Random &, Vec3 const&, float)const;
    void _spawnAndReadyRaidGroup(unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &);
    void _spawnRaidGroup(Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &)const;
    void _readyRaidGroup(std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &);
    void loadDataByKey(std::string const&, CompoundTag const&);
    void _loadVillageData(CompoundTag const&);
    void _loadVillagePlayerStanding(CompoundTag const&);
    void _loadVillageDwellers(CompoundTag const&);
    void _loadVillagePOIs(CompoundTag const&);
    void _loadVillageRaid(CompoundTag const&);
    void _saveVillageData()const;
    void _saveVillagePlayerStanding()const;
    void _saveVillageDwellers()const;
    void _saveVillagePOIs()const;
    void _saveVillageRaid()const;
    void _helpLocateRaiders(Raid const&);
    void _playSoundFrom(Vec3 const&, LevelSoundEvent);
    void villagerLivesHere(ActorUniqueID const&)const;
    void onRemovedFromManager();
    bool canRemove()const;
    void addAggressor(Mob const&);
    void getClosestAggressor(Actor *);
    bool hasAggressors()const;
    void getClosestBadStandingPlayer(Actor *);
    bool isVeryBadStanding(ActorUniqueID const&);
    void getClosestPOI(POIType, BlockPos const&);
    bool isVillagePOI(BlockSource const&, BlockPos const&);
    bool isValidRegisteredPOI(BlockSource &, BlockPos const&);
    bool hasInvalidRole(ActorUniqueID const&, DwellerRole const&);
    void getStanding(ActorUniqueID const&);
    void modifyStanding(ActorUniqueID const&, int);
    bool isGoodStanding(ActorUniqueID const&);
    bool isBadStanding(ActorUniqueID const&);
    void rewardAllPlayers(int);
    void resetNoBreedTimer();
    void startVillageHeroTimer();
    void resetDwellerTimer(DwellerRole, ActorUniqueID const&);
    void triggerRaid();
    bool hasRaid()const;
    void getRaid()const;
    void clearRaid();
    void fireSoundTheAlarm();
    bool isVillagePOI(VillageManager const&, Block const&);
    bool isValidBedPOI(Block const&);
    bool isValidRegisteredPOI(BlockSource &, Block const&, BlockPos const&);
};
