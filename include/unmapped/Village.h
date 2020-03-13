#pragma once

#include "../bedrock/util/Tick.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <unordered_map>
#include <vector>
#include <memory>
#include <string>
#include "../mce/UUID.h"
#include "../bedrock/util/Vec3.h"
#include <unordered_set>


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

    void _sendSoundTheAlarmAchievement(Player const&)const; // _ZNK7Village29_sendSoundTheAlarmAchievementERK6Player
    void _addPoiToVillage(ActorUniqueID const&, std::weak_ptr<POIInstance>); // _ZN7Village16_addPoiToVillageERK13ActorUniqueIDSt8weak_ptrI11POIInstanceE
    void _calcPOIDist(); // _ZN7Village12_calcPOIDistEv
    Village(Dimension &, mce::UUID, BlockPos const&); // _ZN7VillageC2ER9DimensionN3mce4UUIDERK8BlockPos
    void _setDefaultBoundsAround(BlockPos const&); // _ZN7Village23_setDefaultBoundsAroundERK8BlockPos
    ~Village(); // _ZN7VillageD2Ev
    void getBounds()const; // _ZNK7Village9getBoundsEv
    void getRaidBounds()const; // _ZNK7Village13getRaidBoundsEv
    void tick(Tick, BlockSource &); // _ZN7Village4tickE4TickR11BlockSource
    void _updateAggressors(); // _ZN7Village17_updateAggressorsEv
    void _updateDwellerTimers(); // _ZN7Village20_updateDwellerTimersEv
    void _updateClaimedPOIs(BlockSource &); // _ZN7Village18_updateClaimedPOIsER11BlockSource
    void _shouldUpdate()const; // _ZNK7Village13_shouldUpdateEv
    void _updateUnclaimedPOIs(BlockSource &); // _ZN7Village20_updateUnclaimedPOIsER11BlockSource
    void _claimUnclaimedPOIs(); // _ZN7Village19_claimUnclaimedPOIsEv
    void getBedPOICount()const; // _ZNK7Village14getBedPOICountEv
    void getPopulationSize()const; // _ZNK7Village17getPopulationSizeEv
//  void _getDwellerMap(DwellerRole); //TODO: incomplete function definition // _ZN7Village14_getDwellerMapE11DwellerRole
    void findRandomSpawnPos(BlockSource &, BlockPos const&, BlockPos const&); // _ZN7Village18findRandomSpawnPosER11BlockSourceRK8BlockPosS4_
    void getCenter()const; // _ZNK7Village9getCenterEv
//  void addActorToVillage(DwellerRole, ActorUniqueID const&); //TODO: incomplete function definition // _ZN7Village17addActorToVillageE11DwellerRoleRK13ActorUniqueID
    void _spawnPassiveDwellers(BlockSource &, int); // _ZN7Village21_spawnPassiveDwellersER11BlockSourcei
    void _ringBells(BlockSource &, Random &)const; // _ZNK7Village10_ringBellsER11BlockSourceR6Random
    bool isVillageHeroActive()const; // _ZNK7Village19isVillageHeroActiveEv
    void _applyHeroOfTheVillageEffect(BlockSource &, AABB const&); // _ZN7Village28_applyHeroOfTheVillageEffectER11BlockSourceRK4AABB
    void _shouldSave()const; // _ZNK7Village11_shouldSaveEv
    void saveEntireVillage(); // _ZN7Village17saveEntireVillageEv
    void debugDraw(); // _ZN7Village9debugDrawEv
    void getUniqueID()const; // _ZNK7Village11getUniqueIDEv
    void withinVillageBounds(Vec3 const&, float)const; // _ZNK7Village19withinVillageBoundsERK4Vec3f
    bool canSpawnAt(BlockSource &, BlockPos const&, BlockPos const&); // _ZN7Village10canSpawnAtER11BlockSourceRK8BlockPosS4_
    bool canSpawnAt(BlockSource &, int, int, int, int, int, int); // _ZN7Village10canSpawnAtER11BlockSourceiiiiii
    void getApproximateRadius()const; // _ZNK7Village20getApproximateRadiusEv
    void getPOICount()const; // _ZNK7Village11getPOICountEv
//  void getDwellerRoleCount(DwellerRole)const; //TODO: incomplete function definition // _ZNK7Village19getDwellerRoleCountE11DwellerRole
    void getIdealPopulationSize()const; // _ZNK7Village22getIdealPopulationSizeEv
    void checkNeedMoreVillagers()const; // _ZNK7Village22checkNeedMoreVillagersEv
    bool isBreedTimerOk()const; // _ZNK7Village14isBreedTimerOkEv
    void getUnclaimedPOIs()const; // _ZNK7Village16getUnclaimedPOIsEv
