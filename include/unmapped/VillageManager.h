#pragma once

#include <memory>
#include <vector>


class VillageManager {

public:
    static long MAX_POI_TOLERANCE_DIST;
    static long MAX_QUERY_SCAN_ITERATIONS;

    void _assignPOIOrCreateVillage(std::shared_ptr<POIInstance> &&);
    void removePOI(std::weak_ptr<POIInstance>);
    void _createOrGetVillage(mce::UUID const&);
    void _addPOIWithinRadius(BlockPos const&, BlockSource &);
    void _hasPOIQuery(BlockPos const&)const;
    void getPOI(BlockPos const&)const;
    void fetchClosestVillage(BlockPos const&, int, unsigned int);
    bool isRegisteredPOI(Block const&)const;
    void getVillageByID(mce::UUID const&)const;
    bool isWanderingTraderManagedByScheduler(Actor const&);
    void loadAllVillages();
    void _loadPOIBlueprints();
    bool isValidPOIType(BlockPos const&, Block const&)const;
    VillageManager(Dimension &);
    void tickVillages(Tick const&, Vec3 const&, BlockSource &);
    ~VillageManager();
    void saveAllVillages();
    void _createPOI(BlockPos const&, Block const&);
    void _assignPOIOnly(std::shared_ptr<POIInstance> &&);
//  bool hasPOI(BlockPos const&, POIType)const; //TODO: incomplete function definition
    void _unclusterDerelictPOIs(std::vector<std::weak_ptr<POIInstance>> &);
    void getPOIBlueprint(Block const&);
    void _fetchClosestVillage(BlockPos const&, int, unsigned int);
    void _clusterPOIs();
    void getPOINameFromBlueprint(Block const&)const;
    void getPOITypeFromBlueprint(Block const&)const;
    void _processNextUnclusteredPOIQuery();
    void insertPOI(std::shared_ptr<POIInstance> &&);
    void tick(Tick const&);
    void submitFindPOIQuery(BlockPos const&);
    void getClosestVillageWithRaid(BlockPos const&);
    void _removeVillages();
};
