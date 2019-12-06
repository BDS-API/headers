#pragma once

class CommandUtils {

public:

    void createItemInstance(Item const*, int, int);
    void createItemInstance(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int);
    void createItemStack(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int);
    void createItemStacks(ItemInstance const&, int, int &);
    void addItemInstanceComponents(ItemInstance &, Json::Value const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void addtoCSVList(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void displayLocalizableMessage(bool, Player &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void spawnEntityAt(BlockSource &, Vec3 const&, ActorDefinitionIdentifier const&, ActorUniqueID &, Actor *);
    void alterSpawnableEntities(LevelData &, ActorDefinitionIdentifier const&, ActorDefinitionIdentifier&);
    bool isPlayerSpawnedMob(Actor *, Actor *);
    void toJsonResult(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&);
    void getFeetPos(Actor const*);
    void getFeetBlockPos(Actor const*);
    void createMapData(Actor &, ItemInstance &, CommandOutput &);
    void clearBlockEntityContents(BlockSource &, BlockPos const&);
    void getInvalidCommandEntities(void);
    bool isValidCommandEntity(std::vector<ActorType, std::allocator<ActorType>> const&, ActorType);
    void getOriginPlayer(CommandOrigin const&);
};
