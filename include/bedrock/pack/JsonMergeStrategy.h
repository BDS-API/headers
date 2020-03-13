#pragma once

#include <string>
#include <functional>
#include "ResourcePackMergeStrategy.h"
#include <vector>


class JsonMergeStrategy : ResourcePackMergeStrategy {

public:
    ~JsonMergeStrategy(); // _ZN17JsonMergeStrategyD2Ev
    virtual void mergeFiles(std::vector<LoadedResourceData> const&); // _ZN17JsonMergeStrategy10mergeFilesERKSt6vectorI18LoadedResourceDataSaIS1_EE
    virtual void _preMergeTransform(Json::Value &); // _ZN17JsonMergeStrategy18_preMergeTransformERN4Json5ValueE
    JsonMergeStrategy(std::string const&, Json::Value &, std::function<bool (Json::Value &, Json::Value const&)> const&); // _ZN17JsonMergeStrategyC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERN4Json5ValueERKSt8functionIFbSA_RKS9_EE
    void _recursiveMerge(Json::Value &, Json::Value const&); // _ZN17JsonMergeStrategy15_recursiveMergeERN4Json5ValueERKS1_
};
