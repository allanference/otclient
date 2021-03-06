/*
 * Copyright (c) 2010-2012 OTClient <https://github.com/edubart/otclient>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "towns.h"

Town::Town(uint32 tid, const std::string& name, const Position& pos)
    : m_id(tid), m_name(name)
{
    if(pos.isValid())
        m_pos = pos;
}


void Towns::addTown(const TownPtr &town)
{
    if(findTown(town->getId()) == m_towns.end())
        m_towns.push_back(town);
}

void Towns::removeTown(uint32 townId)
{
    auto it = findTown(townId);
    if(it != m_towns.end())
        m_towns.erase(it);
}

TownPtr Towns::getTown(uint32 townId)
{
    auto it = findTown(townId);
    if(it != m_towns.end())
        return *it;
    return nullptr;
}

TownList::iterator Towns::findTown(uint32 townId)
{
    return std::find_if(m_towns.begin(), m_towns.end(),
                        [=] (const TownPtr& town) -> bool { return town->getId() == townId; });
}
