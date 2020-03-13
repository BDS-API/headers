#pragma once

#include <memory>
#include <vector>


class VillageManager {

public:
    static long MAX_POI_TOLERANCE_DIST;
    static long MAX_QUERY_SCAN_ITERATIONS;

    VillageManager(Dimension &); // _ZN14VillageManagerC2ER9Dimension
    void _loadPOIBlueprints(); // _ZN14VillageManager18_loadPOIBlueprintsEv
    ~VillageManager(); // _ZN14VillageManagerD2Ev
    void tick(Tick const&); // _ZN14VillageManager4tickERK4Tick
    void _removeVillages(); // _ZN14VillageManager15_removeVillagesEv
    void _processNextUnclusteredPOIQuery(); // _ZN14VillageManager31_processNextUnclusteredPOIQueryEv
    void _clusterPOIs(); // _ZN14VillageManager12_clusterPOIsEv
    void tickVillages(Tick const&, Vec3 const&, BlockSource &); // _ZN14VillageManager12tickVillagesERK4TickRK4Vec3R11BlockSource
    void submitFindPOIQuery(BlockPos const&); // _ZN14VillageManager18submitFindPOIQueryERK8BlockPos
    void _hasPOIQuery(BlockPos const&)const; // _ZNK14VillageManager12_hasPOIQueryERK8BlockPos
    bool isWanderingTraderManagedByScheduler(Actor const&); // _ZN14VillageManager35isWanderingTraderManagedBySchedulerERK5Actor
    void loadAllVillages(); // _ZN14VillageManager15loadAllVillagesEv
    void saveAllVillages(); // _ZN14VillageManager15saveAllVillagesEv
    void _createOrGetVillage(mce::UUID const&); // _ZN14VillageManager19_createOrGetVillageERKN3mce4UUIDE
    void _unclusterDerelictPOIs(std::vector<std::weak_ptr<POIInstance>> &); // _ZN14VillageManager22_unclusterDerelictPOIsERSt6vectorISt8weak_ptrI11POIInstanceESaIS3_EE
    void fetchClosestVillage(BlockPos const&, int, unsigned int); // _ZN14VillageManager19fetchClosestVillageERK8BlockPosij
    void _fetchClosestVillage(BlockPos const&, int, unsigned int); // _ZN14VillageManager20_fetchClosestVillageERK8BlockPosij
    void getClosestVillageWithRaid(BlockPos const&); // _ZN14VillageManager25getClosestVillageWithRaidERK8BlockPos
    void getVillageByID(mce::UUID const&)const; // _ZNK14VillageManager14getVillageByIDERKN3mce4UUIDE
    void _addPOIWithinRadius(BlockPos const&, BlockSource &); // _ZN14VillageManager19_addPOIWithinRadiusERK8BlockPosR11BlockSource
    void _assignPOIOrCreateVillage(std::shared_ptr<POIInstance> &&); // _ZN14VillageManager25_assignPOIOrCreateVillageEOSt10shared_ptrI11POIInstanceE
    void insertPOI(std::shared_ptr<POIInstance> &&); // _ZN14VillageManager9insertPOIEOSt10shared_ptrI11POIInstanceE
    void _assignPOIOnly(std::shared_ptr<POIInstance> &&); // _ZN14VillageManager14_assignPOIOnlyEOSt10shared_ptrI11POIInstanceE
    void getPOI(BlockPos const&)const; // _ZNK14VillageManager6getPOIERK8BlockPos
    void _createPOI(BlockPos const&, Block const&); // _ZN14VillageManager10_createPOIERK8BlockPosRK5Block
//  bool hasPOI(BlockPos const&, POIType)const; //TODO: incomplete function definition // _ZNK14VillageManager6hasPOIERK8BlockPos7POIType
    void getPOIBlueprint(Block const&); // _ZN14VillageManager15getPOIBlueprintERK5Block
    void removePOI(std::weak_ptr<POIInstance>); // _ZN14VillageManager9removePOIESt8weak_ptrI11POIInstanceE
    bool isRegisteredPOI(Block const&)const; // _ZNK14VillageManager15isRegisteredPOIERK5Block
    bool isValidPOIType(BlockPos const&, Block const&)const; // _ZNK14VillageManager14isValidPOITypeERK8BlockPosRK5Block
    void getPOITypeFromBlueprint(Block const&)const; // _ZNK14VillageManager23getPOITypeFromBlueprintERK5Block
    void getPOINameFromBlueprint(Block const&)const; // _ZNK14VillageManager23getPOINameFromBlueprintERK5Block
};
