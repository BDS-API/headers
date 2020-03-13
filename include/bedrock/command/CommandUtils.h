#pragma once

#include <string>
#include <vector>


namespace CommandUtils {

    static std::string CMD_INPUT_UNICODE_TRANSLATE_MAP;

    void createItemInstance(Item const*, int, int); // _ZN12CommandUtils18createItemInstanceEPK4Itemii
    void createItemInstance(std::string const&, int, int); // _ZN12CommandUtils18createItemInstanceERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEii
    void createItemStack(std::string const&, int, int); // _ZN12CommandUtils15createItemStackERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEii
    void createItemStacks(ItemInstance const&, int, int &); // _ZN12CommandUtils16createItemStacksERK12ItemInstanceiRi
    void addItemInstanceComponents(ItemInstance &, Json::Value const&, std::string &); // _ZN12CommandUtils25addItemInstanceComponentsER12ItemInstanceRKN4Json5ValueERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addtoCSVList(std::string &, std::string const&); // _ZN12CommandUtils12addtoCSVListERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS5_
    void displayLocalizableMessage(bool, Player &, std::string const&, std::vector<std::string> const&); // _ZN12CommandUtils25displayLocalizableMessageEbR6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS7_SaIS7_EE
    void spawnEntityAt(BlockSource &, Vec3 const&, ActorDefinitionIdentifier const&, ActorUniqueID &, Actor *); // _ZN12CommandUtils13spawnEntityAtER11BlockSourceRK4Vec3RK25ActorDefinitionIdentifierR13ActorUniqueIDP5Actor
    void alterSpawnableEntities(LevelData &, ActorDefinitionIdentifier const&, ActorDefinitionIdentifier &); // _ZN12CommandUtils22alterSpawnableEntitiesER9LevelDataRK25ActorDefinitionIdentifierRS2_
    bool isPlayerSpawnedMob(Actor *, Actor *); // _ZN12CommandUtils18isPlayerSpawnedMobEP5ActorS1_
    void toJsonResult(std::string const&, Json::Value const&); // _ZN12CommandUtils12toJsonResultERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    void getFeetPos(Actor const*); // _ZN12CommandUtils10getFeetPosEPK5Actor
    void getFeetBlockPos(Actor const*); // _ZN12CommandUtils15getFeetBlockPosEPK5Actor
    void createMapData(Actor &, ItemInstance &, CommandOutput &); // _ZN12CommandUtils13createMapDataER5ActorR12ItemInstanceR13CommandOutput
    void clearBlockEntityContents(BlockSource &, BlockPos const&); // _ZN12CommandUtils24clearBlockEntityContentsER11BlockSourceRK8BlockPos
    void getInvalidCommandEntities(); // _ZN12CommandUtils25getInvalidCommandEntitiesEv
//  bool isValidCommandEntity(std::vector<ActorType> const&, ActorType); //TODO: incomplete function definition // _ZN12CommandUtils20isValidCommandEntityERKSt6vectorI9ActorTypeSaIS1_EES1_
    void getOriginPlayer(CommandOrigin const&); // _ZN12CommandUtils15getOriginPlayerERK13CommandOrigin
};
