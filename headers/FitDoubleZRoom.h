#pragma once

class FitDoubleZRoom : MonumentRoomFitter {

    virtual ~FitDoubleZRoom();
    virtual ~FitDoubleZRoom();
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
}
