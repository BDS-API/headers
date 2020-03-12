#pragma once

#include "../bedrock/actor/Player.h"
#include "VillageManager.h"
#include "../bedrock/level/Level.h"
#include <unordered_set>
#include <unordered_map>
#include "Dimension.h"
#include "Block.h"
#include <memory>
#include "../bedrock/util/AABB.h"
#include <string>
#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/Vec3.h"
#include <functional>
#include "../bedrock/nbt/CompoundTag.h"
#include "HashedString.h"
#include "Raid.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include <vector>
#include "POIInstance.h"
#include "../bedrock/actor/Actor.h"
#include <utility>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Tick.h"
#include "../mce/UUID.h"


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
    static std::string RAIDER_CELEBRATION_EVENT;
    static std::string STORAGE_KEY_PREFIX;
    static std::string STORAGE_KEY_VILLAGE;
    static std::string STORAGE_KEY_PLAYERS;
    static std::string STORAGE_KEY_DWELLERS;
    static std::string STORAGE_KEY_POI;
    static std::string STORAGE_KEY_RAID;

    void _helpLocateRaiders(Raid const&);
    void removeVillageSavedData();
    bool canSpawnAt(BlockSource &, int, int, int, int, int, int);
//  void addActorToVillage(DwellerRole, ActorUniqueID const&); //TODO: incomplete function definition
    void _setDefaultBoundsAround(BlockPos const&);
    bool isVeryBadStanding(ActorUniqueID const&);
    bool canSpawnAt(BlockSource &, BlockPos const&, BlockPos const&);
    void _saveVillagePlayerStanding()const;
    void modifyStanding(ActorUniqueID const&, int);
    void _findSpawnPointForRaid(Vec3 &, float, float, bool, bool)const;
    void _claimUnclaimedPOIs();
    void _ringBells(BlockSource &, Random &)const;
    bool isValidRegisteredPOI(BlockSource &, Block const&, BlockPos const&);
    void _chooseRaidSpawnPosition(unsigned long, Vec3 &)const;
    void getRaidBounds()const;
    void _updateAggressors();
    void removeVillager(ActorUniqueID const&);
    void _saveVillageRaid()const;
//  void fetchOwnedPOI(ActorUniqueID const&, POIType); //TODO: incomplete function definition
    ~Village();
    bool isBadStanding(ActorUniqueID const&);
    Village(Dimension &, mce::UUID, BlockPos const&);
    void getClosestBadStandingPlayer(Actor *);
//  void _readyRaidGroup(std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &); //TODO: incomplete function definition
//  void _getType(POIType); //TODO: incomplete function definition
    void _addPoiToVillage(ActorUniqueID const&, std::weak_ptr<POIInstance>);
    void _createRaid();
    void _saveVillageData()const;
    void getBedPOICount()const;
    void getPopulationSize()const;
    void getCenter()const;
    void checkNeedMoreVillagers()const;
    void _loadVillageData(CompoundTag const&);
    bool isVillagePOI(BlockSource const&, BlockPos const&);
    void rewardAllPlayers(int);
    void _loadVillagePOIs(CompoundTag const&);
    void getStanding(ActorUniqueID const&);
    void getClosestAggressor(Actor *);
    void startVillageHeroTimer();
    void saveEntireVillage();
    bool isVillagePOI(VillageManager const&, Block const&);
    void getUniqueID()const;
    bool canRemove()const;
    void _saveVillageDwellers()const;
    void getUnclaimedPOIs()const;
    void triggerRaid();
    void _calcPOIDist();
    std::string _getUniqueVillageKey()const;
