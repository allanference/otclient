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

#ifndef OTCLIENT_DECLARATIONS_H
#define OTCLIENT_DECLARATIONS_H

#include "global.h"
#include <framework/net/declarations.h>
#include <framework/ui/declarations.h>

// core
class Map;
class Game;
class MapView;
class Tile;
class Thing;
class Item;
class Container;
class Creature;
class Monster;
class Npc;
class Player;
class LocalPlayer;
class Effect;
class Missile;
class AnimatedText;
class StaticText;
class ThingType;
class ItemType;
class House;
class Town;
class CreatureType;

typedef std::shared_ptr<MapView> MapViewPtr;
typedef std::shared_ptr<Tile> TilePtr;
typedef std::shared_ptr<Thing> ThingPtr;
typedef std::shared_ptr<Item> ItemPtr;
typedef std::shared_ptr<Container> ContainerPtr;
typedef std::shared_ptr<Creature> CreaturePtr;
typedef std::shared_ptr<Monster> MonsterPtr;
typedef std::shared_ptr<Npc> NpcPtr;
typedef std::shared_ptr<Player> PlayerPtr;
typedef std::shared_ptr<LocalPlayer> LocalPlayerPtr;
typedef std::shared_ptr<Effect> EffectPtr;
typedef std::shared_ptr<Missile> MissilePtr;
typedef std::shared_ptr<AnimatedText> AnimatedTextPtr;
typedef std::shared_ptr<StaticText> StaticTextPtr;
typedef std::shared_ptr<ThingType> ThingTypePtr;
typedef std::shared_ptr<ItemType> ItemTypePtr;
typedef std::shared_ptr<House> HousePtr;
typedef std::shared_ptr<Town> TownPtr;
typedef std::shared_ptr<CreatureType> CreatureTypePtr;

typedef std::vector<ThingPtr> ThingList;
typedef std::vector<ThingTypePtr> ThingTypeList;
typedef std::vector<ItemTypePtr> ItemTypeList;
typedef std::vector<HousePtr> HouseList;
typedef std::vector<TownPtr> TownList;
typedef std::unordered_map<Position, TilePtr, PositionHasher> TileMap;

// net
class ProtocolLogin;
class ProtocolGame;

typedef std::shared_ptr<ProtocolGame> ProtocolGamePtr;
typedef std::shared_ptr<ProtocolLogin> ProtocolLoginPtr;

// ui
class UIItem;
class UICreature;
class UIMap;
class UIProgressRect;

typedef std::shared_ptr<UIItem> UIItemPtr;
typedef std::shared_ptr<UICreature> UICreaturePtr;
typedef std::shared_ptr<UIMap> UIMapPtr;
typedef std::shared_ptr<UIProgressRect> UIProgressRectPtr;

#endif