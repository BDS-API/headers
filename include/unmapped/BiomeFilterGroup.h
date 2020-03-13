#pragma once

#include "FilterGroup.h"


class BiomeFilterGroup : FilterGroup {

public:
    ~BiomeFilterGroup(); // _ZN16BiomeFilterGroupD2Ev
//  virtual void _createSubgroup(FilterGroup::CollectionType)const; //TODO: incomplete function definition // _ZNK16BiomeFilterGroup15_createSubgroupEN11FilterGroup14CollectionTypeE
    BiomeFilterGroup(BiomeFilterGroup const&); // _ZN16BiomeFilterGroupC2ERKS_
//  BiomeFilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition // _ZN16BiomeFilterGroupC2EN11FilterGroup14CollectionTypeE
    void finalizeParsedValue(IWorldRegistriesProvider &); // _ZN16BiomeFilterGroup19finalizeParsedValueER24IWorldRegistriesProvider
};
