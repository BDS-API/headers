#pragma once

#include <string>
#include <functional>
#include "ResourcePackMergeStrategy.h"
#include <vector>


class ItemOffsetsJsonMergeStrategy : ResourcePackMergeStrategy {

public:
    ~ItemOffsetsJsonMergeStrategy(); // _ZN28ItemOffsetsJsonMergeStrategyD2Ev
    virtual void mergeFiles(std::vector<LoadedResourceData> const&); // _ZN28ItemOffsetsJsonMergeStrategy10mergeFilesERKSt6vectorI18LoadedResourceDataSaIS1_EE
    ItemOffsetsJsonMergeStrategy(std::string const&, Json::Value &, std::function<bool (Json::Value &, Json::Value const&)> const&); // _ZN28ItemOffsetsJsonMergeStrategyC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERN4Json5ValueERKSt8functionIFbSA_RKS9_EE
};
