#pragma once

#include <string>
#include "../../../unmapped/DataLoadHelper.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Actor.h"
#include "../../util/Vec3.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../../util/Vec2.h"
#include <vector>
#include <memory>
#include "../../util/BlockPos.h"
#include "ActorDefinitionIdentifier.h"
#include "ActorInfo.h"
#include "ActorDefinitionGroup.h"


class ActorFactory {

public:
    void createBornEntity(ActorDefinitionIdentifier const&, Actor *);
    ActorFactory(Level &);
    void setDefinitionGroup(ActorDefinitionGroup *);
    std::string buildSummonEntityTypeEnum(bool);
    std::string generateActorIdentifierList()const;
    void createSummonedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&);
    void getComponentFactory();
    void clearDefinitionGroup();
    void createBornEntity(ActorDefinitionIdentifier const&, BlockPos const&);
    void lookupEntityType(ActorDefinitionIdentifier const&);
//  void setEntityInitializer(std::shared_ptr<IEntityInitializer>); //TODO: incomplete function definition
    void loadEntity(CompoundTag const*, DataLoadHelper &);
    void _digestIdentifierListFromServer(std::vector<ActorInfo> const&);
    void _constructActor(ActorDefinitionIdentifier const&, Vec3 const&, Vec2 const&);
    void createEntity(std::string const&, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&);
    void _createDummySpawnedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&);
    ~ActorFactory();
    void createSpawnedEntity(ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec2 const&);
    void fixLegacyEntity(BlockSource &, CompoundTag const*);
    void createTransformedEntity(ActorDefinitionIdentifier const&, Actor *);
};