//  void fetchOwnedPOI(ActorUniqueID const&, POIType); //TODO: incomplete function definition // _ZN7Village13fetchOwnedPOIERK13ActorUniqueID7POIType
    void clearOwnedPOIs(); // _ZN7Village14clearOwnedPOIsEv
    void removeVillageSavedData(); // _ZN7Village22removeVillageSavedDataEv
    std::string _getUniqueVillageKey()const; // _ZNK7Village20_getUniqueVillageKeyB5cxx11Ev
    bool canAddPOI(std::weak_ptr<POIInstance>)const; // _ZNK7Village9canAddPOIESt8weak_ptrI11POIInstanceE
    bool hasPOI(std::weak_ptr<POIInstance>)const; // _ZNK7Village6hasPOIESt8weak_ptrI11POIInstanceE
    void addPOI(std::weak_ptr<POIInstance>); // _ZN7Village6addPOIESt8weak_ptrI11POIInstanceE
    void addVillager(ActorUniqueID const&); // _ZN7Village11addVillagerERK13ActorUniqueID
//  void removeActorFromVillage(DwellerRole, ActorUniqueID const&); //TODO: incomplete function definition // _ZN7Village22removeActorFromVillageE11DwellerRoleRK13ActorUniqueID
    void removeVillager(ActorUniqueID const&); // _ZN7Village14removeVillagerERK13ActorUniqueID
    void removeAllInstancesofActorFromVillage(ActorUniqueID const&); // _ZN7Village36removeAllInstancesofActorFromVillageERK13ActorUniqueID
    void _clearVillagerPOIs(ActorUniqueID const&); // _ZN7Village18_clearVillagerPOIsERK13ActorUniqueID
//  bool hasSpecificDweller(DwellerRole, ActorUniqueID const&)const; //TODO: incomplete function definition // _ZNK7Village18hasSpecificDwellerE11DwellerRoleRK13ActorUniqueID
//  void _getDwellerMap(DwellerRole)const; //TODO: incomplete function definition // _ZNK7Village14_getDwellerMapE11DwellerRole
    void _findAvailablePOI(unsigned long, Level &, Random &, ActorUniqueID); // _ZN7Village17_findAvailablePOIEmR5LevelR6Random13ActorUniqueID
    void _findPreferredPOI(std::vector<std::weak_ptr<POIInstance>> &, HashedString const&, ActorUniqueID); // _ZN7Village17_findPreferredPOIERSt6vectorISt8weak_ptrI11POIInstanceESaIS3_EERK12HashedString13ActorUniqueID
    void _findWeightedPOI(std::vector<std::weak_ptr<POIInstance>> &, Random &, ActorUniqueID); // _ZN7Village16_findWeightedPOIERSt6vectorISt8weak_ptrI11POIInstanceESaIS3_EER6Random13ActorUniqueID
//  void _getType(POIType); //TODO: incomplete function definition // _ZN7Village8_getTypeE7POIType
    void _findClosestDweller(Actor *, Actor *&, float &, std::unordered_map<ActorUniqueID, Tick, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<std::pair<ActorUniqueID const, Tick>>> const&)const; // _ZNK7Village19_findClosestDwellerEP5ActorRS1_RfRKSt13unordered_mapI13ActorUniqueID4TickSt4hashIS5_ESt8equal_toIS5_ESaISt4pairIKS5_S6_EEE
    void _createRaid(); // _ZN7Village11_createRaidEv
    void _sendRaidUpdateToPlayersInVillage(bool)const; // _ZNK7Village33_sendRaidUpdateToPlayersInVillageEb
    void _findSpawnableRegion(Vec3, int)const; // _ZNK7Village20_findSpawnableRegionE4Vec3i
    void _findSpawnableRegion(Vec3, int, bool &)const; // _ZNK7Village20_findSpawnableRegionE4Vec3iRb
    void _chooseRaidSpawnPosition(unsigned long, Vec3 &)const; // _ZNK7Village24_chooseRaidSpawnPositionEmR4Vec3
    void _findSpawnPointForRaid(Vec3 &, float, float, bool, bool)const; // _ZNK7Village22_findSpawnPointForRaidER4Vec3ffbb
    void _findPlayerCentricSpawnPointForRaid(Vec3 &, bool)const; // _ZNK7Village35_findPlayerCentricSpawnPointForRaidER4Vec3b
    void _chooseRandomDirectionFromVillage(Random &)const; // _ZNK7Village33_chooseRandomDirectionFromVillageER6Random
    void _chooseRandomPosAtDistance(Random &, Vec3 const&, float)const; // _ZNK7Village26_chooseRandomPosAtDistanceER6RandomRK4Vec3f
    void _spawnAndReadyRaidGroup(unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &); // _ZN7Village23_spawnAndReadyRaidGroupEm4Vec3hRSt13unordered_setI13ActorUniqueIDSt4hashIS2_ESt8equal_toIS2_ESaIS2_EE
    void _spawnRaidGroup(Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &)const; // _ZNK7Village15_spawnRaidGroupE4Vec3hRSt13unordered_setI13ActorUniqueIDSt4hashIS2_ESt8equal_toIS2_ESaIS2_EE
    void _readyRaidGroup(std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID>> &); // _ZN7Village15_readyRaidGroupERSt13unordered_setI13ActorUniqueIDSt4hashIS1_ESt8equal_toIS1_ESaIS1_EE
    void loadDataByKey(std::string const&, CompoundTag const&); // _ZN7Village13loadDataByKeyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK11CompoundTag
    void _loadVillageData(CompoundTag const&); // _ZN7Village16_loadVillageDataERK11CompoundTag
    void _loadVillagePlayerStanding(CompoundTag const&); // _ZN7Village26_loadVillagePlayerStandingERK11CompoundTag
    void _loadVillageDwellers(CompoundTag const&); // _ZN7Village20_loadVillageDwellersERK11CompoundTag
    void _loadVillagePOIs(CompoundTag const&); // _ZN7Village16_loadVillagePOIsERK11CompoundTag
    void _loadVillageRaid(CompoundTag const&); // _ZN7Village16_loadVillageRaidERK11CompoundTag
    void _saveVillageData()const; // _ZNK7Village16_saveVillageDataEv
    void _saveVillagePlayerStanding()const; // _ZNK7Village26_saveVillagePlayerStandingEv
    void _saveVillageDwellers()const; // _ZNK7Village20_saveVillageDwellersEv
    void _saveVillagePOIs()const; // _ZNK7Village16_saveVillagePOIsEv
    void _saveVillageRaid()const; // _ZNK7Village16_saveVillageRaidEv
    void _helpLocateRaiders(Raid const&); // _ZN7Village18_helpLocateRaidersERK4Raid
