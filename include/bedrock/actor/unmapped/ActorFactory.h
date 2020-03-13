#pragma once

#include <string>
#include <memory>
#include <vector>


class ActorFactory {

public:
    void getComponentFactory(); // _ZN12ActorFactory19getComponentFactoryEv
    ActorFactory(Level &); // _ZN12ActorFactoryC2ER5Level
    void setDefinitionGroup(ActorDefinitionGroup *); // _ZN12ActorFactory18setDefinitionGroupEP20ActorDefinitionGroup
    void clearDefinitionGroup(); // _ZN12ActorFactory20clearDefinitionGroupEv
    void _constructActor(ActorDefinitionIdentifier const&, Vec3 const&, Vec2 const&); // _ZN12ActorFactory15_constructActorERK25ActorDefinitionIdentifierRK4Vec3RK4Vec2
    void loadEntity(CompoundTag const*, DataLoadHelper &); // _ZN12ActorFactory10loadEntityEPK11CompoundTagR14DataLoadHelper
    void fixLegacyEntity(BlockSource &, CompoundTag const*); // _ZN12ActorFactory15fixLegacyEntityER11BlockSourcePK11CompoundTag
    void createEntity(std::string const&, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&); // _ZN12ActorFactory12createEntityERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK25ActorDefinitionIdentifierP5ActorRK4Vec3RK4Vec2
    void createSpawnedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&); // _ZN12ActorFactory19createSpawnedEntityERK25ActorDefinitionIdentifierP5ActorRK4Vec3RK4Vec2
    void createSummonedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&); // _ZN12ActorFactory20createSummonedEntityERK25ActorDefinitionIdentifierP5ActorRK4Vec3
    void createBornEntity(ActorDefinitionIdentifier const&, Actor *); // _ZN12ActorFactory16createBornEntityERK25ActorDefinitionIdentifierP5Actor
    void createTransformedEntity(ActorDefinitionIdentifier const&, Actor *); // _ZN12ActorFactory23createTransformedEntityERK25ActorDefinitionIdentifierP5Actor
    void _createDummySpawnedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&); // _ZN12ActorFactory25_createDummySpawnedEntityERK25ActorDefinitionIdentifierP5ActorRK4Vec3RK4Vec2
    void createBornEntity(ActorDefinitionIdentifier const&, BlockPos const&); // _ZN12ActorFactory16createBornEntityERK25ActorDefinitionIdentifierRK8BlockPos
    std::string buildSummonEntityTypeEnum(bool); // _ZN12ActorFactory25buildSummonEntityTypeEnumB5cxx11Eb
    void lookupEntityType(ActorDefinitionIdentifier const&); // _ZN12ActorFactory16lookupEntityTypeERK25ActorDefinitionIdentifier
    std::string generateActorIdentifierList()const; // _ZNK12ActorFactory27generateActorIdentifierListB5cxx11Ev
    void _digestIdentifierListFromServer(std::vector<ActorInfo> const&); // _ZN12ActorFactory31_digestIdentifierListFromServerERKSt6vectorI9ActorInfoSaIS1_EE
    void setEntityInitializer(std::shared_ptr<IEntityInitializer>); // _ZN12ActorFactory20setEntityInitializerESt10shared_ptrI18IEntityInitializerE
    ~ActorFactory(); // _ZN12ActorFactoryD2Ev
};
