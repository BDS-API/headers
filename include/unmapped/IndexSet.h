#pragma once

#include <vector>


class IndexSet {

public:
    void subsetOf(IndexSet const&)const;
    void operator==(IndexSet const&)const;
    ~IndexSet();
    IndexSet(IndexSet const&);
    void size()const;
    void intersects(IndexSet const&)const;
    IndexSet(unsigned long, unsigned long);
    IndexSet();
    void insert(unsigned long);
    void remove(unsigned long);
    void sameSetAs(IndexSet const&)const;
    IndexSet(std::vector<unsigned long>, std::vector<unsigned long>);
    void contains(unsigned long)const;
    void reserve(unsigned long);
    IndexSet(IndexSet &&);
    void clear();
    void getPacked()const;
};
