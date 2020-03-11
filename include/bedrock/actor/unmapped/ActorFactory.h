#pragma once

#include "./ActorInfo.h"
#include "./ActorDefinitionIdentifier.h"
#include "../Actor.h"
#include "./ActorDefinitionGroup.h"
#include "../../nbt/CompoundTag.h"
#include "../../util/Vec3.h"
#include "../../util/Vec2.h"
#include <memory>
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include <vector>
#include <string>


class ActorFactory {

public:

    void getComponentFactory();
    ActorFactory(Level &);
    void setDefinitionGroup(ActorDefinitionGroup *);
    void clearDefinitionGroup();
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
    std::string buildSummonEntityTypeEnum(bool);
    void lookupEntityType(ActorDefinitionIdentifier const&);
    std::string generateActorIdentifierList()const;
    void _digestIdentifierListFromServer(std::vector<ActorInfo, std::allocator<ActorInfo>> const&);
//  void setEntityInitializer(std::shared_ptr<IEntityInitializer>); //TODO: incomplete function definition
    ~ActorFactory();
};
