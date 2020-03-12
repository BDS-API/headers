#pragma once

#include "../item/ItemInstance.h"
#include "../item/Item.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/unmapped/ActorUniqueID.h"
#include "../actor/Actor.h"
#include "../actor/unmapped/ActorDefinitionIdentifier.h"
#include "../../json/Value.h"
#include "../util/Vec3.h"
#include "origin/CommandOrigin.h"
#include <vector>
#include "../actor/Player.h"
#include "../level/LevelData.h"
#include "../block/unmapped/BlockSource.h"
#include "CommandOutput.h"


namespace CommandUtils {

    static std::string CMD_INPUT_UNICODE_TRANSLATE_MAP;

    void addtoCSVList(std::string &, std::string const&);
    void createMapData(Actor &, ItemInstance &, CommandOutput &);
    void createItemInstance(Item const*, int, int);
    bool isPlayerSpawnedMob(Actor *, Actor *);
    void createItemStack(std::string const&, int, int);
    void getOriginPlayer(CommandOrigin const&);
    void getInvalidCommandEntities();
    void addItemInstanceComponents(ItemInstance &, Json::Value const&, std::string &);
    void getFeetBlockPos(Actor const*);
    void createItemInstance(std::string const&, int, int);
//  bool isValidCommandEntity(std::vector<ActorType> const&, ActorType); //TODO: incomplete function definition
    void getFeetPos(Actor const*);
    void alterSpawnableEntities(LevelData &, ActorDefinitionIdentifier const&, ActorDefinitionIdentifier &);
    void createItemStacks(ItemInstance const&, int, int &);
    void toJsonResult(std::string const&, Json::Value const&);
    void displayLocalizableMessage(bool, Player &, std::string const&, std::vector<std::string> const&);
    void spawnEntityAt(BlockSource &, Vec3 const&, ActorDefinitionIdentifier const&, ActorUniqueID &, Actor *);
    void clearBlockEntityContents(BlockSource &, BlockPos const&);
};
