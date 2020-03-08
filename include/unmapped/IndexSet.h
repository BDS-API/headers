#pragma once



class IndexSet {

public:

    IndexSet(void);
    IndexSet(unsigned long, unsigned long);
    IndexSet(IndexSet const&);
    IndexSet(IndexSet&&);
    IndexSet(std::vector<unsigned long, std::allocator<unsigned long>>, std::vector<unsigned long, std::allocator<unsigned long>>);
    void sameSetAs(IndexSet const&)const;
    void size()const;
    void subsetOf(IndexSet const&)const;
    void contains(unsigned long)const;
    void intersects(IndexSet const&)const;
    void insert(unsigned long);
    void remove(unsigned long);
    void reserve(unsigned long);
    void clear();
    void getPacked()const;
};
