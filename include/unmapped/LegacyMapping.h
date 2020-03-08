#pragma once

#include "../bedrock/definition/Definition"


using namespace ActorFilterGroup;

class LegacyMapping {

public:

    LegacyMapping(FilterGroup::CollectionType, FilterTest::Definition const&, FilterSubject, FilterOperator, ActorFilterGroup::Processing);
};