//  bool hasSpecificDweller(DwellerRole, ActorUniqueID const&)const; //TODO: incomplete function definition
//  void _findClosestDweller(Actor *, Actor *&, float &, std::unordered_map<ActorUniqueID, Tick, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<std::pair<ActorUniqueID const, Tick>>> const&)const; //TODO: incomplete function definition
    void _updateDwellerTimers();
    void withinVillageBounds(Vec3 const&, float)const;
    void removeAllInstancesofActorFromVillage(ActorUniqueID const&);
    void _loadVillageDwellers(CompoundTag const&);
    void clearOwnedPOIs();
    void onRemovedFromManager();
    bool isGoodStanding(ActorUniqueID const&);
    void _chooseRandomPosAtDistance(Random &, Vec3 const&, float)const;
    void addPOI(std::weak_ptr<POIInstance>);
    bool isBreedTimerOk()const;
//  void getClosestPOI(POIType, BlockPos const&); //TODO: incomplete function definition
    void clearRaid();
    void _sendRaidUpdateToPlayersInVillage(bool)const;
    void _spawnPassiveDwellers(BlockSource &, int);
    void resetNoBreedTimer();
    void _clearVillagerPOIs(ActorUniqueID const&);
    bool hasAggressors()const;
    bool isVillageHeroActive()const;
    bool canAddPOI(std::weak_ptr<POIInstance>)const;
//  bool hasInvalidRole(ActorUniqueID const&, DwellerRole const&); //TODO: incomplete function definition
    void tick(Tick, BlockSource &);
    void fireSoundTheAlarm();
    void _chooseRandomDirectionFromVillage(Random &)const;
    void _findWeightedPOI(std::vector<std::weak_ptr<POIInstance>> &, Random &, ActorUniqueID);
    void _findSpawnableRegion(Vec3, int)const;
    void addVillager(ActorUniqueID const&);
//  void _getDwellerMap(DwellerRole)const; //TODO: incomplete function definition
//  void _spawnRaidGroup(Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &)const; //TODO: incomplete function definition
    void getPOICount()const;
    void loadDataByKey(std::string const&, CompoundTag const&);
//  void resetDwellerTimer(DwellerRole, ActorUniqueID const&); //TODO: incomplete function definition
    void _loadVillagePlayerStanding(CompoundTag const&);
    void _updateClaimedPOIs(BlockSource &);
    void _loadVillageRaid(CompoundTag const&);
    void getIdealPopulationSize()const;
    void getApproximateRadius()const;
    void findRandomSpawnPos(BlockSource &, BlockPos const&, BlockPos const&);
    void _applyHeroOfTheVillageEffect(BlockSource &, AABB const&);
    void _sendSoundTheAlarmAchievement(Player const&)const;
    void _updateUnclaimedPOIs(BlockSource &);
    void _shouldUpdate()const;
    bool hasPOI(std::weak_ptr<POIInstance>)const;
    void getBounds()const;
    void addAggressor(Mob const&);
    bool isValidBedPOI(Block const&);
    void debugDraw();
    void _findPreferredPOI(std::vector<std::weak_ptr<POIInstance>> &, HashedString const&, ActorUniqueID);
    void _saveVillagePOIs()const;
    bool isValidRegisteredPOI(BlockSource &, BlockPos const&);
    void villagerLivesHere(ActorUniqueID const&)const;
//  void _getDwellerMap(DwellerRole); //TODO: incomplete function definition
    void _shouldSave()const;
    void _findAvailablePOI(unsigned long, Level &, Random &, ActorUniqueID);
    bool hasRaid()const;
    void _findSpawnableRegion(Vec3, int, bool &)const;
    void getRaid()const;
//  void getDwellerRoleCount(DwellerRole)const; //TODO: incomplete function definition
    void _findPlayerCentricSpawnPointForRaid(Vec3 &, bool)const;
//  void _spawnAndReadyRaidGroup(unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &); //TODO: incomplete function definition
//  void removeActorFromVillage(DwellerRole, ActorUniqueID const&); //TODO: incomplete function definition
//  void _playSoundFrom(Vec3 const&, LevelSoundEvent); //TODO: incomplete function definition
};
