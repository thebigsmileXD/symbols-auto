#pragma once

class AdventureSettingsPacket : Packet {

    virtual ~AdventureSettingsPacket();
    virtual ~AdventureSettingsPacket();
    virtual void getId(void)const;
    virtual void _ZNK23AdventureSettingsPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
