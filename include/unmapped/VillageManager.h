#pragma once

class VillageManager {

public:
    static long MAX_POI_TOLERANCE_DIST;
    static long MAX_QUERY_SCAN_ITERATIONS;


    VillageManager(Dimension &);
    void _loadPOIBlueprints(void);
    void tick(Tick const&);
    void _removeVillages(void);
    void _processNextUnclusteredPOIQuery(void);
    void _clusterPOIs(void);
    void tickVillages(Tick const&, Vec3 const&, BlockSource &);
    void submitFindPOIQuery(BlockPos const&);
    void _hasPOIQuery(BlockPos const&)const;
    bool isWanderingTraderManagedByScheduler(Actor const&);
    void loadAllVillages(void);
    void saveAllVillages(void);
    void _createOrGetVillage(mce::UUID const&);
    void _unclusterDerelictPOIs(std::vector<std::weak_ptr<POIInstance>, std::allocator<std::weak_ptr<POIInstance>>> &);
    void fetchClosestVillage(BlockPos const&, int, unsigned int);
    void _fetchClosestVillage(BlockPos const&, int, unsigned int);
    void getClosestVillageWithRaid(BlockPos const&);
    void getVillageByID(mce::UUID const&)const;
    void _addPOIWithinRadius(BlockPos const&, BlockSource &);
    void _assignPOIOrCreateVillage(std::shared_ptr<POIInstance> &&);
    void insertPOI(std::shared_ptr<POIInstance> &&);
    void _assignPOIOnly(std::shared_ptr<POIInstance> &&);
    void getPOI(BlockPos const&)const;
    void _createPOI(BlockPos const&, Block const&);
    bool hasPOI(BlockPos const&, POIType)const;
    void getPOIBlueprint(Block const&);
    void removePOI(std::weak_ptr<POIInstance>);
    bool isRegisteredPOI(Block const&)const;
    bool isValidPOIType(BlockPos const&, Block const&)const;
    void getPOITypeFromBlueprint(Block const&)const;
    void getPOINameFromBlueprint(Block const&)const;
};
