#pragma once

#include "FilterGroup.h"


class BiomeFilterGroup : public FilterGroup {

public:
    virtual ~BiomeFilterGroup(); // _ZN16BiomeFilterGroupD2Ev
    virtual void __fake_function0(); // fake
    virtual void _createSubgroup__incomplete0(long)const; //TODO: incomplete function definition // _ZNK16BiomeFilterGroup15_createSubgroupEN11FilterGroup14CollectionTypeE
    BiomeFilterGroup(BiomeFilterGroup const&); // _ZN16BiomeFilterGroupC2ERKS_
//    BiomeFilterGroup(long); //TODO: incomplete function definition // _ZN16BiomeFilterGroupC2EN11FilterGroup14CollectionTypeE
    void finalizeParsedValue(IWorldRegistriesProvider &); // _ZN16BiomeFilterGroup19finalizeParsedValueER24IWorldRegistriesProvider
};
