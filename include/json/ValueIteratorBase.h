#pragma once



using namespace Json;

class ValueIteratorBase {

public:

    ValueIteratorBase(void);
    ValueIteratorBase(Json::ValueIteratorBase const&);
    ValueIteratorBase(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&);
    void deref()const;
    void increment();
    void decrement();
    void computeDistance(Json::ValueIteratorBase const&)const;
    bool isEqual(Json::ValueIteratorBase const&)const;
    void copy(Json::ValueIteratorBase const&);
    void key()const;
    void index()const;
    void memberName()const;
};
