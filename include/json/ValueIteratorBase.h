#pragma once

#include "./Value.h"
#include <utility>
#include "./ValueIteratorBase.h"
#include "./CZString.h"


namespace Json {

class ValueIteratorBase {

public:

    void operator!=(Json::ValueIteratorBase const&)const;
    ValueIteratorBase();
    ValueIteratorBase(Json::ValueIteratorBase const&);
//  ValueIteratorBase(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition
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

}