#pragma once

#include "../util/Vec3"
#include "../actor/unmapped/ActorUniqueID"
#include "../actor/unmapped/ActorDefinitionIdentifier"
#include "../actor/Player"
#include "../block/unmapped/BlockSource"
#include "../item/Item"
#include "../util/BlockPos"
#include "../item/ItemInstance"
#include "../level/LevelData"
#include "../../json/Value"
#include "../actor/Actor"
#include "orgin/CommandOrigin"


class CommandUtils {

public:
    static long CMD_INPUT_UNICODE_TRANSLATE_MAP[abi:cxx11];


    void createItemInstance(Item const*, int, int);
    void createItemInstance(std::string const&, int, int);
    void createItemStack(std::string const&, int, int);
    void createItemStacks(ItemInstance const&, int, int &);
    void addItemInstanceComponents(ItemInstance &, Json::Value const&, std::string &);
    void addtoCSVList(std::string &, std::string const&);
    void displayLocalizableMessage(bool, Player &, std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void spawnEntityAt(BlockSource &, Vec3 const&, ActorDefinitionIdentifier const&, ActorUniqueID &, Actor *);
    void alterSpawnableEntities(LevelData &, ActorDefinitionIdentifier const&, ActorDefinitionIdentifier&);
    bool isPlayerSpawnedMob(Actor *, Actor *);
    void toJsonResult(std::string const&, Json::Value const&);
    void getFeetPos(Actor const*);
    void getFeetBlockPos(Actor const*);
    void createMapData(Actor &, ItemInstance &, CommandOutput &);
    void clearBlockEntityContents(BlockSource &, BlockPos const&);
    void getInvalidCommandEntities();
    bool isValidCommandEntity(std::vector<ActorType, std::allocator<ActorType>> const&, ActorType);
    void getOriginPlayer(CommandOrigin const&);
};
