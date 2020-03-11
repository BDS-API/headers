#pragma once

#include "./ValueConstIterator.h"
#include <utility>
#include "./CZString.h"
#include "./Value.h"


namespace Json {

class ValueConstIterator {

public:

    void operator*()const;
    ValueConstIterator(Json::ValueConstIterator const&);
    ValueConstIterator();
//  ValueConstIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition
};

}