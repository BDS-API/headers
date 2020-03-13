#pragma once

#include "../bedrock/util/BlockPos.h"


class CircuitComponentList {

public:
    class Item;

    CircuitComponentList(); // _ZN20CircuitComponentListC2Ev
    ~CircuitComponentList(); // _ZN20CircuitComponentListD2Ev
    void add(BaseCircuitComponent *, int, BlockPos); // _ZN20CircuitComponentList3addEP20BaseCircuitComponenti8BlockPos
    void begin(); // _ZN20CircuitComponentList5beginEv
    void end(); // _ZN20CircuitComponentList3endEv
    void removeSource(BlockPos const&, BaseCircuitComponent const*); // _ZN20CircuitComponentList12removeSourceERK8BlockPosPK20BaseCircuitComponent
//  void erase(__gnu_cxx::__normal_iterator<CircuitComponentList::Item *, std::vector<CircuitComponentList::Item>>); //TODO: incomplete function definition // _ZN20CircuitComponentList5eraseEN9__gnu_cxx17__normal_iteratorIPNS_4ItemESt6vectorIS2_SaIS2_EEEE
    CircuitComponentList(CircuitComponentList const&); // _ZN20CircuitComponentListC2ERKS_
    CircuitComponentList(CircuitComponentList &&); // _ZN20CircuitComponentListC2EOS_
    void push_back(CircuitComponentList::Item const&); // _ZN20CircuitComponentList9push_backERKNS_4ItemE
    void size()const; // _ZNK20CircuitComponentList4sizeEv
    class Item {

    public:
        Item(BaseCircuitComponent *, int, BlockPos); // _ZN20CircuitComponentList4ItemC2EP20BaseCircuitComponenti8BlockPos
        Item(CircuitComponentList::Item &&); // _ZN20CircuitComponentList4ItemC2EOS0_
        Item(CircuitComponentList::Item const&); // _ZN20CircuitComponentList4ItemC2ERKS0_
        Item(); // _ZN20CircuitComponentList4ItemC2Ev
    };
};
