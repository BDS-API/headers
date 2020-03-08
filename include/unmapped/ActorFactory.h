#pragma once

#include "../bedrock/level/Level"
#include "../bedrock/nbt/CompoundTag"


class ActorFactory {

public:

    void getComponentFactory(void);
    ActorFactory(Level &);
    void setDefinitionGroup(ActorDefinitionGroup *);
    void clearDefinitionGroup(void);
    void _constructActor(ActorDefinitionIdentifier const&, Vec3 const&, Vec2 const&);
    void loadEntity(CompoundTag const*, DataLoadHelper &);
    void fixLegacyEntity(BlockSource &, CompoundTag const*);
    void createEntity(std::string const&, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&);
    void createSpawnedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&);
    void createSummonedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&);
    void createBornEntity(ActorDefinitionIdentifier const&, Actor *);
    void createTransformedEntity(ActorDefinitionIdentifier const&, Actor *);
    void _createDummySpawnedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&);
    void createBornEntity(ActorDefinitionIdentifier const&, BlockPos const&);
    void lookupEntityType(ActorDefinitionIdentifier const&);
    void _digestIdentifierListFromServer(std::vector<ActorInfo, std::allocator<ActorInfo>> const&);
    void setEntityInitializer(std::shared_ptr<IEntityInitializer>);
};
