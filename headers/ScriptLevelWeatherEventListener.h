#pragma once

class ScriptLevelWeatherEventListener : LevelEventListener {

    virtual ~ScriptLevelWeatherEventListener();
    virtual ~ScriptLevelWeatherEventListener();
    virtual void onLevelInitialized(Level &);
    virtual void onLevelSaveData(Level &, CompoundTag &);
    virtual void onLevelAddedPlayer(Level &, Player &);
    virtual void onLevelRemovedPlayer(Level &, Player &);
    virtual void onLevelRemovedActor(Level &, Actor &);
    virtual void onLevelAddedActor(Level &, Actor &);
    virtual void onLevelTick(void);
    virtual void onLevelWeatherChange(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, bool);
}
