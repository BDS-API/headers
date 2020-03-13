#pragma once

#include <string>
#include <memory>


class BehaviorData {

public:
    class DataProxy;

    ~BehaviorData(); // _ZN12BehaviorDataD2Ev
    BehaviorData(BehaviorData &&); // _ZN12BehaviorDataC2EOS_
    BehaviorData(); // _ZN12BehaviorDataC2Ev
    bool hasData(std::string const&)const; // _ZNK12BehaviorData7hasDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  bool hasDataOfType(std::string const&, BehaviorData::DataType)const; //TODO: incomplete function definition // _ZNK12BehaviorData13hasDataOfTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_8DataTypeE
    void reset(); // _ZN12BehaviorData5resetEv
    void copyData(std::string const&, std::string const&, BehaviorData &); // _ZN12BehaviorData8copyDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_RS_
    void pushToStack(std::unique_ptr<BehaviorData::DataProxy>); // _ZN12BehaviorData11pushToStackESt10unique_ptrINS_9DataProxyESt14default_deleteIS1_EE
    void popFromStack(std::string const&); // _ZN12BehaviorData12popFromStackERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    class DataProxy {

    public:
        ~DataProxy(); // _ZN12BehaviorData9DataProxyD2Ev
//      DataProxy(std::string const&, BehaviorData::DataType); //TODO: incomplete function definition // _ZN12BehaviorData9DataProxyC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_8DataTypeE
    };
};