//  void _playSoundFrom(Vec3 const&, LevelSoundEvent); //TODO: incomplete function definition // _ZN7Village14_playSoundFromERK4Vec315LevelSoundEvent
    void villagerLivesHere(ActorUniqueID const&)const; // _ZNK7Village17villagerLivesHereERK13ActorUniqueID
    void onRemovedFromManager(); // _ZN7Village20onRemovedFromManagerEv
    bool canRemove()const; // _ZNK7Village9canRemoveEv
    void addAggressor(Mob const&); // _ZN7Village12addAggressorERK3Mob
    void getClosestAggressor(Actor *); // _ZN7Village19getClosestAggressorEP5Actor
    bool hasAggressors()const; // _ZNK7Village13hasAggressorsEv
    void getClosestBadStandingPlayer(Actor *); // _ZN7Village27getClosestBadStandingPlayerEP5Actor
    bool isVeryBadStanding(ActorUniqueID const&); // _ZN7Village17isVeryBadStandingERK13ActorUniqueID
//  void getClosestPOI(POIType, BlockPos const&); //TODO: incomplete function definition // _ZN7Village13getClosestPOIE7POITypeRK8BlockPos
    bool isVillagePOI(BlockSource const&, BlockPos const&); // _ZN7Village12isVillagePOIERK11BlockSourceRK8BlockPos
    bool isValidRegisteredPOI(BlockSource &, BlockPos const&); // _ZN7Village20isValidRegisteredPOIER11BlockSourceRK8BlockPos
//  bool hasInvalidRole(ActorUniqueID const&, DwellerRole const&); //TODO: incomplete function definition // _ZN7Village14hasInvalidRoleERK13ActorUniqueIDRK11DwellerRole
    void getStanding(ActorUniqueID const&); // _ZN7Village11getStandingERK13ActorUniqueID
    void modifyStanding(ActorUniqueID const&, int); // _ZN7Village14modifyStandingERK13ActorUniqueIDi
    bool isGoodStanding(ActorUniqueID const&); // _ZN7Village14isGoodStandingERK13ActorUniqueID
    bool isBadStanding(ActorUniqueID const&); // _ZN7Village13isBadStandingERK13ActorUniqueID
    void rewardAllPlayers(int); // _ZN7Village16rewardAllPlayersEi
    void resetNoBreedTimer(); // _ZN7Village17resetNoBreedTimerEv
    void startVillageHeroTimer(); // _ZN7Village21startVillageHeroTimerEv
//  void resetDwellerTimer(DwellerRole, ActorUniqueID const&); //TODO: incomplete function definition // _ZN7Village17resetDwellerTimerE11DwellerRoleRK13ActorUniqueID
    void triggerRaid(); // _ZN7Village11triggerRaidEv
    bool hasRaid()const; // _ZNK7Village7hasRaidEv
    void getRaid()const; // _ZNK7Village7getRaidEv
    void clearRaid(); // _ZN7Village9clearRaidEv
    void fireSoundTheAlarm(); // _ZN7Village17fireSoundTheAlarmEv
    bool isVillagePOI(VillageManager const&, Block const&); // _ZN7Village12isVillagePOIERK14VillageManagerRK5Block
    bool isValidBedPOI(Block const&); // _ZN7Village13isValidBedPOIERK5Block
    bool isValidRegisteredPOI(BlockSource &, Block const&, BlockPos const&); // _ZN7Village20isValidRegisteredPOIER11BlockSourceRK5BlockRK8BlockPos
};
