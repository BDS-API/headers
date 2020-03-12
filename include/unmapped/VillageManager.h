#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/BlockPos.h"
#include "Dimension.h"
#include "../bedrock/util/Tick.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "Block.h"
#include <vector>
#include "POIInstance.h"
#include <memory>
#include "../mce/UUID.h"


class VillageManager {

public:
    static long MAX_POI_TOLERANCE_DIST;
    static long MAX_QUERY_SCAN_ITERATIONS;

    void _fetchClosestVillage(BlockPos const&, int, unsigned int);
    void _hasPOIQuery(BlockPos const&)const;
    void getPOINameFromBlueprint(Block const&)const;
    void getClosestVillageWithRaid(BlockPos const&);
    void loadAllVillages();
    void fetchClosestVillage(BlockPos const&, int, unsigned int);
    void removePOI(std::weak_ptr<POIInstance>);
    void insertPOI(std::shared_ptr<POIInstance> &&);
    void _loadPOIBlueprints();
    void _removeVillages();
    void saveAllVillages();
    void _createOrGetVillage(mce::UUID const&);
    void submitFindPOIQuery(BlockPos const&);
    void getPOITypeFromBlueprint(Block const&)const;
    void _assignPOIOnly(std::shared_ptr<POIInstance> &&);
    void getPOI(BlockPos const&)const;
    void _processNextUnclusteredPOIQuery();
    bool isRegisteredPOI(Block const&)const;
    void _clusterPOIs();
    VillageManager(Dimension &);
    bool isValidPOIType(BlockPos const&, Block const&)const;
//  bool hasPOI(BlockPos const&, POIType)const; //TODO: incomplete function definition
    bool isWanderingTraderManagedByScheduler(Actor const&);
    void _createPOI(BlockPos const&, Block const&);
    ~VillageManager();
    void _assignPOIOrCreateVillage(std::shared_ptr<POIInstance> &&);
    void tick(Tick const&);
    void getPOIBlueprint(Block const&);
    void getVillageByID(mce::UUID const&)const;
    void _addPOIWithinRadius(BlockPos const&, BlockSource &);
    void _unclusterDerelictPOIs(std::vector<std::weak_ptr<POIInstance>> &);
    void tickVillages(Tick const&, Vec3 const&, BlockSource &);
};
