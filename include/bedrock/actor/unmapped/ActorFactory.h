#pragma once

#include <string>
#include <memory>
#include <vector>


class ActorFactory {

public:
    void _createDummySpawnedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&);
    void createBornEntity(ActorDefinitionIdentifier const&, BlockPos const&);
    void createSpawnedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&);
    void createEntity(std::string const&, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&);
    void setEntityInitializer(std::shared_ptr<IEntityInitializer>);
    void _constructActor(ActorDefinitionIdentifier const&, Vec3 const&, Vec2 const&);
    void lookupEntityType(ActorDefinitionIdentifier const&);
    void clearDefinitionGroup();
    void setDefinitionGroup(ActorDefinitionGroup *);
    void getComponentFactory();
    ActorFactory(Level &);
    ~ActorFactory();
    std::string generateActorIdentifierList()const;
    void fixLegacyEntity(BlockSource &, CompoundTag const*);
    void createSummonedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&);
    void createTransformedEntity(ActorDefinitionIdentifier const&, Actor *);
    void loadEntity(CompoundTag const*, DataLoadHelper &);
    void _digestIdentifierListFromServer(std::vector<ActorInfo> const&);
    void createBornEntity(ActorDefinitionIdentifier const&, Actor *);
    std::string buildSummonEntityTypeEnum(bool);
};
