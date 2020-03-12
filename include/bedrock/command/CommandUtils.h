#pragma once

#include <string>
#include <vector>


namespace CommandUtils {

    static std::string CMD_INPUT_UNICODE_TRANSLATE_MAP;

    void createItemStack(std::string const&, int, int);
    void createItemInstance(Item const*, int, int);
    void getInvalidCommandEntities();
    void createMapData(Actor &, ItemInstance &, CommandOutput &);
    void alterSpawnableEntities(LevelData &, ActorDefinitionIdentifier const&, ActorDefinitionIdentifier &);
    void getFeetPos(Actor const*);
    void getOriginPlayer(CommandOrigin const&);
    void spawnEntityAt(BlockSource &, Vec3 const&, ActorDefinitionIdentifier const&, ActorUniqueID &, Actor *);
    void toJsonResult(std::string const&, Json::Value const&);
    void displayLocalizableMessage(bool, Player &, std::string const&, std::vector<std::string> const&);
    bool isPlayerSpawnedMob(Actor *, Actor *);
    void addtoCSVList(std::string &, std::string const&);
    void getFeetBlockPos(Actor const*);
//  bool isValidCommandEntity(std::vector<ActorType> const&, ActorType); //TODO: incomplete function definition
    void addItemInstanceComponents(ItemInstance &, Json::Value const&, std::string &);
    void createItemStacks(ItemInstance const&, int, int &);
    void createItemInstance(std::string const&, int, int);
    void clearBlockEntityContents(BlockSource &, BlockPos const&);
};
