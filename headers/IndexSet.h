#pragma once

class IndexSet {

public:

    void IndexSet(void);
    void IndexSet(unsigned long, unsigned long);
    void IndexSet(IndexSet const&);
    void IndexSet(IndexSet&&);
    void IndexSet(std::vector<unsigned long, std::allocator<unsigned long>>, std::vector<unsigned long, std::allocator<unsigned long>>);
    void sameSetAs(IndexSet const&)const;
    void size(void)const;
    void subsetOf(IndexSet const&)const;
    void contains(unsigned long)const;
    void intersects(IndexSet const&)const;
    void insert(unsigned long);
    void remove(unsigned long);
    void reserve(unsigned long);
    void clear(void);
    void getPacked(void)const;
};
