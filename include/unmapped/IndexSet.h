#pragma once

#include <vector>


class IndexSet {

public:
    IndexSet(); // _ZN8IndexSetC2Ev
    IndexSet(unsigned long, unsigned long); // _ZN8IndexSetC2Emm
    IndexSet(IndexSet const&); // _ZN8IndexSetC2ERKS_
    IndexSet(IndexSet &&); // _ZN8IndexSetC2EOS_
    ~IndexSet(); // _ZN8IndexSetD2Ev
    IndexSet(std::vector<unsigned long>, std::vector<unsigned long>); // _ZN8IndexSetC2ESt6vectorImSaImEES2_
    void operator==(IndexSet const&)const; // _ZNK8IndexSeteqERKS_
    void sameSetAs(IndexSet const&)const; // _ZNK8IndexSet9sameSetAsERKS_
    void size()const; // _ZNK8IndexSet4sizeEv
    void subsetOf(IndexSet const&)const; // _ZNK8IndexSet8subsetOfERKS_
    void contains(unsigned long)const; // _ZNK8IndexSet8containsEm
    void intersects(IndexSet const&)const; // _ZNK8IndexSet10intersectsERKS_
    void insert(unsigned long); // _ZN8IndexSet6insertEm
    void remove(unsigned long); // _ZN8IndexSet6removeEm
    void reserve(unsigned long); // _ZN8IndexSet7reserveEm
    void clear(); // _ZN8IndexSet5clearEv
    void getPacked()const; // _ZNK8IndexSet9getPackedEv
};
