#pragma once

#include "../bedrock/util/Vec3.h"
#include <memory>
#include <vector>
#include "../bedrock/util/Tick.h"
#include <string>
#include <unordered_set>
#include <unordered_map>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
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

    void _saveVillagePOIs()const;
    void _loadVillageData(CompoundTag const&);
    bool canRemove()const;
//  void _playSoundFrom(Vec3 const&, LevelSoundEvent); //TODO: incomplete function definition
    void _findSpawnPointForRaid(Vec3 &, float, float, bool, bool)const;
    void triggerRaid();
    void _findAvailablePOI(unsigned long, Level &, Random &, ActorUniqueID);
    bool isValidBedPOI(Block const&);
    void getPOICount()const;
    bool isGoodStanding(ActorUniqueID const&);
    Village(Dimension &, mce::UUID, BlockPos const&);
//  void _getType(POIType); //TODO: incomplete function definition
    void _shouldSave()const;
    void loadDataByKey(std::string const&, CompoundTag const&);
    bool canSpawnAt(BlockSource &, int, int, int, int, int, int);
    void _loadVillageDwellers(CompoundTag const&);
    void rewardAllPlayers(int);
    void _chooseRandomPosAtDistance(Random &, Vec3 const&, float)const;
    void _spawnRaidGroup(Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &)const;
    void getBounds()const;
    void clearOwnedPOIs();
    void _findWeightedPOI(std::vector<std::weak_ptr<POIInstance>> &, Random &, ActorUniqueID);
    void _chooseRandomDirectionFromVillage(Random &)const;
    bool hasRaid()const;
//  bool hasSpecificDweller(DwellerRole, ActorUniqueID const&)const; //TODO: incomplete function definition
    std::string _getUniqueVillageKey()const;
    void _helpLocateRaiders(Raid const&);
    void _chooseRaidSpawnPosition(unsigned long, Vec3 &)const;
    void _loadVillagePlayerStanding(CompoundTag const&);
//  void resetDwellerTimer(DwellerRole, ActorUniqueID const&); //TODO: incomplete function definition
    void _updateClaimedPOIs(BlockSource &);
//  void addActorToVillage(DwellerRole, ActorUniqueID const&); //TODO: incomplete function definition
    void removeVillageSavedData();
    void _findClosestDweller(Actor *, Actor *&, float &, std::unordered_map<ActorUniqueID, Tick, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<std::pair<ActorUniqueID const, Tick>>> const&)const;
    void getClosestBadStandingPlayer(Actor *);
    void _loadVillageRaid(CompoundTag const&);
    void _shouldUpdate()const;
    void _sendRaidUpdateToPlayersInVillage(bool)const;
//  void _getDwellerMap(DwellerRole)const; //TODO: incomplete function definition
    bool isVillagePOI(BlockSource const&, BlockPos const&);
    bool isVillageHeroActive()const;
    bool isValidRegisteredPOI(BlockSource &, BlockPos const&);
    void removeAllInstancesofActorFromVillage(ActorUniqueID const&);
    void startVillageHeroTimer();
    bool isVeryBadStanding(ActorUniqueID const&);
    void _findPlayerCentricSpawnPointForRaid(Vec3 &, bool)const;
    void getUniqueID()const;
    void checkNeedMoreVillagers()const;
    void _loadVillagePOIs(CompoundTag const&);
    void debugDraw();
    void _setDefaultBoundsAround(BlockPos const&);
    void getCenter()const;
    void _saveVillageRaid()const;
    void _findSpawnableRegion(Vec3, int, bool &)const;
//  void fetchOwnedPOI(ActorUniqueID const&, POIType); //TODO: incomplete function definition
    void findRandomSpawnPos(BlockSource &, BlockPos const&, BlockPos const&);
    void tick(Tick, BlockSource &);
    void onRemovedFromManager();
    bool canSpawnAt(BlockSource &, BlockPos const&, BlockPos const&);
    bool isVillagePOI(VillageManager const&, Block const&);
    void _spawnAndReadyRaidGroup(unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &);
    void getBedPOICount()const;
    void _ringBells(BlockSource &, Random &)const;
    void getPopulationSize()const;
    void saveEntireVillage();
//  void removeActorFromVillage(DwellerRole, ActorUniqueID const&); //TODO: incomplete function definition
    void _findSpawnableRegion(Vec3, int)const;
    void _saveVillageDwellers()const;
    void addVillager(ActorUniqueID const&);
    bool isBreedTimerOk()const;
    void _addPoiToVillage(ActorUniqueID const&, std::weak_ptr<POIInstance>);
    void _findPreferredPOI(std::vector<std::weak_ptr<POIInstance>> &, HashedString const&, ActorUniqueID);
    void _updateAggressors();
    void addPOI(std::weak_ptr<POIInstance>);
    void _clearVillagerPOIs(ActorUniqueID const&);
    void getStanding(ActorUniqueID const&);
    void resetNoBreedTimer();
//  void getClosestPOI(POIType, BlockPos const&); //TODO: incomplete function definition
    void _calcPOIDist();
    void _saveVillageData()const;
    void _createRaid();
    void _applyHeroOfTheVillageEffect(BlockSource &, AABB const&);
    void _readyRaidGroup(std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &);
    void fireSoundTheAlarm();
    ~Village();
    void _updateDwellerTimers();
    void addAggressor(Mob const&);
    void getApproximateRadius()const;
    void _saveVillagePlayerStanding()const;
    void getIdealPopulationSize()const;
    void _claimUnclaimedPOIs();
    bool hasAggressors()const;
    void getUnclaimedPOIs()const;
    void modifyStanding(ActorUniqueID const&, int);
    void getRaid()const;
    bool hasPOI(std::weak_ptr<POIInstance>)const;
    bool isValidRegisteredPOI(BlockSource &, Block const&, BlockPos const&);
    void clearRaid();
//  void getDwellerRoleCount(DwellerRole)const; //TODO: incomplete function definition
    bool isBadStanding(ActorUniqueID const&);
    void _sendSoundTheAlarmAchievement(Player const&)const;
    void getClosestAggressor(Actor *);
//  bool hasInvalidRole(ActorUniqueID const&, DwellerRole const&); //TODO: incomplete function definition
    void getRaidBounds()const;
    void withinVillageBounds(Vec3 const&, float)const;
    bool canAddPOI(std::weak_ptr<POIInstance>)const;
    void removeVillager(ActorUniqueID const&);
    void villagerLivesHere(ActorUniqueID const&)const;
//  void _getDwellerMap(DwellerRole); //TODO: incomplete function definition
    void _updateUnclaimedPOIs(BlockSource &);
    void _spawnPassiveDwellers(BlockSource &, int);
};
