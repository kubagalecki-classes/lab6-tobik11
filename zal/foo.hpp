#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

using namespace std;

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    // Twoja implementacja tutaj
    for_each(people.begin(), people.end(), [](Human& person) { person.birthday(); });

    transform(people.rbegin(), people.rend(), ret_v.begin(), [](Human& person) {
        return person.isMonster() ? 'n' : 'y';
    });

    return ret_v;
}
