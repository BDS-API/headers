#pragma once

#include <string>


class ObjectiveCriteria {

public:
//  ObjectiveCriteria(std::string const&, bool, ObjectiveRenderType); //TODO: incomplete function definition // _ZN17ObjectiveCriteriaC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb19ObjectiveRenderType
    std::string getName()const; // _ZNK17ObjectiveCriteria7getNameB5cxx11Ev
    bool isReadOnly()const; // _ZNK17ObjectiveCriteria10isReadOnlyEv
    void getRenderType()const; // _ZNK17ObjectiveCriteria13getRenderTypeEv
    void deserialize(CompoundTag const&); // _ZN17ObjectiveCriteria11deserializeERK11CompoundTag
    void serialize(ObjectiveCriteria const&); // _ZN17ObjectiveCriteria9serializeERKS_
    ~ObjectiveCriteria(); // _ZN17ObjectiveCriteriaD2Ev
};
