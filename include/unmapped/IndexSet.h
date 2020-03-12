#pragma once

#include <vector>


class IndexSet {

public:
    void operator==(IndexSet const&)const;
    void contains(unsigned long)const;
    void intersects(IndexSet const&)const;
    IndexSet(std::vector<unsigned long>, std::vector<unsigned long>);
    IndexSet(unsigned long, unsigned long);
    IndexSet();
    ~IndexSet();
    void remove(unsigned long);
    void insert(unsigned long);
    void reserve(unsigned long);
    void clear();
    IndexSet(IndexSet const&);
    void size()const;
    void subsetOf(IndexSet const&)const;
    void getPacked()const;
    IndexSet(IndexSet &&);
    void sameSetAs(IndexSet const&)const;
};
